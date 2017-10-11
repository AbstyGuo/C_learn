//
//  main.c
//  10--函数练习
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <math.h>

//0.编写函数,打印10次”hello world!”.
//声明
void print10HelloWorld(void);
//定义
//功能:打印10次”hello world!”
void print10HelloWorld(void)
{
    for(int i = 0;i < 10;i++)
    {
        printf("%dhello world\n",i+1);
    }
    return ;
}

//1.编写函数,传入参数 n,打印 n 次 “hello world”.
//声明
void printNHelloWorld(int n);
//定义
//功能:传入一个参数n,打印n次"hello world"
void printNHelloWorld(int n)
{
    for(int i = 0;i < n;i++)
    {
        printf("%dhello world\n",i+1);
    }
    
}

//2.编写函数，传入两个整数，返回两个整数的立方和。
//函数的原型（声明）:int foo(int a,int b);
int foo(int a,int b);

int foo(int a,int b)
{
    return pow(a,3)+pow(b,3);
}


int main(int argc, const char * argv[])
{
    //函数调用
    print10HelloWorld();
    printNHelloWorld(70);
    int ret = foo(10,20);
    
    printf("ret = %d\n",ret);
    
    return 0;
}








