//
//  main.c
//  6--循环作业6--输入一个数，判断是否是质数
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    输入一个数，判断是否是质数（****）(质数,只能被1和它本身整除的数)
    
    int x;
    scanf("%d",&x);
    
    int i;
    for( i = 2;i < x;i++)
    {
        if(x % i == 0)
        {
            break;
        }
    }
    //i == x  质数
    //i < x   非质数
    if(i == x)
    {
        printf("%d是质数!\n",x);
    }
    else
    {
        printf("%d不是质数!\n",x);
    }
    
    
    
    
    
    return 0;
}









