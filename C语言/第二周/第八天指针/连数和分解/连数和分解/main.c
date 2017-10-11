//
//  main.c
//  连数和分解
//  把一个数分解成连续的数的和，输出所有可能情况。
//  Created by student on 15-10-19.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
int fen(int n)
{
    int s,k,t=0;
    for (int i=1; i<n; i++) {
        s=0;
        for (int j=i; j<n; j++) {
            s+=j;
            if (s==n) {
                t=1;
                printf("%d=",n);
                for (k=i; k<j; k++) {
                    printf("%d+",k);
                }
                printf("%d\n",k);
                break;
            }
            if (s>n) {
                break;
            }
        }
    }
    if(t==0)
        printf("无法分解\n");
    return 0;
}

int main(int argc, const char * argv[])
{
    int n;
    scanf("%d",&n);
    fen(n);
    return 0;
}

