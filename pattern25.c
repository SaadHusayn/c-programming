#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        int spaces = i-1;
        while(spaces){
            printf(" ");
            spaces--;
        }
        int j=1;
        while(j<=(n-i+1)){
            printf("%d", j+i-1);
            j++; 
        }
        printf("\n");
        i++;
    }
    return 0;
}