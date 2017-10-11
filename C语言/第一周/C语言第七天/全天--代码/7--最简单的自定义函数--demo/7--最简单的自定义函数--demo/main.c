//
//  main.c
//  7--最简单的自定义函数--demo
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

//最简单的自定义函数
//任何一个函数都必须包含两部分(声明和实现)
//每个函数在定义时,不可以嵌套定义.

//声明
void func(void);
//定义(实现)
void func(void)//函数头
{
    //函数体
    printf("func\n");
}

int main(int argc, const char * argv[])
{
    printf("func之前\n");
    //函数调用(使用)
    func();//当程序执行到函数调用语句时,会立即跳转到函数的定义(实现)部分去执行相应的代码.执行完毕时,再返回到调用处,继续执行调用语句之后的代码.
    func();
    func();
    
    printf("func之后\n");
    
    
    
    return 0;
}










