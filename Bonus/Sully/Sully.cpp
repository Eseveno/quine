#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#define B "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <iostream>%c#define B %c%s%c%c#define A int main(int argc, char **argv){(void)argc;char buf[100];char buf2[1000];char buf3[1000];int i=%d;if (strlen(argv[0]) == 7)i++;if (i>0){snprintf(buf,sizeof(buf),%cSully_%cd.cpp%c,i-1);snprintf(buf2,sizeof(buf2),%cg++ -o Sully_%cd Sully_%cd.cpp%c,i-1,i-1);snprintf(buf3,sizeof(buf3),%c./Sully_%cd%c,i-1);FILE *fd=fopen(buf,%cw%c);fprintf(fd,B,10,10,10,10,34,B,34,10,i-1,34,37,34,34,37,37,34,34,37,34,34,34,10);fclose(fd);system(buf2);system(buf3);}return 0;}%cA"
#define A int main(int argc, char **argv){(void)argc;char buf[100];char buf2[1000];char buf3[1000];int i=5;if (strlen(argv[0]) == 7)i++;if (i>0){snprintf(buf,sizeof(buf),"Sully_%d.cpp",i-1);snprintf(buf2,sizeof(buf2),"g++ -o Sully_%d Sully_%d.cpp",i-1,i-1);snprintf(buf3,sizeof(buf3),"./Sully_%d",i-1);FILE *fd=fopen(buf,"w");fprintf(fd,B,10,10,10,10,34,B,34,10,i-1,34,37,34,34,37,37,34,34,37,34,34,34,10);fclose(fd);system(buf2);system(buf3);}return 0;}
A