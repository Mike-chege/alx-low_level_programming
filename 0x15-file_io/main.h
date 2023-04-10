#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

/*
 * prototypes for files:
 * 0-read_textfile.c
 * 1-create_file.c
 * 2-append_text_to_file.c
 * 3-cp.c
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
