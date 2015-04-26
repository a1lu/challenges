#include <stdio.h>
#include <string.h>

#define BUFSIZE 30
int main(int argc, char* argv[])
{
    char buf[BUFSIZE]={};
    int i=0, j=0;
    if(argc<2)
    {
        printf("Usage: ./tornado <\"string\">");
        return -1;
    }
    if(strlen(argv[1]) > BUFSIZE)
    {
        printf("Text to long\n");
            return -2;
    }
    memset(buf,0x20,BUFSIZE);
    memcpy(buf, argv[1], strlen(argv[1]));
    printf("%s\n", buf);
    int k=0;
    while(k++<300)
    {
        do
        {
            printf("%c", buf[i++ % BUFSIZE]);
        }while( (i%BUFSIZE) != (j%BUFSIZE) );
        ++j;
        i=j;
        puts("");
    }

}
