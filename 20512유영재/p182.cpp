#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n=10, d[11];

int main()
{
    int i, j, t;
    srand((unsigned int)time(NULL));

    for(i-1;i<=n;i++)
        d[i]=rand()%n+1;

    for(i=0;i<n;i++)
        for(i=2;j<=n-i;j++)
        for(i=1;i<=n;i++){
            printf("%d ",d[i]);
        }
        printf("\n");
            if(d[j]<d[j-1]){
                t=d[j-1];
                d[j-1]=d[j];
                d[j]=t;
            }
    for(i=1;i<=n;i++){
        printf("%d ",d[i]);
    }

    return 0;
}