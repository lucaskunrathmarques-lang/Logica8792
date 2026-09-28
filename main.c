#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>




    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("digite um numero:");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){

        for(int o = n; o <= 10; o++){
            printf("%d X %d = %d\n", o, i, o * i);
        }
        printf("\n");
    }



    return 0;
 
}