//
//  main.c
//  杨辉三角
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
float J(int i)
{
    int j;
    float k=1;
    for (j=1; j<=i; j++) {
        k=k*j;
    }
    return (k);
}
float C(int i,int j)
{
    float k;
    k=J(j)/(J(i)*J(j-i));
    return (k);
}
int main(int argc, const char * argv[]) {
    int i=0,j,n;
    scanf("%d",&i);
    for (j=0; j<i; j++) {
//        for (k=1; k<=(i-j); k++) {
//            printf(" ");
//        }
        for (n=0; n<=j; n++) {
            printf("%.0f",C(n, j));
        }
        printf("\n");
    }
     return 0;
}
