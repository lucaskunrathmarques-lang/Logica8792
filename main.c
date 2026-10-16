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

    printf("----BEMVINDO A ACADEMIA----");
    printf("\n");
    
    struct pessoa p1;

    printf("Qual o seu nome?");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    

    printf("Qual sua idade?");
    scanf("%d", &p1.idade);

    printf("Qual sua altura?");
    scanf("%f", &p1.altura);

    printf("Qual seu peso?");
    scanf("%f", &p1.peso);

    struct pessoa p2;

    printf("\nQual o seu nome?");
    fgets(p2.nome, sizeof(p2.nome), stdin);

    printf("Qual sua idade?");
    scanf("%d", &p2.idade);

    printf("Qual sua altura?");
    scanf("%f", &p2.altura);

    printf("Qual seu peso?");
    scanf("%f", &p2.peso);

    struct pessoa p3;

    printf("\nQual o seu nome?");
    fgets(p3.nome, sizeof(p3.nome), stdin);

    printf("Qual sua idade?");
    scanf("%d", &p3.idade);

    printf("Qual sua altura?");
    scanf("%f", &p3.altura);

    printf("Qual seu peso?");
    scanf("%f", &p3.peso);

    printf("\n");

    printf("nome: %s | idade: %d | altura: %.2f | peso: %.2f\n", p1.nome, p1.idade, p1.altura, p1.peso);
    printf("nome: %s | idade: %d | altura: %.2f | peso: %.2f\n",p2.nome, p2.idade, p2.altura, p2.peso);
    printf("nome: %s | idade: %d | altura: %.2f | peso: %.2f\n",p3.nome, p3.idade, p3.altura, p3.peso);
    
    
    
    
    

    
    





    return 0;
 
}