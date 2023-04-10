#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - tries to read x(letters) number of letters
 * @filename: The File name
 * @letters: The Number of letters it should read
 * Return: Number of Read letters or zero.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fp;
fp = fopen(filename, "r+");
if (fp == NULL)
{
return (0);
}
fclose(fp);
return (0);
}
