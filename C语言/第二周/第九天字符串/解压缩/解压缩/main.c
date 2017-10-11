//
//  main.c
//  解压缩
//
//  Created by qianfeng on 15-10-23.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char * argv[])
{
    char c[100];
    scanf("%s",c);
    char *p=c;
    char a[100]={};
    int b[100]={};
    int k=0,j=0,i;
    while (*p)
    {
        if (*p>='0'&&*p<='9') {
            b[j++]=atoi(p);
        }
        if (!(*p>='0'&&*p<='9')) {
            a[k++]=*p;
        }
        p++;
    }
    for (i=0; i<100; i++)
    {
        j=0;
        while (j<b[i])
        {
            printf("%c",a[i]);
            j++;
        }
    }
    return 0;
}

