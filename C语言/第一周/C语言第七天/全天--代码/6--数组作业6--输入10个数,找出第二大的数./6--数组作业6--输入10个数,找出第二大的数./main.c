//
//  main.c
//  6--数组作业6--输入10个数,找出第二大的数.
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    输入10个数,找出第二大的数.
    
    int array[10];
    //输入10个数,分别给数组的每个元素赋值
    for(int i = 0;i < 10;i++)
    {
        scanf("%d",&array[i]);
    }
    
    int max =
    array[0]>array[1]?array[0]:array[1];//保存最大数
    
    int second_max =
    array[0]<array[1]?array[0]:array[1];//保存第二大的数
    
    for(int i = 2;i < 10;i++)
    {
        if(array[i] > max)
        {
            second_max = max;
            max = array[i];
        }
        else if(array[i] > second_max)
        {
            second_max = array[i];
        }
    }
    
    printf("second_max = %d\n",second_max);
    
    
    return 0;
}









