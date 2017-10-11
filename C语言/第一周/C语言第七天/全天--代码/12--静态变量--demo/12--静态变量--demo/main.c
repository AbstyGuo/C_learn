//
//  main.c
//  12--静态变量--demo
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//
#include <stdio.h>

int c = 10;

//int func(void);
//static void func(void);//给编译器看的

void func(void)
{
    static int d = 10;
    d++;
    printf("d = %d\n",d);
}

int main(int argc, const char * argv[])
{
    int b = 10;
    
    static int a = 10;
    
    printf("%p\n",&b);
    printf("%p\n",&a);
    
    printf("%p\n",&c);
    
    func();
    func();
    return 0;
}











