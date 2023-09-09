#include<stdio.h>
int main(){
    int n,val=1;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        int spaces = n-i;
        while(spaces){
            printf(" ");
            spaces--;
        }
        int j=1;
        while(j<=i){
            printf("%d",j);
            j++;
        }
        int k=i-1;
        while(k){
            printf("%d", k);
            k--;
        }
        printf("\n");
        i++;
    }
    return 0;
}