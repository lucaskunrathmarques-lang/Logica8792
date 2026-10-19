#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int temIngresso;
    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    printf("possui ingresso? (1 - Sim / 0 - Não): ");
    scanf("%d", &temIngresso);

    if(idade >= 18 && temIngresso){
        printf("Entrada permitida!\n");
    }else{
        printf("Entrada não permitida!\n");
    }
    
    
    
    
    
    

    


    return 0;
 
}