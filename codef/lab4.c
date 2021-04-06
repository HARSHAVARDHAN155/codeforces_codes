#include <stdio.h>

int main(){
    
    int n,w;
    scanf("%d %d",&n,&w);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp = 0;
    for(int i=0;i<w;i++){
        temp+= arr[i];
    }
    printf("%d ",temp);
    for(int i=w;i<n;i++){
        temp = temp - arr[i-w] + arr[i];
        printf("%d ",temp);
    }
    printf("\n");

    return 0;
}