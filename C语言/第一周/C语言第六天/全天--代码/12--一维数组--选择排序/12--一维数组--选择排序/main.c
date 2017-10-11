//
//  main.c
//  12--一维数组--选择排序
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //选择排序
    
    int array[10] = {2,5,1,7,3,0,4,9,8,6};
    //控制趟数
    for(int i = 0;i < 9;i++)
    {
        //控制具体某一趟,比较的次数
        for(int j = i;j < 9;j++)
        {
            if(array[i] > array[j+1])
            {
                int temp = array[i];
                array[i] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    for(int i = 0;i < 10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    
    int array2[3];
    
    //内存中每一个字节都对应有一个地址编号(数字)
    
    //数组名,代表数组首元素的地址
    //array2 = array;
    printf("%p\n",&array[0]);//0x7fff5fbff820
    printf("%p\n",array);    //0x7fff5fbff820
    
    return 0;
}









