//
//  main.c
//  二维全0
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[4][4]={};
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
