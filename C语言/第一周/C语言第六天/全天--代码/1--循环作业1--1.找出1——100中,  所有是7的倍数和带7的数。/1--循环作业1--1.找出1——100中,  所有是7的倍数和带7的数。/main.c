//
//  main.c
//  1--循环作业1--1.找出1——100中,  所有是7的倍数和带7的数。
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    
//    1.找出1——100中,  所有是7的倍数和带7的数。
    
    int i;
    int gewei,shiwei;
    for(i = 1;i <= 100;i++)
    {
        gewei = i % 10;
        shiwei = i / 10 % 10;
        
        if(i % 7 == 0 || gewei == 7 || shiwei == 7)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    
    
    
    
    
    return 0;
}











