#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>

void contarVogais(char palavras[]){
    int contador = 0;
    for(int i = 0; i <strlen(palavras); i++){
        char c = palavras[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            contador++;
        }
    }
    printf("a palavra '%s' tem %d vogais.\n", palavras, contador);

}

    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int l;
    printf("DIGITE UMA PALAVRA: ");
    scanf("%s", &l);
    contarVogais(l);




    return 0;
 
}