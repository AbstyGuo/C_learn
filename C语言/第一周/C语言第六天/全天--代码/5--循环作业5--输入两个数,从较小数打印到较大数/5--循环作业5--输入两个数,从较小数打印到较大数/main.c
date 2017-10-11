//
//  main.c
//  5--循环作业5--输入两个数,从较小数打印到较大数
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

//    输入任意两个数，如果第一个数小，从第一个数打印到第二个数，如果第二个数小，从第二个数打印到第一个数
    //方法一
    int x,y;
    scanf("%d%d",&x,&y);
    if(x < y)
    {
        for(int i = x;i <= y;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    else
    {
        for(int i = y;i <= x;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    //方法二
    int min;//保存两个数的较小值
    int max;//保存两个数的较大值
    min = x < y?x:y;
    max = x > y?x:y;
    
    for(int i = min;i <= max;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    
    //方法三
    for(int i = (x < y?x:y);i <= (x > y?x:y);i++)printf("%d ",i);
    
    
    printf("\n");
    
    return 0;
}







