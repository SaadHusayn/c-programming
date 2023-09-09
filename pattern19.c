#include<stdio.h>
int main(){
    int n, count=1;
    scanf("%d", &n);
    int i=1;
    while(i<=n){ 
        int j=1;
        // int count = 'A'+n-i;
        while(j<=i){
            // printf("%c", count);
            // count++;
            printf("%c", 'A'+n-i+j-1);
            j++;
        }
        printf("\n");i++;
    }
    return 0;
}