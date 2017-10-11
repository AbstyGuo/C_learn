//
//  main.c
//  5--do-while-循环--demo
//
//  Created by YanTianFeng on 15-10-14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //do-while循环-语句
    //打印 1- 10的所有偶数
    
    int i = 1;
    
    do
    {
        //if(!(i % 2))
        if(i % 2 == 0)
        {
            printf("%d ",i);
        }
        i++;
    }while(i <= 10);
    
    i = 1;
    do
    {
        //if(i % 2)
        if(i % 2 == 1)
        {
            i++;
            continue;
        }
        printf("%d ",i);
        i++;
    }while(i <= 10);
    
    return 0;
}







