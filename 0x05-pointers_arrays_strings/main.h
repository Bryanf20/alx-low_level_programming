#ifndef MAIN_H
#define MAIN_H

/* This a header file containing declarations
 * for prototype functions defined in the 0x05-pointers_arrays_strings
 */
/* enclosing the files  contentinbetween ifndef,define and endif,
 * stops the compiler from processing the file twice
 */

void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
int _putchar(char c);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

#endif
