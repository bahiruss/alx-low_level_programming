#include <stdlib.h>
#include "main.h"

/**
*word_len - locates the index marking the ende of
*the first word contained with in string.
*@str: string to evaluate
*
*Return: The index marking the ende of the initial word pointed to by str
*/

int word_len(char *str)
{
int index = 0, z = 0;

while (*(str + index) && *(str + index) != ' ')
{
z++;
index++;
}

return (z);
}

/**
*count_words - counts the number of words contained with ina string
*@str: the string to be searched
*
*Return: The number of words contained with in str.
*/

int count_words(char *str)
{
int index = 0, words = 0, len = 0;
for (index = 0; *(str + index); index++)
len++;
for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
words++;
index += word_len(str + index);
}
}
return (words);
}

/**
***strtow - splits a string into words
*@str: string to split
*
*Return: pointer to an array of strings (Success)
*/

char **strtow(char *str)
{
char **strings;
int index = 0, words, x, letters, l;

if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);

strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);

for (x = 0; x < words; x++)
{
while (str[index] == ' ')
index++;
letters = word_len(str + index);

strings[x] = malloc(sizeof(char) * (letters + 1));

if (strings[x] == NULL)
{
for (; x >= 0; x--)
free(strings[x]);
free(strings);
return (NULL);
}
for (l = 0; l < letters; l++)
strings[x][l] = str[index++];
strings[x][l] = '\0';
}
strings[x] = NULL;
return (strings);
}
