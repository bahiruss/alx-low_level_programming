#include "main.h"

/**
 * create_file - It Creates a file.
 *
 * @filename: It points to the name of the file to create.
 *
 * @text_content: It points to a string to write to the file.
 *
 * Return: returns the function fails - -1 else 1
 */

int create_file(const char *filename, char *text_content)
{

int ol, b, leng = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (leng = 0; text_content[leng];)
leng++;
}
ol = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
b = write(ol, text_content, leng);
if (ol == -1 || b == -1)
return (-1);
close(ol);
return (1);
}
