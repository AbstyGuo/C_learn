//
//  main.c
//  5--函数作业5--编写函数,求一个正数的 n 次方.
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//编写函数,求一个正数的 n 次方.

int valueOfNCiFang(int a,int n);

int main(int argc, const char * argv[])
{

    printf("%d\n",valueOfNCiFang(2,10));
    
    return 0;
}

int valueOfNCiFang(int a,int n)
{
    int sum = 1;
    for(int i = 0;i < n;i++)
    {
        sum *= a;
    }
    return sum;
}







