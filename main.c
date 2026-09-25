#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, invertido = 0, resto;


    printf("digite um numero:");
    scanf("%d", &n);

    while (n != 0)
    {
        resto = n % 10;
        invertido = invertido * 10 + resto;
        n /= 10;
    }
    
    printf("o numero ao contrario: %d\n", invertido);




    return 0;
 
}