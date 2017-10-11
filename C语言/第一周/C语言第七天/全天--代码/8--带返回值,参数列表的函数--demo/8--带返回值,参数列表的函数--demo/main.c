//
//  main.c
//  8--带返回值,参数列表的函数--demo
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

//带返回值,参数列表的函数
//函数声明
int func(int a);
//函数定义
//功能:传入一个整型值,返回这个整型数的平方
int func(int a)//a = 10;函数定义时,参数列表中的都是形式参数(形参)
{
    return a*a;
    //return 语句,当程序执行到函数中的return语句时,当前函数就结束了.凡是写在return语句之后的代码都不会被执行.
    
    //return 语句后面可以带返回值,也可以不带返回值,具体要根据函数的功能来决定.
    
    //return 语句带返回值时,,返回的值作为,函数调用表达式的值.
    //return 语句不带返回值时,return ;只是代表函数调用结束.函数调用表达式没有值,不能参与运算.
    int aa = 10;
    printf("func\n");
}

//声明
void func2(int a,int b);
//定义(实现)
//功能:传入两个整型数,打印它们的和
void func2(int a,int b)
{
    printf("a+b = %d\n",a+b);
    return ;
}


int main(int argc, const char * argv[])
{
    //函数调用
    int ret = func(10);//函数调用时传入的参数,称为实际参数(实参)
    //函数调用时的参数传递,称为"传参".
    //传参实际上就是赋值(实参的值 赋值 给形参变量)
    
    printf("ret = %d\n",ret);
    
    printf("%d\n",func(100)+10000);
    
    func2(10,10);
    
    
    return 0;
}









