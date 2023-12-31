#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define EXIT_USAGE       97
#define EXIT_READ_ERROR  98
#define EXIT_WRITE_ERROR 99
#define EXIT_CLOSE_ERROR 100
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void handle_error(int exit_code, const char *error_msg, const char *file_name);
void copy_file(const char *source_file, const char *destination_file);

#endif
