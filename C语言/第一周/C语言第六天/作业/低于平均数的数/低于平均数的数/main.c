//
//  main.c
//  低于平均数的数
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[10]={};
    float b=0;
    for (int i=0; i<10; i++) {
        scanf("%d",&a[i]);
        b+=a[i];
    }
    b/=10;
    for (int j=0; j<10; j++) {
        if (a[j]<b) {
            printf("%d\n",a[j]);
        }
    }
    
    return 0;
}
