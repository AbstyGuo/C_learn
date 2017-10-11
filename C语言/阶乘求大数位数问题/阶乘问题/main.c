//
//  main.c
//  阶乘问题
//
//  Created by qianfeng on 15-10-24.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, const char * argv[])
{
    int i,n;
    double sum;
    sum=0.0;
    scanf("%d",&n);
    for (i=2; i<=n; i++) {
        sum+=log10(i);
    }
    printf("%d\n",(int)ceil(sum));
    return 0;
}

