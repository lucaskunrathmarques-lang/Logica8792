#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("digite o tamanho do vetor:");
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        printf("digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int maior = v[0], menor = v[0];

    for(int i = 1; i < n; i++){
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }

    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);


    





    return 0;
 
}