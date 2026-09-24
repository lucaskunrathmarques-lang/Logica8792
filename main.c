#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int i;

    printf("digite um numero: ");
    scanf("%d", &i);

    while(i <= 0){
        printf("numero invalido! digite novamente:");
        scanf("%d", &i);
    }
    printf("numero valido: %d\n", i);






    return 0;
 
}