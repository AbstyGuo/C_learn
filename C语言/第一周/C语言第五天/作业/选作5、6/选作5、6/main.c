//
//  main.c
//  选作5、6
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
#if  0
    // 5.求5!
    int a=1,i;
    for (i=1; i<=5; i++) {
        a*=i;
    }
    printf("%d\n",a);
#else
     //6.求1!+2!+3!+4!+5!
    int a=1,b=0,i;
    for (i=1; i<=5; i++) {
        a*=i;
        b+=a;
    }
    printf("%d\n",b);
#endif
    return 0;
}
