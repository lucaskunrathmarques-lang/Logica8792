#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int QTD = 5;
    int numero[QTD];

    srand(time(NULL));

    for(int i = 0; i < QTD; i++){
      numero[i] = rand() % 10 + 1;
    }

    printf("numeros sorteados: %d");

    for(int i = 0; i < QTD; i++){
      printf("%d\n", numero[i]);
    }
    
    

    return 0;
 
}