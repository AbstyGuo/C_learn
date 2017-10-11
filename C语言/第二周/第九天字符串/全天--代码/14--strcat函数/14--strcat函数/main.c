//
//  main.c
//  14--strcat函数
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{

    //strcat函数
    //string connect address to
    
    char str1[100] = "aaaa";
    char * str2 = "bbbb";
    char * newStr = strcat(str1, str2);
    //使用strcat时,必须保证str1指向的内存空间足够大.
    
    printf("%p\n",str1);
    printf("%p\n",newStr);
    
    printf("%s\n",str1);
    printf("%s\n",newStr);
    
    printf("%s\n",strcat(strcat(str1,"cccc"),"dddd"));
    
    printf("%s\n",str1);
    
    
    return 0;
}








