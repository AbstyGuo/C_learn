//
//  main.c
//  4--指针作业4--5.编写函数，传入一个字符数组，无需返回值，统计数组中字符出现的次数
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//5.编写函数，传入一个字符数组，无需返回值，统计数组中字符出现的次数。
//传入:“helloworld”

void countCharacterTimesInArray(char * array,int length)
{
    int times[127] = {};//每个元素保存固定字符出现的次数
    for(int i = 0;i < length;i++)
    {
        times[array[i]]++;
    }
    
    for (int i = 0; i < 127; i++)
    {
        if(times[i] != 0)
        {
            printf("%c出现了 %d 次.\n",i,times[i]);
        }
    }
    
}

int main(int argc, const char * argv[])
{

    char array[100] = {};
    int i;
    for(i = 0;i < 100;i++)
    {
        scanf("%c",&array[i]);
        if(array[i] == '\n')
        {
            break;
        }
    }
    countCharacterTimesInArray(array,i);
    
    
    
    return 0;
}









