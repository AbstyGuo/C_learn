//
//  main.c
//  ABC递归
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,x;
    char c;
    scanf("%c",&c);
    for (i=0; i<=(c-'A'); i++) {
        for (j=0; j<=(c-'A'); j++) {
            printf("%c",c-j-i);
            if ((c-j-i)=='A') {
                break;
            }
        }
        for (x=0; x<i; x++) {
            printf("%c",'B'+x);
        }
        printf("\n");
    }
    return 0;
}
