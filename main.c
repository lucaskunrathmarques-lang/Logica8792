#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    printf("digite um numero:");
    scanf("%d",  &n);

    for(int i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", n, i, n * i);
    }
    

    
    





    return 0;
 
}