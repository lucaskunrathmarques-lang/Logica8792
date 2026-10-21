#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>



    



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
    int senha = 1234;
    int tentativa;

    printf("coloque sua senha: ");
    scanf("&d", &tentativa);

    while(tentativa != senha){
       
      if(tentativa != senha){ 
        printf("senha incorreta:\n ");
      }

    printf("tente novamente");
    scanf("%d", &tentativa);

    }
    
    printf("senha aceita");
    
    

    


    return 0;
 
}