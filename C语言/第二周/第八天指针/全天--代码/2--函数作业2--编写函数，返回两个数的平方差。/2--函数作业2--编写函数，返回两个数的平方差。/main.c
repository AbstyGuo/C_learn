//
//  main.c
//  2--函数作业2--编写函数，返回两个数的平方差。
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//编写函数，返回两个数的平方差。
//声明
int pingfangcha(int a,int b);

int main(int argc, const char * argv[])
{

    printf("%d\n",pingfangcha(1,3));
    return 0;
}

int pingfangcha(int a,int b)
{
    return a*a - b*b;
}







