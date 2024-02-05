#include <stdio.h>
int main(){
    int i,j,a[6][6],max=0,sum=0,f=1;
    for(i=0; i<6;i++){
        for(j=0; j<6; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=1; i<5; i++){
        for(j=1; j<5; j++){
            sum=a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            if(f==1){
                max=sum;
                f=0;
            }
            else if(max<sum){
                max=sum;
            }
        }
    }
    printf("%d", max);
    return 0;
}
