#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


void matrix(int m[2][2]){
  
  
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
    printf("%d\n", m[i][j]);
   }
   printf("\n");
  }
}




int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int m[2][2] = {
      {1, 2},
      {3, 4}
    };
    matrix(m);

      
    
    

    return 0;
 
}