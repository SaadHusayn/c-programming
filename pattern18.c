#include<stdio.h>
int main(){
    int n, count=1;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        int count = 'A' + i - 1;
        int j=1;
        while(j<=i){
            // printf("%c", 'A'+i+j-2);
            printf("%c", count);
            count++;
            j++;
        }
        printf("\n");i++;
    }
    return 0;
}