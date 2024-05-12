#include <stdio.h>

//Straight Insertion from 8.1 Numerical Recipes in C

void piksrt(int n, float arr[])
//Sorts an array arr[1..n-1] into ascending numerical order, by straigh insertion. n is input; arr is replaced on output by its sorted rearrangement.
{
   int i,j;
   float a;

   for (j=1;j<n;j++) { 		//Pick out each element in turn.
       a=arr[j];
       i=j-1;
       while (i >= 0 && arr[i] > a) {    //Look for the place to insert it.
           arr[i+1]=arr[i];
           i--;
        }
        arr[i+1]=a;
   }
}

int main(){
	
	  float arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	  printf("Displaying integers: \n");

	  // printing elements of an array
  	  for(int i = 0; i < 10; ++i) {
   	  printf("%f\n", arr[i]);
  	  }

	  piksrt(10, arr);
	  printf("Displaying sorted integers: \n");

          // printing elements of an array
          for(int i = 0; i < 10; ++i) {
          printf("%f\n", arr[i]);
          }

  return 0;
}
