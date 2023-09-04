#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, write_status, close_status;
    ssize_t text_length = 0;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);

    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[text_length] != '\0')
            text_length++;

        write_status = write(fd, text_content, text_length);
        if (write_status == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close_status = close(fd);
    if (close_status == -1)
        return (-1);

    return (1);
}
