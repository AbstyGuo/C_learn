//
//  main.c
//  10数求第2大
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[10]={};
    for (int i=0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    for (int k=0; k<10; k++) {
        for (int j=k+1; j<10; j++) {
            if (a[k]<a[j]) {
                int temp=a[k];
                a[k]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d\n",a[1]);
    return 0;
}
