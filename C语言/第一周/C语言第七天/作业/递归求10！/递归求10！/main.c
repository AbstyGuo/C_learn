//
//  main.c
//  递归求10！
//
//  Created by qianfeng on 15/10/17.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
int nj(int n);
int nj(int n)
{
    if (n==1) {
        return 1;
    }
    return nj(n-1)*n;
}
int main(int argc, const char * argv[]) {
    
    printf("%d\n",nj(10));
    return 0;
}
