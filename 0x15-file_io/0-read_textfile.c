#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- It Reads the text file print to STDOUT.
 *
 * @filename: It's text file being read
 *
 * @letters: It's the number of letters to be read
 *
 * Return: returns w- the actual number of bytes read and print 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

char *fen;
ssize_t ol;
ssize_t b;
ssize_t c;
ol = open(filename, O_RDONLY);
if (ol == -1)
return (0);
fen = malloc(sizeof(char) * letters);
c = read(ol, fen, letters);
b = write(STDOUT_FILENO, fen, c);
free(fen);
close(ol);
return (b);
}
