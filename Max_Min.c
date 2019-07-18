#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int compare(const void *a,const void *b)
{
    return (*(int *)a > *(int *)b);
}

int main()
{
    int n,k,*a,i;
    int min,max,ans;
    scanf("%d",&n);
    scanf("%d",&k);
    a=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    qsort(a,n,sizeof(int),compare);

    //for(i=0;i<n;i++)
      //  printf("%d ",a[i]);

    ans=a[k-1]-a[0];

    for(i=0;i<=n-k;i++)
    {
        if( (a[i+k-1]-a[i]) < ans )
            ans=a[i+k-1]-a[i];
    }


    printf("%d",ans);

}