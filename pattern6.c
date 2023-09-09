#include<stdio.h>
int main(){
    int n,count=1;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            if((j + (i-1)*n)<10){
                printf("  %d", j + (i-1)*n);
            }
            else{
                printf(" %d", j + (i-1)*n);
            }
            
            // printf("%d", count);
            // count++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}