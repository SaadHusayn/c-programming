#include<stdio.h>
int main(){
    int n,val=1;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=(n-i+1)){
            printf("%d", j);
            j++;
        }
        int star=i-1;
        while(star){
            printf("*");
            star--;
        }
        star=i-1;
        while(star){
            printf("*");
            star--;
        }
        int k=n-i+1;
        while(k){
            printf("%d", k);
            k--;
        }


        printf("\n");
        i++;
    }
    return 0;
}