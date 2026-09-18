#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    

   int mes;

   printf("digite um numero de 1 a 12\n");
   scanf("%d", &mes);

   switch (mes)
    { 
        case 1:
            printf("janeiro | verão");
            break;
        case 2:
            printf("fevereiro | verão");
            break;
        case 3:
            printf("marco | outono");
            break;
        case 4:
            printf("abril | outono");
            break;
        case 5:
            printf("maio | outono");
            break;
        case 6:
            printf("junho | inverno");
            break;
        case 7:
            printf("julho | inverno");
            break;
        case 8:
            printf("agosto | inverno");
            break;
        case 9:
            printf("setembro | primavera");
            break;
        case 10:
            printf("outubro | primavera");
            break;
        case 11:
            printf("novembro | primavera");
            break;
        case 12:
            printf("dezembro | verão");
    }   


    

    return 0;
 
}