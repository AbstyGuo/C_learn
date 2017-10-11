//
//  main.c
//  5--数组作业5--从终端输入10个字符,找出 ASCII最接近 'o' 的第一个字符.
//
//  Created by YanTianFeng on 15-10-16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    从终端输入10个字符,找出 ASCII最接近 'o' 的第一个字符.
    
    char array[10];//字符数组,有10个元素.
    
    for(int i = 0;i < 10;i++)
    {
        scanf("%c",&array[i]);//如果使用%c的格式读入数据,则通过键盘输入的每个字符都会被当做独立字符使用.
        
    }
    //使用 <打擂台> 的思想去 解决最值问题
    
    int min_distance =
    array[0]-'o'>0?array[0]-'o':'o'-array[0];
    //保存距离'o'的最小距离.
    char min_char = array[0];//保存离'o'最近的字符
    
    for(int i = 1;i < 10;i++)
    {
        int new_distance =array[i]-'o'>0?array[i]-'o':'o'-array[i];
        if(new_distance < min_distance)
        {
            min_distance = new_distance;
            min_char = array[i];
        }
    }
    printf("距离'o'最近的字符是:%c\n",min_char);
    
    
    
    
    return 0;
}








