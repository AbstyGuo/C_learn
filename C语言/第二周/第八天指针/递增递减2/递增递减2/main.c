//
//  main.c
//  递增递减2
//
//  Created by student on 15-10-17.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include<stdio.h>
int main(void)
{
    int a[10],i,t;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1])
        t=1;
    else
        t=0;
    printf("%d ",a[0]);
    printf("%d ",a[1]);
    for(i=2;i<10;i++)
    {
        if(t==1)
        {
            if(a[i-1]>a[i])
                printf("%d ",a[i]);
            else
            {
                t=0;
                printf("\n%d ",a[i-1]);
                printf("%d ",a[i]);
            }
        }
        else
        {
            if(a[i-1]<a[i])
                printf("%d ",a[i]);
            else{
                t=1;
                printf("\n%d ",a[i-1]);
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}

