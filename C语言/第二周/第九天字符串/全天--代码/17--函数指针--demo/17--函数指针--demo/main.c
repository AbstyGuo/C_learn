//
//  main.c
//  17--函数指针--demo
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
int foo(int a)
{
    return a;
}
void func(int (*p)(int))
{
    int ret = p(1);
    printf("ret = %d\n",ret);
}
int main(int argc, const char * argv[])
{
    //函数指针
    int (*p)(int);
    p = (int (*)(int))0x0011;
    p = foo;
    
    int ret = p(1);
    foo(1);
    
    printf("ret = %d\n",ret);
    
    func(foo);
    
    return 0;
}








