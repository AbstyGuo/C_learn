//
//  main.c
//  7--一维数组-demo
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //一维数组的定义
    
    int array[3];
    
    //一维数组的初始化
    //完全初始化
    int array2[3] = {3,2,1};//依次拿{}中的每个值给数组中的每个元素赋值.
    
    //遍历数组
    for(int i = 0;i < 3;i++)
    {
        printf("%d ",array2[i]);
    }
    printf("\n");
    
    //部分初始化
    int array3[3] = {4};//优先用初始化列表中的值给数组中位置靠前的元素赋值. 剩余未显示初始化的元素被初始化为 0
    
    for(int i = 0;i < 3;i++)
    {
        printf("%d ",array3[i]);
    }
    printf("\n");
    
    //清空数组
    int array4[3] = {};//数组全部元素都被置为0
    
    for(int i = 0;i < 3;i++)
    {
        printf("%d ",array4[i]);
    }
    printf("\n");
    
    
    int array5[100] = {};//未被显示的清空时,数组中元素的值不确定.
    
    for(int i = 0;i < 100;i++)
    {
        printf("%d ",array5[i]);
    }
    printf("\n");
    
    
    
    
    
    return 0;
}







