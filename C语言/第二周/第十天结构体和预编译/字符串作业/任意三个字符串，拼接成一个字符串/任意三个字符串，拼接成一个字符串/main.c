//
//  main.c
//  任意三个字符串，拼接成一个字符串
//
//  Created by student on 15-10-21.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void threetoOne(char * dst, const char * s1, const char * s2, const char * s3)
{
   // 使用官方的字符串拼接函数strcat实现三个字符串拼接。
#if 0    //方法一：
    printf("%s\n",strcat(strcat(strcat(dst, s1),s2),s3));
#elif 0
    //方法二：
    strcat(dst, s1);
    strcat(dst, s2);
    strcat(dst, s3);
    printf("%s\n",dst);
#elif 0
    //方法三
    char *old_dst=dst;
    //把s1指向的字符串拼接到dst指向的字符串后
    while (*s1) {
        *dst=*s1;
        dst++;
        s1++;
    //把s2指向的字符串拼接到dst指向的字符串后
    }while (*s2) {
        *dst=*s2;
        dst++;
        s2++;
    //把s3指向的字符串拼接到dst指向的字符串后
    }while (*s3) {
        *dst=*s3;
        dst++;
        s3++;
    }
    printf("%s\n",old_dst);
#elif 0
    //方法四
    while (*s1) {
        *dst++=*s1++;
    }while (*s2) {
        *dst++=*s2++;
    }while (*s3) {
        *dst++=*s3++;
    }
#elif 1
    //方法五
    while ((*dst++ = *s1++));//"www.\0"
    dst--;//减掉多复制过来的‘\0’。
    while ((*(dst)++ = *s2++));//"www.ytf.local\0"
    dst--;//减掉多复制过来的‘\0’。
    while ((*(dst)++ = *s3++));//"www.ytf.local/ios1558\0"
#endif
}
int main(int argc, const char * argv[])
{
    char array[100]={};
    char *s1="www.";
    char *s2="ytf.local";
    char *s3="/ios1558";
    threetoOne(array, s1, s2, s3);
    printf("%s\n",array);
    return 0;
}

