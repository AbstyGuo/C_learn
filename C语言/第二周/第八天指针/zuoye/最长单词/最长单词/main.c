//
//  main.c
//  最长单词
//
//  Created by student on 15-10-19.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int indexOfLongestWord(char * a, int n)
{
    int i,j=0,max=0,k=0;
    for(i=0;i<n;i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
                j++;
        else
        {
            if(max<j)
            {
                max=j;
                k=i-j;
            }
            j=0;
        }
    }
    for (i=k; i<k+max; i++) {
        printf("%c",a[i]);
    }
    printf("\n");
    return k;
}

int main(int argc, const char * argv[])
{
    char c[100];
    int n = 0,i;
    for (i=0; i<100; i++) {
        scanf("%c",&c[i]);
        if (c[i]=='\n') {
            n=i;
            break;
                    }
    }
    printf("%d\n",indexOfLongestWord(c, n+1));
    
    return 0;
}

