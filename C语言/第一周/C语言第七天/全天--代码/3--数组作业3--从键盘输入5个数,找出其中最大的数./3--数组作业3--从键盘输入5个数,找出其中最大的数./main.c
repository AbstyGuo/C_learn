//
//  main.c
//  3--数组作业3--从键盘输入5个数,找出其中最大的数.
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
//    从键盘输入5个数,找出其中最大的数.

    int array[5];
    //从键盘输入5个数,给数组的每个元素赋值
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",&array[i]);
    }
    int max = array[0];//max用来保存5个数中的最大值,假设 max的初始值 为4个数中的最大值.
    
    for(int i = 1;i < 5;i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    
    printf("max = %d\n",max);
    
    
    return 0;
}










