#ifndef MY_HEADER_FILE_H 
#define MY_HEADER_FILE_H 

/**
 *  main - header file for prototype 
 *  void prototypes (void)  
 *  int prototypes (int)    
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _putchar(char c);   

#endif 
