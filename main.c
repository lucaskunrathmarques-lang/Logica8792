#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("digite um numero");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d é par\n:", n);
    }else{
        printf("%d é impar\n:", n);
    }






    return 0;
 
}