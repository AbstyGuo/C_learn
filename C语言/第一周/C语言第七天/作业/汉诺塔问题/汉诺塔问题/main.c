//
//  main.c
//  汉诺塔问题
//
//  Created by student on 15-10-19.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
//功能：把A柱上的n个盘子，借助B柱移动到c柱上。
void hanoot(int n,char a,char b,char c)
{               //原柱   借助    完成柱
    static int count=1;
    if(n==1)
    {
        printf("%d%c----->%c\n",count++,a,c);
        return;
    }
    hanoot(n-1, a,c,b);//把a柱的n-1个移动到b，留下最大的一个。
    hanoot(1, a, b, c);//把a柱的最大的一个借助b，移动到c柱。
    hanoot(n-1, b, a, c);//把b柱的n-1个借助A柱移动到c柱。
    
}
int main(int argc, const char * argv[])
{
    hanoot(10, 'A', 'B', 'C');
    return 0;
}

