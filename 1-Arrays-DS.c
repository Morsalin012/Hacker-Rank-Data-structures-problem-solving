#include <stdio.h>
int main(){
    int n,i,j,temp;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0,j=n-1; i<n/2; i++,j--){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
