//
//  main.c
//  2--指针作业2--传入一个数组,求这个整型数组中第二大的数。
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

//编写自定义函数，传入一个数组,求这个整型数组中第二大的数。
int second_max(int *p,int length)
{
    int max = p[0] > p[1] ?p[0]:p[1];
    int secondMax = p[0] < p[1] ?p[0]:p[1];
    for(int i = 2;i < length;i++)
    {
        if(p[i] > max)
        {
            secondMax = max;
            max = p[i];
        }
        else if(p[i] > secondMax)
        {
            secondMax = p[i];
        }
    }
    return secondMax;
}

int main(int argc, const char * argv[])
{

    srand((unsigned int)time(0));//设置随机种子
    int array[10] = {};
    for(int i = 0;i < 10;i++)
    {
        array[i] = rand()%20;
    }
    //遍历数组
    for(int i = 0;i < 10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    //调用second_max求第二大的数
    int secondMax = second_max(array, 10);
    printf("%d\n",secondMax);
    
    return 0;
}








