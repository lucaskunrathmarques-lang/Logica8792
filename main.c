#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int idade;
    int ohEstudante;

    printf("qual sua idade?");
    scanf("%d", &idade);
    printf("\nvoce é estudante ( 0 - não | 1 - sim):");
    scanf("%d", &ohEstudante);

    if((idade >= 60) && (ohEstudante == 1)){
        printf("parabens, voce tem direito a desconto!");
    }else{
        printf("infelismente voce não tera desconto");
    }

    return 0;
 
}