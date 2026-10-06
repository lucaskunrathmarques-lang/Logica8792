#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>

int votosA = 0;
int votosB = 0;
int votosNulos = 0;

void votar(int numero){
    if(numero == 1){
        votosA++;
        printf("voce votou na candidato A.\n");
    }else if(numero == 2){
        votosB++;
        printf("voce votou no candidato B.\n");
    }else{
        votosNulos++;
        printf("voto nulo.\n");
    }
}

void resultado(){
    printf("\n==== Resultado da votação ====\n");
    printf("Candidata A: %d votos\n", votosA);
    printf("Candidato B: %d votos\n", votosB);
    printf("Nulos: %d votos\n", votosNulos);

    if(votosA > votosB){
        printf(">>> Candidato A venceu! <<<");
    }else if(votosB > votosA){
        printf(">>> Candidato B venceu! <<<");
    }else{
        printf(">>> Empate <<<");
    }
}


    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int voto;
    int totalEleitores = 10;

    for(int i = 0; i < totalEleitores; i++){
        printf("eleitor %d - digite 1 para A, 2 para B: ", i + 1);
        scanf("%d", &voto);
        votar(voto);
    }

    resultado();



    return 0;
 
}