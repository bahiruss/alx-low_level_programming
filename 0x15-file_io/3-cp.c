#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 *
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{

char *buffers;
buffers = malloc(sizeof(char) * 1024);
if (buffers == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffers);
}

/**
 * close_file - It closes file descriptors.
 *
 * @fd: It is the file descriptor to be closed.
 */

void close_file(int fd)
{

int g;
g = close(fd);
if (g == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of a file to another file.
 *
 * @argc: The number of arguments supplied to the program.
 *
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
int sour, dest, v, x;
char *buffers;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffers = create_buffer(argv[2]);
sour = open(argv[1], O_RDONLY);
v = read(sour, buffers, 1024);
dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (sour == -1 || v == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffers);
exit(98);
}
x = write(dest, buffers, v);
if (dest == -1 || x == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffers);
exit(99);
}
v = read(sour, buffers, 1024);
dest = open(argv[2], O_WRONLY | O_APPEND);
} while (v > 0);
free(buffers);
close_file(sour);
close_file(dest);
return (0);
}
