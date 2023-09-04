#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 *
 * @text_content: The string to add to the end of the file.
 *
 * Return: Returns if the function fails or filename is NULL - -1 else 1.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{

int kl, mk, leng = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (leng = 0; text_content[leng];)
leng++;
}
kl = open(filename, O_WRONLY | O_APPEND);
mk = write(kl, text_content, leng);
if (kl == -1 || mk == -1)
return (-1);
close(kl);
return (1);
}
