//
//  main.c
//  9--字符串操作的相关函数
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>//包含了字符串操作的所有函数.

int main(int argc, const char * argv[])
{
//    char * pStr = "ab\0cd\0";//strlen遇到第一个'\0'就会停止统计.
    char * pStr = "ab\0cd\0";
    
    //strlen
    unsigned long length = strlen(pStr);
    printf("length = %ld\n",length);
    
    
    
    return 0;
}






