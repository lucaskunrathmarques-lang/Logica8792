#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>

void fibonacci(int termos){
    int a = 0, b = 1, c;
    printf("seguencia de fibonacci (%d termo): \n", termos);
    for(int i = 1; i <= termos; i++){
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
}    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    fibonacci(10);




    return 0;
 
}