//
//  main.c
//  4数平均值
//
//  Created by qianfeng on 15/10/16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
float avg(int a, int b, int c, int d);
float avg(int a, int b, int c, int d)
{
    return (a+b+c+d)/4.0;
    
}
int main(int argc, const char * argv[]) {
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%.2f\n",avg(a,b,c,d));
    return 0;
}
