#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    

    int numerosInteiros[5] = {1, 5, 10, 15, 20};
    float numerosFloat[5] = {10.5, 20.4, 34.5, 21.4, 12.2};
    char carros[3][20] = {"ferrari", "bugat", "MClarem"};

    printf("\nnumeros inteiros:\n\n");

    printf("%d\n", numerosInteiros[0]);
    printf("%d\n", numerosInteiros[1]);
    printf("%d\n", numerosInteiros[2]);
    printf("%d\n", numerosInteiros[3]);
    printf("%d\n", numerosInteiros[4]);

    printf("\nnumeros decimais:\n\n");

    printf("%f\n", numerosFloat[0]);
    printf("%f\n", numerosFloat[1]);
    printf("%f\n", numerosFloat[2]);
    printf("%f\n", numerosFloat[3]);
    printf("%f\n", numerosFloat[4]);
    
    printf("\ncarros:\n\n");

    printf("%s\n", carros[0]);
    printf("%s\n", carros[1]);
    printf("%s\n", carros[2]);




    return 0;
 
}