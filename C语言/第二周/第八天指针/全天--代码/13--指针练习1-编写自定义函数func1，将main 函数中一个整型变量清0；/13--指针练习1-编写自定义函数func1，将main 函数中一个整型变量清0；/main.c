//
//  main.c
//  13--指针练习1-编写自定义函数func1，将main 函数中一个整型变量清0；
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
void func1(int *p)
{
    *p = 0;
}
int main(int argc, const char * argv[])
{
    int a = 10;
    printf("a = %d\n",a);
    func1(&a);//地址传递
    printf("a = %d\n",a);
    
    return 0;
}






