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
    
    int ordenado = 1;

    for(int i = 0; i < n; i++){
        if(v[i] > v[i + 1]){
            ordenado = 0;
            break;
        }
    }

    if(ordenado){
        printf("o vetor esta ordenado de forma crescente\n");
    }else{
        printf("o vetor nao esta ordenado\n");
    }


    





    return 0;
 
}