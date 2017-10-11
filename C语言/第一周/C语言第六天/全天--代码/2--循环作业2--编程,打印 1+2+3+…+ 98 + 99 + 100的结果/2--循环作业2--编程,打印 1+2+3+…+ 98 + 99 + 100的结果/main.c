//
//  main.c
//  2--循环作业2--编程,打印 1+2+3+…+ 98 + 99 + 100的结果
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    2.编程,打印 1+2+3+…+ 98 + 99 + 100的结果
    
    int sum = 0;
    
    for(int i = 1;i <= 100;i++)
    {
        sum += i;
    }
    
    printf("sum = %d\n",sum);
    
    
    
    
    
    
    return 0;
}






