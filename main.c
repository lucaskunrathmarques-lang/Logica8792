#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            printf("for interno e for externo: %d   %d\n", j, i);
        }
        printf("\n");
    }



    return 0;
 
}