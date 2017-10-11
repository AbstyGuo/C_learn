//
//  main.c
//  数组中第二大的数
//
//  Created by student on 15-10-19.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
int second(int *a,int n)
{
    int  temp=0;
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]<a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a[1];
}

int main(int argc, const char * argv[])
{
    int a[100],n;
    scanf("%d",&n);
    printf("%d\n",second(a, n));
    return 0;
}

