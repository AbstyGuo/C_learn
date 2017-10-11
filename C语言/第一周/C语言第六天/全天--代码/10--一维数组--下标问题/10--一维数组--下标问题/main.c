//
//  main.c
//  10--一维数组--下标问题
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //下标问题
    
    
    int x = -1;
    
    int array[3];
    
    for(int i = 0;i <= 5;i++)
    {
        array[i] = 1;
    }
    //遍历数组
    for(int i = 0;i <= 5;i++)//此处发生下标越界
    //对于程序员所写的代码,不应该发生这种下标越界问题.
    {
        printf("%d ",array[i]);
    }
    
    printf("x = %d\n",x);
    
    
    
    printf("\n");
    
    
    return 0;
}








