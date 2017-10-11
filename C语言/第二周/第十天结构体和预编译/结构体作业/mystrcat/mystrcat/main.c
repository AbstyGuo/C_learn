//
//  main.c
//  mystrcat
//
//  Created by qianfeng on 15-10-21.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char * mystrcat(char * a,char * b)
{
    char *p=a;
    p=p+strlen(a);
    while ((*p++=*b++));
    return a;
}

int main(int argc, const char * argv[])
{
    char a[100]={},b[10]={};
    scanf("%s%s",a,b);
    mystrcat(a, b);
    printf("%s\n",a);
    return 0;
}

