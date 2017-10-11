//
//  main.c
//  11--函数的栈空间
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

/**
    功能:传入两个整型数,返回两个整型数的和
 */
//声明(原型)
int sumOfAandB(int a,int b);

//定义(实现)
int sumOfAandB(int a,int b)//形参部分的变量,是函数内部变量
{
    int c;
    
    //d = 20;
    return a+b;
    
    
}

int d = 10;
//d = 20;
int main(int argc, const char * argv[])
{
    d = 20;
    //函数调用
    sumOfAandB(10,20);
    
//    a = 10;
//    b = 10;
//    c = 10;
//    i++;
    //在初始化列表部分定义循环变量,只是在C99/C11下可以用
    for(int i = 0;i < 10;i++)
    {
        i++;
    }
    
//    i++;
    if(1)
    {
        int a = 10;
        if(1)
        {
            int b = 10;
        }
        //b++;
    }
    
    
    d = 30;
    return 0;
}

void func2(void);
void func2(void)
{
    d = 40;
}







