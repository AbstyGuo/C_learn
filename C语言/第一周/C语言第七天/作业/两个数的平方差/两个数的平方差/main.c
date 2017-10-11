//
//  main.c
//  两个数的平方差
//
//  Created by qianfeng on 15/10/16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
int qc(int a,int b);
int qc(int a,int b)
{
    int i;
    i=a*a-b*b;
    return i>0?i:-i;
}

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",qc(a, b));
    return 0;
}
