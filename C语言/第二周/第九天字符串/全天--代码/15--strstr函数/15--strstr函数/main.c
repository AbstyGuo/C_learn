//
//  main.c
//  15--strstr函数
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{

    //strstr函数
    char * str1 = "abcabcaaabbbaaa";
    char * str2 = "aaa";
    char * str3 = "aaaa";
    
    //找见"aaa"
    char * firstAddress = strstr(str1, str2);
    printf("%p\n",str1);
    printf("%p\n",firstAddress);
    
    //没找见"aaaa"
    firstAddress = strstr(str1, str3);
    printf("%p\n",firstAddress);//0x0
    printf("%s\n",firstAddress);//null

    
    return 0;
}






