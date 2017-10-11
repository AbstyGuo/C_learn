//
//  main.c
//  5数求最大
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5]={};
    for (int i=0; i<5; i++) {
        scanf("%d",&a[i]);
    }
    for (int j=0; j<5; j++) {
        for (int k=j+1; k<5; k++) {
            if (a[j]<a[k]) {
                int temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
        }
    }
    printf("最大数是%d\n",a[0]);
    return 0;
}
