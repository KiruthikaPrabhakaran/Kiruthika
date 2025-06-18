/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>
#include <stdbool.h>
int main(){
    int num;
    bool prime = true; 
    scanf("%d",&num);
    for (int i=2;i<num;i++){
        if(num %i==0){
            prime = false;
            break;
        }
        
    }
    if(prime){
        printf("It is a prime\n");
    }
    else{
        printf("It is not a prime\n");
    }
    return 0;
}