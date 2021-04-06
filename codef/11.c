#include<stdio.h>

int getScore(int a,int b)
{
    int r=a^b;

    int score=0;

    for(int i=31;i>=0;i--)
    {
        if(r%2==1)
            score++;
        r=r/2;
    }


    return score;
}

int main()
{
    int T=0;
    scanf("%d",&T);

    int a[500];
    int res[10];

    for(int i=0; i<T; i++)
    {
        int n=0;
        int max=0;
        scanf("%d",&n);

        for(int j=0; j<n; j++)
            scanf("%d",&a[j]);

        for(int j=0; j<n; j++)
            for(int k=j+1; k<n; k++)
            {
                int score=getScore(a[j],a[k]);
                if(score>max)
                    max=score;
            }

        res[i]=max;
    }

    for(int i=0;i<T;i++)
        printf("%d\n",res[i]);

    return 0;
}