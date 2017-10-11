//
//  main.c
//  索引
//
//  Created by YanTianFeng on 15-10-20.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
//找出数组中最长的单词（只由字母构成），返回最长单词起点的下标/索引
//",,Yes,I am a good man"
int indexOfLongestWord(char * a, int n)
{
    int max_length = 0;//保存最长单词的长度
    char * max_address = a;//保存最长单词的起点地址
    int max_index = 0;//保存最长单词的下标
    int j = 0;//统计某个单词的长度.
    
    for(int i = 0;i < n;i++)
    {
        if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            j++;
        }
        else
        {
            if(j > max_length)
            {
                max_length = j;
                max_index = i - j;
                max_address = a + max_index;
            }
            j = 0;
        }
        
    }
    return max_index;
    //return max_address-a;
    
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
    int ret = indexOfLongestWord(array, i-1);
    printf("%d\n",ret);
    
    return 0;
}








