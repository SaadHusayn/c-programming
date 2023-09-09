#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        int j = 65;
        int f=j+n;

        while(j<f){
            printf("%c", j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}