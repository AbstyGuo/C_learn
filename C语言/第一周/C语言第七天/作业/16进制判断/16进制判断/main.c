//
//  main.c
//  16进制判断
//
//  Created by qianfeng on 15/10/16.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>
int isDIGITAL(int c);
int isDIGITAL(int c)
{
    if ((c>='0'&&c<='9')||(c>='a'&&c<='f')) {
        return 1;
    }
    else
        return 0;
}
int main(int argc, const char * argv[]) {
    char a;
    scanf("%c",&a);
    printf("%d\n",isDIGITAL(a));
    return 0;
}
