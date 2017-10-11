#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[100]={};
    int i;
    int k=0,t=0,s;
    s=n;
    for (i=0; i<n; i++)
        a[i]=i+1;
    while(n>1)
    {
        if (a[k%s]!=0) {
            t++;
        }
        if (t==m) {
            n--;
            a[k%s]=0;
            t=0;
        }
        k++;
    }
  
    for (i=0; i<s; i++) {
        if(a[i]!=0)
            printf("%d",a[i]);
    }
    
    return 0;
}