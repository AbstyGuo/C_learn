//
//  main.c
//  二维交换
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[4][4]={};
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (i==j||i+j==3) {
                a[i][j]=8;
            }
        }
    }
    for (int k=0; k<4; k++) {
        printf("%d",a[1][k]);
    }
    printf("\n");
    for (int m=0; m<4; m++) {
        if (m==1) {
            continue;
        }
        for (int j=0; j<4; j++) {
            printf("%d",a[m][j]);
        }
        printf("\n");
    }
    return 0;
}
