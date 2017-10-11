//
//  main.c
//  选作9
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 输入一个数，分解质因数（*****）
//    输入90
//    输出90 = 2 X 3 X 3 X 5
    int a,i=2;
    scanf("%d",&a);
    printf("%d=",a);
    while (i<a)
    {
        if (a%i==0) {
            a/=i;
            printf("%d*",i);
            continue;
        }
        i++;
    }
    printf("%d\n",a);

    return 0;
}
