#include<stdio.h>
#include<windows.h>





int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char nomes[3][30] = {
        "nicole",
        "eduardo",
        "maria"
    };

    for(int i = 0; i < 3; i++){
        printf("%s\n", nomes[i]);
    }




    return 0;
 
}