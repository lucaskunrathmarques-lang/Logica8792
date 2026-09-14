#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("\npar");
    }else{
        printf("\nimpar");
    }

    



    return 0;
 
}