//
//  main.c
//  12--strcpy函数
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{

    //strcpy
    //使用strcpy进行字符串拷贝时,必须保证目的字符串的空间足够大.
    char dest[100] = {};
    char * src = "abcd";
    
    strcpy(dest, src);
    
    printf("%s\n",dest);
    
    return 0;
}







