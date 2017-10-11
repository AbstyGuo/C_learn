//
//  main.c
//  3--循环作业3--编程 ,用for循环 ,求  3 + 33 + 333 + 3333  的结果
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    编程 ,用for循环 ,求  3 + 33 + 333 + 3333  的结果
    
    int i;
    int sum = 0;//保存总和
    int item = 0;//这一项的值
    for(i = 0;i < 4;i++)
    {
        item = item*10+3;//用上一项的值 求出这一项的值
        printf("%d ",item);
        sum += item;                
    }
    
    printf("sum = %d\n",sum);
    
    
    return 0;
}








