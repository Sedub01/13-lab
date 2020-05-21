#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct _Node
{
    char *adress;
    struct _Node *next;
};
typedef struct _Node Node;

union charByte
{
    int ss;
    struct
    {
        unsigned char s0:1;
        unsigned char s1:1;
        unsigned char s2:1;
        unsigned char s3:1;
        unsigned char s4:1;
        unsigned char s5:1;
        unsigned char s6:1;
        unsigned char s7:1;
    } b;
};

typedef union charByte cb;
