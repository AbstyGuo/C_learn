//
//  main.c
//  nxn回旋赋值
//
//  Created by student on 15-10-17.
//  Copyright (c) 2015年 student. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int a[20][20]={};
    int i=0,j=0,k=1,n,m,t;
    scanf("%d%d",&n,&m);
   
   for ( t=0; t<n; t++)
   {
       i=t;
       for (j=t; j<n-1-t; j++)
       {
           if (k==m+1)
               break;
            a[i][j]=k++;
       }
       for (i=t; i<n-t-1; i++)
       {
           if (k==m+1)
               break;
           a[i][j]=k++;
        }
        for (;j>t; j--)
        {
            if (k==m+1)
                break;
            a[i][j]=k++;
        }
        for (; i>t; i--)
        {
            if (k==m+1)
                break;
            a[i][j]=k++;
        }
       if (k==m+1)
       break;
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

