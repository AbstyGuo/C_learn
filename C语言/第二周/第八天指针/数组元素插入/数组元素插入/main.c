//
//  main.c
//  数组元素插入
//
//  Created by student on 15-10-17.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a[11];
    int i,j,k=10,n;
    for (i=0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for (i=0; i<10; i++) {
        if (n>a[i]) {
            k=i;
            break;
        }
    }
    if (k<10) {
        for (j=10; j>k; j--) {
            a[j]=a[j-1];
        }
        a[k]=n;
    }else
        a[10]=n;
    for (i=0; i<11; i++) {
        printf("%d",a[i]);
    }
    return 0;
}

