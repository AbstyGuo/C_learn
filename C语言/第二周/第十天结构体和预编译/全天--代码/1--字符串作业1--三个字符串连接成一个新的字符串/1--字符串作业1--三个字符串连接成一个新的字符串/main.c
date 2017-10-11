//
//  main.c
//  1--字符串作业1--三个字符串连接成一个新的字符串
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

//输入任意三个字符串，将三个字符串拼接到一起，生成新的字符串。
void threeToOne(char * dst, const char * s1, const char * s2, const char * s3);
//
//<string.h>
//char * strcat(char * s1, const char * s2);
//char * strcpy(char * s1, const char * s2);
//添加头文件<string.h>

#include <string.h>

void threeToOne(char * dst,const char * s1,const char *s2,const char * s3)
{
    //使用官方的字符串拼接函数strcat实现三个字符串拼接.
#if 0
    //方法一
    printf("%s",strcat(strcat(strcat(dst, s1), s2), s3));
    //方法二
#elif 0
    strcat(dst, s1);
    strcat(dst, s2);
    strcat(dst, s3);
    
    printf("%s",dst);
    
#elif 0
    
    //方法三
    char * old_dst = dst;//保存dst指向的最初地址.
    //把s1指向的字符串拼接到dst指向的字符串后.
    while(*s1)
    {
        *dst = *s1;
        dst++;
        s1++;
    }
    //把s2指向的字符串拼接到dst指向的字符串后.
    while(*s2)
    {
        *dst = *s2;
        dst++;
        s2++;
    }
    //把s3指向的字符串拼接到dst指向的字符串后.
    while (*s3)
    {
        *dst = *s3;
        dst++;
        s3++;
    }
    *dst = '\0';
    printf("%s\n",old_dst);
#elif 0
    
    //方法四
    char * old_dst = dst;
    while(*s1)
    {
        *dst++ = *s1++;
    }
    while(*s2)
    {
        *dst++ = *s2++;
    }
    while(*s3)
    {
        *dst++ = *s3++;
    }
    
    printf("%s\n",old_dst);
    
#elif 1
    
    //方法五
    char * old_dst = dst;
    
//    while((*dst++ = *s1++));//"www\0"
//    while((*dst++ = *s2++));//"www\0.baidu\0"
//    while((*dst++ = *s3++));//"www\0.baidu\0.com\0"
    
    while((*dst++ = *s1++));//"www\0"
    dst--;
    while((*dst++ = *s2++));//"www.baidu\0"
    dst--;
    while((*dst++ = *s3++));//"www.baidu.com\0"
    printf("%s\n",old_dst);
        
#endif
    
}



int main(int argc, const char * argv[])
{

    char array[100] = {};
    char * s1 = "www";
    char * s2 = ".baidu";
    char * s3 = ".com";
    
    threeToOne(array, s1, s2, s3);
    
    return 0;
}










