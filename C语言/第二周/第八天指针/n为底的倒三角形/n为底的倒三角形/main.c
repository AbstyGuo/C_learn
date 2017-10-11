//
//  main.c
//  n为底的倒三角形
//
//  Created by student on 15-10-17.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
void dsj(int n)
{
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            if (j<i) {
                printf(" ");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }
}

int main(int argc, const char * argv[])
{
    int n;
    scanf("%d",&n);
    dsj(n);
    return 0;
}

