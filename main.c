#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>

struct pessoa
    {
        char nome[50];
        int idade;
        float altura;   
        float peso;
    };

    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("----BEMVINDO A ACADEMIA----\n");
    printf("\n");
    
    int n;

    printf("quantas pessoas deseja cadastrar?");
    scanf("%d", &n);

    getchar();

    struct pessoa p1[n];

    for(int i = 0; i < n; i++){
        printf("\npessoa %d\n", i + 1);
        printf("nome completo: ");
        fgets(p1[i].nome, sizeof(p1[i].nome), stdin);

        printf("idade: ");
        scanf("%d", &p1[1].idade);

        printf("altura: ");
        scanf("%f", &p1[i].altura);

        printf("peso: ");
        scanf("%f", &p1[i].peso);

        getchar();
    }
   
    printf("\n---- Lista de pessoas ----\n");

    for(int i = 0; i < n; i++){
        printf("\nnome: %s | idade: %d | altura: %.2f | peso: %.2f\n", p1[i].nome, p1[i].idade, p1[i].altura, p1[i].peso);
    }
    
    
    
    
    
    

    
    





    return 0;
 
}