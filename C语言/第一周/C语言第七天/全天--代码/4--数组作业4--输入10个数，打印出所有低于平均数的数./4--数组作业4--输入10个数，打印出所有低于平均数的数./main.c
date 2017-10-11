//
//  main.c
//  4--数组作业4--输入10个数，打印出所有低于平均数的数.
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    输入10个数，打印出所有低于平均数的数.
    
    int array[10];
    int sum = 0;//保存10个数的和
    for(int i = 0;i < 10;i++)
    {
        scanf("%d",&array[i]);
        sum += array[i];
    }
    //找出所有低于平均数的数
    for(int i = 0;i < 10;i++)
    {
        if(array[i] < sum/10)
        {
            printf("%d ",array[i]);
        }
    }
    printf("\n");
    
    
    
    return 0;
}









