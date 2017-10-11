//
//  main.c
//  8--指针变量初始化--demo
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //指针变量的初始化
    
    //指针变量 里存地址
    //
    int a = 2100000000;
    int * pi = &a;//pi指向了a
    
    //通过pi取所指向内存的数据
    printf("%d\n",*pi);
    
    char c = 'c';
    char * pc = &c;//pc指向了c
    printf("%d\n",*pc);
    
    double d = 3.14;
    double * pd = &d;
    printf("%f\n",d);
    printf("%f\n",*pd);
    
    
    return 0;
}







