#include<stdio.h>
int main(){
    int n, count=1;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            printf("%d", count);
            count++;
            // printf("%d", j+(i)*(i-1));
            j++;
        }
        printf("\n");i++;
    }
    return 0;
}