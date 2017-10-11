//
//  main.c
//  4--字符串作业4--传入一个字符串,统计其中字母的个数
//
//  Created by YanTianFeng on 15-10-21.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//编写函数，传入一个字符串，返回字符串中字母的个数。
int numAlpha(const char * str)
{
    int count = 0;//保存字母的个数
    while(*str)
    {
        if((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            count++;
        }
        str++;
    }
    return count;
}
int main(int argc, const char * argv[])
{
    char * p = "+-abc., abc123";
    char array[100] = {'a','b'};
    char array2[3] = {'a','b','c'};//数组中无法保存'\0'
    
    printf("count = %d\n",numAlpha(p));
    
    return 0;
}







