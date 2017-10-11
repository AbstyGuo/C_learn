//
//  main.c
//  倒序字母
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a,j,i,b;
    
    scanf("%c",&a);
    for (i=0; i<=(a-'A'); i++) {
        for (j=(a-i); j<a; j++) {
            printf("%c",j);
        }
        for (b=a; b>=(a-i); b--) {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}
