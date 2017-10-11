//
//  main.c
//  7--字符数组和字符串--初始化和赋值
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//遍历数组的每个元素
void printArray(char * p,int length)
{
    for(int i = 0;i < length;i++)
    {
        printf("%c",p[i]);
    }
    printf("\n");
}
int main(int argc, const char * argv[])
{

    //字符数组初始化
    //完全初始化
    char str[10] = {'a','b','c','d','e','f','g','h','i','j'};
    //部分初始化
    char str2[10] = {'a','b'};//未显示初始化的元素自动被初始化为0
    char str3[10] = {};//清空字符数组
    
    //其他初始化
    char str4[10] = "hello";
    char * p = "hello";//通过p无法修改所指向的数据.
    
    //字符数组赋值
    //字符数组不能整体赋值,只能单个元素单独赋值.
    
    //str = str2;不能整体赋值
    
    printArray(str, 10);
    printArray(str2, 10);
    printArray(str3, 10);
    
    printf("%s\n",str4);
    printf("%s\n",p);
    printf("%p\n",str4);
    printf("%p\n",p);
    
    return 0;
}









