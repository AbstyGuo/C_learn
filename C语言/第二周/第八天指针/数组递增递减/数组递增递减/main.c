//
//  main.c
//  数组递增递减
//
//  Created by student on 15-10-17.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int a[10]={};
    int t,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    if (a[0]<a[1]) {
        printf("%d ",a[0]);
        t=1;
    }else
    {
        printf("%d ",a[0]);
        t=0;
    }
    for (i=1; i<10; i++) {
        if (t==1) {
            if (a[i]<a[i+1]) {
                printf("%d ",a[i]);
            }else
            {
                printf("%d",a[i]);
                printf("\n");
                if(i==9)
                {break;}
                t=0;
            }
        }
        if (t==0) {
            if (a[i]>a[i+1]) {
                printf("%d ",a[i]);
            }
            else
            {
                printf("%d ",a[i]);
                printf("\n");
                if(i==9)
                    break;
                printf("%d ",a[i]);
                t=1;
            }
        }
    }
    return 0;
}

