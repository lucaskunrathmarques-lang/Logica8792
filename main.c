#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int v[10];
    for(int i = 0; i < 10; i++){
        printf("digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("vetor invertido: \n");
    for(int i = 9; i >= 0; i--){
        printf("%d", v[i]);
    }
    printf("\n");



    return 0;
 
}