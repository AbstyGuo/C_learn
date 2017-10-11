//
//  main.c
//  1--函数作业1--3.编写函数，返回两个数的最大公约数。
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//3.编写函数，返回两个数的最大公约数。
//声明
int max_gongyueshu(int a,int b);


int main(int argc, const char * argv[])
{
    printf("max = %d\n",max_gongyueshu(10,7));
    
    return 0;
}
//最大公约数
int max_gongyueshu(int a,int b)
{
    int min = a < b?a:b;
    for(int i = min;i >1;i--)
    {
        if(a % i == 0 && b %i == 0)
        {
            return i;
        }
    }
    return 1;
}








