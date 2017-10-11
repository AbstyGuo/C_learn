//
//  main.c
//  1--指针作业1--编写函数，求一个整形数组的平均数， 返回平均数
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//编写函数，求一个整形数组的平均数， 返回

int avg(int *p,int length)//int * p = array;
{
    int sum = 0;
    for(int i = 0;i < length;i++)
    {
        sum += p[i];
        //sum += *(p+i)
    }
    return sum/length;
}

int main(int argc, const char * argv[])
{
    int array[10] = {};
    for(int i = 0;i < 10;i++)
        array[i] = i;
    printf("avg = %d\n",avg(array, 10));
    
    return 0;
}







