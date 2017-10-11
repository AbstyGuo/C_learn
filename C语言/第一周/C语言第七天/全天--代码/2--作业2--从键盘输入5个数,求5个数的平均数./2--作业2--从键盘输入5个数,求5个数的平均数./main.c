//
//  main.c
//  2--作业2--从键盘输入5个数,求5个数的平均数.
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    从键盘输入5个数,求5个数的平均数.
    
    int array[5];
    int sum = 0;//保存5个数的和
    int avg = 0;//保存5个数的平均数
    
    for(int i  =0;i< 5;i++)
    {
        scanf("%d",&array[i]);
        sum += array[i];
    }
    
    avg = sum / 5;
    
    printf("avg = %d\n",avg);
    
    return 0;
}








