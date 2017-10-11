//
//  main.c
//  整形数组平均数
//
//  Created by student on 15-10-19.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
float avg(int * a,int n)
{
    int s=0;
    printf("请输入数组的每个元素");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    return s*1.0/n;
}

int main(int argc, const char * argv[])
{
    int a[100]={};
    int n;
    printf("请输入数组个数");
    scanf("%d",&n);
    printf("数组的平均数是%.2f\n",avg(a,n));
    return 0;
}

