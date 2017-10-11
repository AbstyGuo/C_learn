//
//  main.c
//  7--赋值运算符--demo
//
//  Created by YanTianFeng on 15-10-12.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //赋值运算符
    //赋值运算符是一个 =
    
    int a = 0;
    
    a = 10;
    
    printf("%d\n",(a = 20));
    printf("a = %d\n",a);
    
    
    //在c语言中 0为 "假",, 非0即"真".
    if((a = 3))
    {
//        !0  1  'a'  非0即真
        printf("hehe\n");
    }
    
    a = (1,2,3,4,5);
    
    a += 3;
    
    printf("a = %d\n",a);
    
    //以下哪个表达式是正确的
    //A:a=3+5   B:(3+a)=3   C:a=3+a=3  D(x+y)(x-y)
    //A是对的
    //[注] = 左边必须是变量.
    return 0;
}









