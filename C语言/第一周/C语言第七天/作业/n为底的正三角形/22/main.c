//
//  main.c
//  22
//
//  Created by qianfeng on 15/10/16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
void zsj(int n)
{
    for (int i=0; i<n; i++) {
        for (int j=0; j>; j++) {
            if (j>n-2*i) {
                printf(" ");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }
    return;
}

int main(int argc, const char * argv[]) {
    zsj(5);
    return 0;
}
