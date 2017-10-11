//
//  main.c
//  10数排序
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
    for (int i=0; i<10; i++) {
        for (int j=i+1; j<10; j++) {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int k=0; k<10; k++) {
        printf("%d\n",a[k]);
    }
    return 0;
}
