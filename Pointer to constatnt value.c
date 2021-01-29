#include<Stdio.h>
typedef unsigned char d8; //change standard types


int main(void){
  const d8 x=10; //declaration and initialization to constant variable

 d8 *p=&x;   //declaration and initialization pointer

 *p = 5; // In this step changed the value of const variable

 printf("X = %d",x);


}

/*******************************************************************************************

                        Output will be a // X = 5

********************************************************************************************/

