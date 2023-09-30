#include <stdio.h> 

#include <string.h> 

#include <stdlib.h> 

#include <stdbool.h> 

int main(void) { 

 

   /* Type your code here. */ 

   int max=0, n=0,x=0, i=0, E=1, count=0, composite=0; 

   double average=0.0; 

   char buf[50], c, numStr[50]; 

   bool minusSign=false; 

   //do{ 

      fgets(buf, sizeof(buf), stdin); 

      for(i=0;i<=strlen(buf); i++){ 

      c = buf[i]; 

      //printf("%c", c); 

     // if(c == 45){ add this to include negative numbers 

       //  minusSign = true; 

      //} 

      /*else*/ if((c<48 || c > 58)&&c!=45){//printf("is not digit"); 

             

            if(n!=0){ 

               count ++; 

               for(x = n; x > 0; x--){ 

                  numStr[n-x] = buf[i-x]; 

                   

                  for(int j =1; j<x; j++){// 10 ^ x 

                     E *=10; 

                  } 

                  composite += ((int)(numStr[n-x])-48)*E; 

                   

                  E =1; 

               } 

               if(composite > max){max = composite;} 

               composite *= (minusSign ? (-1): (1)); 

               average += (double)composite; 

               //printf("%d", composite ); 

               n = 0;  

               composite =0;minusSign = false; 

            } 

            //printf(" "); 

             

       } 

       else if(c!=45){ 

          //printf("is digit"); 

          n ++; 

           

       } 

       else{break;} 

      } 

      average /=count; 

      //printf("\n%d", count); 

      printf("%d %0.2lf\n", max, average); 

    

   return 0; 

} 
