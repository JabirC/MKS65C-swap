#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   srand(time(NULL));

   int arr[10];

   int count;
   for (count = 0; count < 9; count++){
     arr[count] = rand();
   }
   arr[9] = 0;

   for(count = 0; count < 10; count++){
     printf("arr[%d] : %d\n", count , arr[count] );
   }

   printf("----------------------------------------------\n");

   int ray[10];

   for (count = 9; count > -1 ; count--){
     *(ray + count) = *(arr + 9 - count);
     printf("ray[%d] : %d\n", count , ray[count] );
   }
   return 0;
}
