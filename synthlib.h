#ifndef synthlib
#define synthlib

//FILE struct def from glibc
typedef struct 
{
 short level ;
 short token ;
 short bsize ;
 char fd ;
 unsigned flags ;
 unsigned char hold ;
 unsigned char *buffer ;
 unsigned char * curp ;
 unsigned istemp; 
}FILE ;






//functions declared in lib.asm

extern void print(char *);
extern int strcmp(char *, char *);
extern void putchar(char);
extern void println(char *);
extern int strlen(char *);
extern char getchar();
extern void sleep(int);
extern long exp(int, int);
extern void strcpy(char *, char *, int);
extern void putc(char, FILE *);
extern char getc(FILE *);
extern void inputb(char *, int);
extern void finputb(char *, int, FILE *);
extern signed long atoi(char *);
extern void strzero(char *);
extern void memzero(char *, int);
extern void memcpy(void *, void *, int);
extern int open(char *filename, int flags, int mode);
extern int read(char *filename, char *buffer, int length);
extern void write(char *filename, char *buffer);

#endif
