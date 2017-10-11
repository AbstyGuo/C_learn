//
//  main.c
//  数组递增递减序列
//
//  Created by qianfeng on 15/10/16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[10]={},t;
    for (int i=0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    printf("%d",a[0]);
    if (a[0]>a[1]) {
         t=1;
    }else  t=0;
    printf("%d",a[1]);
    for (int j=2; j<10; j++) {
        if (t==1) {
            if (a[j]>a[j-1]) {
                printf("%d",a[j]);
            }else
            {
                printf("\n");
                printf("%d",a[j]);
                t=0;
            }
        }else
        {
            if (a[j]<a[j-1]) {
                printf("%d",a[j]);
            }else
            {
                printf("\n");
                printf("%d",a[j]);
            }
        }
    }
    return 0;
}
