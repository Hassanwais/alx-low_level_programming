#ifndef MAIN_H_
#define MAIN_H_

/**
* This header file has all the prototyoea for task                                          * 0x08. C - Recursion
*/

int _putchar(char c);
char *create_array(unsigned int size, char c);char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
