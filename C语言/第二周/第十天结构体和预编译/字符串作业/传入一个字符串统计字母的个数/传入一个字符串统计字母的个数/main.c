//
//  main.c
//  传入一个字符串统计字母的个数
//
//  Created by student on 15-10-21.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//编写函数，传入一个字符串，返回字符串中字母的个数。
int numAlpha(const char * str)
{
    int count=0;//保存字母的个数
    while (*str) {
        if ((*str>='a'&&*str<='z')||(*str>='A'&&*str<='Z')) {
            count++;
        }
        str++;
    }
    return count;
}
int main(int argc, const char * argv[])
{
    char c[100]={};
    scanf("%s",c);
    printf("%d\n",numAlpha(c));
    return 0;
}

