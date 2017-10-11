//
//  main.c
//  5--字符串作业5--自主实现strcpy函数
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//1.实现myStrcpy，功能类似官方strcpy,不能使用官方的strcpy;

char * myStrcpy(char * dst,const char * src)
{
    char * old_dst = dst;
//    while((*dst++ = *src++));
    while(*src)
    {
        *dst = *src;
        dst++;
        src++;
    }
    
    *dst = '\0';
    return old_dst;
}


int main(int argc, const char * argv[])
{
    
    char array[100];
    
    myStrcpy(array, "www.1000phone.com");
    
    printf("%s\n",array);
    
    
    return 0;
}







