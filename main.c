#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    float nota, soma = 0;

    printf("quantos alunos tem a turma:");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("digite a nota do aluno %d: \n", i + 1);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    printf("media da turma: %.2f\n", soma / n);




    return 0;
 
}