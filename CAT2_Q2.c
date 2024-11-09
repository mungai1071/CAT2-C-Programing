// 2D array
#include <stdio.h>

int main() {
   //printf(), scanf()
     // Declare and initialize a 2D arrays
   int i;
   int j;
    int scores[2][2] = {
        {{65, 92}, {84, 72}},  
        {{35, 70}, {59, 67}}   
    };

   //Display 3 D arrays values
    printf("Scores:\n");
    for (int i = 0; i < 2; i++) {
        printf("Set%d \n", i + 1);
        for (int j = 0; j < 2; j++) {
             
                printf(" score[%d][%d]=%d \n ", i,j, scores[i][j]);
            }
            
        
        
    }

    return 0;
}
