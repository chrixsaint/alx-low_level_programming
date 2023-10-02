#ifndef MAIN_H
#define MAIN_H

/* Headers */
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/* Function Prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void check_elf(unsigned char *e_ident);
void output_magic(unsigned char *e_ident);
void output_class(unsigned char *e_ident);
void output_data(unsigned char *e_ident);
void output_version(unsigned char *e_ident);
void output_abi(unsigned char *e_ident);
void output_osabi(unsigned char *e_ident);
void output_type(unsigned int e_type, unsigned char *e_ident);
void output_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif /** MAIN_H **/