//
//  main.c
//  最小绝对值
//
//  Created by qianfeng on 15/10/16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
int mj(int a,int b,int c);
int mj(int a,int b,int c)
{
    int i,j,k,min;
    i=a>b?(a-b):(b-a);
    j=a>c?(a-c):(c-a);
    k=b>c?(b-c):(c-b);
    min=(i<j?i:j)<k?(i<j?i:j):k;
    return min;
}
int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",mj(a, b, c));
    return 0;
}
