#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX stdo.
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
		ssize_t read_count, write_count;
		char *buffer;

		if (!filename)
		{
			return (0);
		}
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
		}
		buffer = malloc(sizeof(char) * letters);
		if (!buffer)
		{
			close(fd);
			return (0);
		}
		read_count = read(fd, buffer, letters);
		write_count = write(STDOUT_FILENO, buffer, read_count);
		free(buffer);
		close(fd);
		if (read_count == -1 || write_count != read_count)
			return (0);
		return (write_count);
}
