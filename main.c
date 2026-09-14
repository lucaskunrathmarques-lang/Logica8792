#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    printf("%s", n % 2 == 0 ? "\npar" : "\nimpar");

    



    return 0;
 
}