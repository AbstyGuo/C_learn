//
//  main.c
//  4
//
//  Created by qianfeng on 15/10/14.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a;
    scanf("%c",&a);
    int i,j,z;
    for(i=0;i<=(a-'A');i++)
    {
        for(j='A';j<=('A'+i);j++)
        {
            printf("%c",j);
        }
        for(z=('A'+i-1);z>='A';z--)
        {
            printf("%c",z);
        }
        printf("\n");
    }
    
    return 0;
}
