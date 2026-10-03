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

        if(v[i] < 0){
            v[i] = 0;
        }
    }

    printf("vetor ajustado: \n");

    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
       
    }
    printf("\n");
    
    


    





    return 0;
 
}