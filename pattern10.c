#include<stdio.h>
int main(){
    int n, num;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        // num = i;
        int j=1;
        while(j<=i){
            printf("%d", i+j-1);
            // num++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}