#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b;

    printf("digite dois numeros");
    scanf("%d %d", &a, &b);

    if(a == b){
        printf("os numeros são iguais\n");
    }else{
        printf("os numeros são diferentes\n");
    }



    return 0;
 
}