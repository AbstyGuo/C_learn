//
//  main.c
//  mystrstr
//
//  Created by qianfeng on 15-10-21.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char * mystrstr(char * a,char * b)
{
    char *p=a,*k;
    int i,j=1;
    for (i=0; ; i++)
    {
        if(*p++==*b)
        {  while ((*p++=*b++))
            {
                j++;
            
            if (j==strlen(b))
            {
                k=p-j;
                break;
            }
            }
        }
    }
    return k;
}
int main(int argc, const char * argv[])
{
    char a[100]="abcdevdrt",b[10]="dev";
//    scanf("%s%s",a,b);
    printf("%s\n",mystrstr(a, b));
    
    return 0;
}

