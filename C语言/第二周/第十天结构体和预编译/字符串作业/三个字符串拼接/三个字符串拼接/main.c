//
//  main.c
//  三个字符串拼接
//
//  Created by student on 15-10-20.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void threetoOne(char * dst, const char * s1, const char * s2, const char * s3)
{
    strcat(dst, s1);
    strcat(dst, s2);
    strcat(dst, s3);
    return;
}
int main(int argc, const char * argv[])
{
    char cr[100]={};
    char cx[100]={};
    char cw[100]={};
    char cm[100]={};
    scanf("%s",cr);
    scanf("%s",cx);
    scanf("%s",cw);
    scanf("%s",cm);
    threetoOne(cr, cx, cw, cm);
    printf("%s",cr);
    return 0;
}

