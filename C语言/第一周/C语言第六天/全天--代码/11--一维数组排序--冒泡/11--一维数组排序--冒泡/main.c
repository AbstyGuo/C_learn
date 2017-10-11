//
//  main.c
//  11--一维数组排序--冒泡
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //冒泡--排序
    
    int array[10] = {2,5,1,7,3,0,4,9,8,6};
    
    //第一个for循环控制 趟数
    for(int i = 0;i < 9;i++)
    {
        //控制具体一趟,比较的次数
        for(int j = 0;j < 9-i;j++)
        {
            //判断大小关系
            if(array[j] > array[j+1])
            {
                //两个元素交换
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    for(int i = 0;i < 10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    return 0;
}








