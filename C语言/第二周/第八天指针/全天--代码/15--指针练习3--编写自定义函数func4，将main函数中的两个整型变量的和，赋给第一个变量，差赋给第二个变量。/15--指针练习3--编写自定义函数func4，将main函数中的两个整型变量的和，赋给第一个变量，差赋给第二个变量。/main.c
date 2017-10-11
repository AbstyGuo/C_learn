//
//  main.c
//  15--指针练习3--编写自定义函数func4，将main函数中的两个整型变量的和，赋给第一个变量，差赋给第二个变量。
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//编写自定义函数func4，将main函数中的两个整型变量的和，赋给第一个变量，差赋给第二个变量。

void func4(int *pa,int * pb)
{
    int temp = *pa + *pb;
    *pb = *pa - *pb;
    *pa = temp;
}

int main(int argc, const char * argv[])
{
    
    int a = 10;
    int b = 20;
    func4(&a,&b);//地址传递
    printf("a = %d,b = %d\n",a,b);
    return 0;
}







