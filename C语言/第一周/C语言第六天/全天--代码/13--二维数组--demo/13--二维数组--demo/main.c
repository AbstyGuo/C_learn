//
//  main.c
//  13--二维数组--demo
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //二维数组的定义
    
    int array[3][3] = {};
    //数组的内存关系
    
    printf("%ld\n",sizeof(array));
    printf("%ld\n",sizeof(int [3][3]));
    //遍历二维数组的元素
    //遍历二维数组的三个元素(int[3])
    for(int i = 0;i < 3;i++)
    {
        //遍历具体的某一个元素(int[3])
        for(int j = 0;j < 3;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    
    array[0][0]++;
    
//    array[0]++;
    
    
    
    
    return 0;
}








