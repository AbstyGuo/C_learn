//
//  main.c
//  求位数
//
//  Created by student on 15-11-12.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n;
    double sum=0.0;
    scanf("%d",&n);
    if(n<2)
        sum=1.0;
    for(i=2;i<=n;i++)
    {
        sum+=log10(i);
    }
    printf("%d\n",(int)ceil(sum));
    return 0;
}

