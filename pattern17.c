#include<stdio.h>
int main(){
    int n,ch='A';
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            printf("%c",ch);
            j++;ch++;
        }
        i++;
        printf("\n");
    }
    return 0;
}