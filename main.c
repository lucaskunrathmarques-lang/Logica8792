#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   float n1, n2, n3, media;

    printf("digite tres notas: ");
    scanf("%F %F %F", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    printf("media: %.2f\n", media);

    return 0;
 
}