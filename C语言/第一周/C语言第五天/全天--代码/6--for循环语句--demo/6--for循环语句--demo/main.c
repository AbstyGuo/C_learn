//
//  main.c
//  6--for循环语句--demo
//
//  Created by YanTianFeng on 15-10-14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //for循环--练习
    
    //打印1-100的所有正整数
    
    int i;
    
    for(i = 1;i <= 100;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    
    //打印1-100的所有偶数
    for(i = 1;i <= 100;i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    for(i = 1;i <= 100;i++)
    {
        if(i % 2 == 1)
        {
            continue;
        }
        printf("%d ",i);
    }
    printf("\n");
    //while
    i = 1;
    while(i <= 100)
    {
        if(i % 2 == 1)
        {
            i++;
            continue;
        }
        printf("%d ",i);
        i++;
    }
    printf("\n");
    //C89标准之前不可以这样使用
    //从C99标准之后才可以这样使用.
    for(int j = 1;j <= 100;j++)
    {
        int k;
        k++;
        k--;
        j++;
        j--;
    }
    
    //j++;//此处不可以使用变量j,j只可以在for循环中使用.
    //k++;
    return 0;
}










