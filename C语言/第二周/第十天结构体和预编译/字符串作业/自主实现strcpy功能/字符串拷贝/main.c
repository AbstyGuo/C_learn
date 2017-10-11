//
//  main.c
//  字符串拷贝
//
//  Created by student on 15-10-20.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char * mycpy(char * dest, const char * src)
{
    char *old_dest=dest;
    while ((*dest++=*src++)) ;
    return old_dest;
}
int main(int argc, const char * argv[])
{
    char c[100]={};
    char *p="hello world";
    printf("%s\n",mycpy(c,p));
    return 0;
}

