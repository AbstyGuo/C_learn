//
//  main.c
//  5--逻辑或运算符--demo
//
//  Created by YanTianFeng on 15-10-13.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //判断一个不超过三位数的数,是否带有7 或者 是7的倍数
#if 0
    int x;//保存这个数
    int gewei,shiwei,baiwei;//保存这个x的个,十,百位
    scanf("%d",&x);
    int old_x = x;
    //分割,拿到x的个,十,百,
    gewei = x % 10;
    
    x /= 10;
    shiwei = x % 10;
    
    x /= 10;
    baiwei = x % 10;
    
    if(gewei == 7 || shiwei == 7 || baiwei == 7 || old_x % 7 == 0)
    {
        printf("是\n");
    }
    else
    {
        printf("不是\n");
    }
#else
    int x;//保存这个数
    int gewei,shiwei,baiwei;//保存这个x的个,十,百位
    scanf("%d",&x);
    int old_x = x;
    //分割,拿到x的个,十,百,
    gewei = x % 10;
    
    x /= 10;
    shiwei = x % 10;
    
    x /= 10;
    baiwei = x % 10;
    if(gewei == 7 || shiwei == 7 || baiwei == 7 ||
       !(old_x % 7))
//    if(gewei == 7 || shiwei == 7 || baiwei == 7 || old_x % 7 == 0)
    {
        printf("是\n");
    }
    else
    {
        printf("不是\n");
    }

    
#endif
    return 0;
}








