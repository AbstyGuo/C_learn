//
//  main.c
//  兔子题
//
//  Created by qianfeng on 15/10/15.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m;
    int a[50]={1,1};
    scanf("%d",&m);
    for (int i=2; i<m;i++) {
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d\n",a[m-1]);
    return 0;
}
