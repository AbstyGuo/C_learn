//
//  main.c
//  4--循环作业4--找出所有的水仙花数，三位数
//
//  Created by YanTianFeng on 15-10-15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[])
{

//    找出所有的水仙花数，三位数，各位立方和等于该数本身。
//    153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3
    
    int i ;
    int gewei,shiwei,baiwei;//保存一个数的个,十,百位
    for(i = 100;i <= 999;i++)
    {
        gewei = i % 10;
        shiwei = i / 10 % 10;
        baiwei = i / 10 / 10 % 10;
        
        if(pow(gewei,3)+pow(shiwei,3)+pow(baiwei,3)
           == i)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    
    
    
    return 0;
}







