//
//  main.c
//  加减乘除
//
//  Created by student on 15-10-19.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
double math(double a, double b, char sign)
{
    switch (sign) {
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':
            if(b==0)
                return -9999999;
            else
                return a/b;
        default:
            break;
    }
    return 0;
    
}
int main(int argc, const char * argv[])
{
    double a,b;
    char c;
    scanf("%lf%c%lf",&a,&c,&b);
    printf("%lf\n",math(a, b, c));

    return 0;
}

