//
//  main.c
//  8--字符数组初始化--两种方式的区别
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    char str1[10] = {'a','b','a','b','a','b','a','b','a','b'};
    char str2[10] = "ababababa";
    printf("%p\n",str1);
    printf("%p\n",str2);
    
    printf("%s\n",str1);
    printf("%s\n",str2);
    
    return 0;
}








