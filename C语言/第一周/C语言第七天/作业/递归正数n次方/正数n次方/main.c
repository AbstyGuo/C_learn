//
//  main.c
//  正数n次方
//
//  Created by qianfeng on 15/10/17.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
int mypow(int x,int n)
{
    if (n==1) {
        return x;
    }
    return mypow(x,n-1)*x;
}
int main(int argc, const char * argv[]) {
    int x,n;
    scanf("%d%d",&x,&n);
    printf("%d\n",mypow(x,n));
    return 0;
}
