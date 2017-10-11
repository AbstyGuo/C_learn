//
//  main.c
//  3--函数作业3-编写函数，返回三个数的两两相减的最小绝对值。
//
//  Created by YanTianFeng on 15-10-19.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//编写函数，返回三个数的两两相减的最小绝对值。

int min_jueduizhi(int a,int b,int c);

int main(int argc, const char * argv[])
{

    printf("%d\n",min_jueduizhi(-5, 3, 6));
    return 0;
}
int min_jueduizhi(int a,int b,int c)
{
    int array[3] = {};
    array[0] = a > b ?a-b:b-a;
    array[1] = a > c ?a-c:c-a;
    array[2] = b > c?b-c:c-b;
    int minJueDuiZhi = array[0];
    for(int i = 1;i < 3;i++)
    {
        if(array[i] < minJueDuiZhi)
        {
            minJueDuiZhi = array[i];
        }
    }
    return minJueDuiZhi;
}


