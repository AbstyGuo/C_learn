//
//  main.c
//  杨辉三角2
//
//  Created by student on 15-10-17.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int a[20][20]={};
    int i,j,n;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++) {
            if (j==0||i==j) {
                a[i][j]=1;
            }else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

