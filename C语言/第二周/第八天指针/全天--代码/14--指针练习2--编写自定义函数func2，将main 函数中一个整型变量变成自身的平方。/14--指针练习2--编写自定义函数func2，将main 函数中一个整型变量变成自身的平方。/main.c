//
//  main.c
//  14--指针练习2--编写自定义函数func2，将main 函数中一个整型变量变成自身的平方。
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//编写自定义函数func2，将main 函数中一个整型变量变成自身的平方。
void func2(int * p)
{
//    *p = *p * *p;
    int a = *p;
    *p = a * a;
}
int main(int argc, const char * argv[])
{
    int a = 10;
    printf("a = %d\n",a);
    func2(&a);
    printf("a = %d\n",a);
    return 0;
}

