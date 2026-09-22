#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    

    int idades[5] = {132, 432, 523, 423, 532};

    printf("\n%s %d %s", "manuel tem, ", idades[0], "anos!");
    printf("\n%s %d %s", "rafael tem, ", idades[1], "anos!");
    printf("\n%s %d %s", "joao tem, ", idades[2], "anos!");
    printf("\n%s %d %s", "laura tem, ", idades[3], "anos!");
    printf("\n%s %d %s", "caio tem, ", idades[4], "anos!");





    return 0;
 
}