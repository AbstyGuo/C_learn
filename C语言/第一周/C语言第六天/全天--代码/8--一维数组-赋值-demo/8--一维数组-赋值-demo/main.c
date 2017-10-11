//
//  main.c
//  8--一维数组-赋值-demo
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //一维数组的赋值
    
    int array[3];
    //数组不能整体赋值
    //array = {1,2,3};
    
    int array2[3];
    //array2 = array;
    
    //只能通过单个元素,单独赋值
    for(int i = 0;i < 3;i++)
    {
        array[i] = i;
    }
    
    //通过scanf语句来给数组的每个元素赋值
    for(int i = 0;i < 3;i++)
    {
        scanf("%d",&array[i]);
    }
    
//    array[0]++;//数组元素 可以作为变量使用
    
    //遍历数组
    for(int i = 0;i < 3;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    
    
    return 0;
}









