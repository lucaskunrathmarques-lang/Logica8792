#include<stdio.h>
#include<windows.h>


void saudar(const char *nome){
    printf("ola %s\n", nome);
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    saudar("lucas");
    saudar("marques");




    return 0;
 
}