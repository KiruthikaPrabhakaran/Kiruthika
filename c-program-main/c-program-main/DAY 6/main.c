#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the value of N:");
    scanf("%d",&n);
     n=(n*2)+1;
    for(int i=0;i<=n/2;i++){
        if(i<n/2){
        for( int j=0;j<=i;j++){
            printf("*");
        }
            for(int s = 0;s<n-((i*2)+2);s++){
                printf(" ");
            }
            for(int k=0;k<=i;k++){
                printf("*");
            }}
    else if(i==n/2){
        for( int j=0;j<n;j++){
            printf("*");
        }
    }
        
        printf("\n");
    }
    for(int i=n/2-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int s=0;s<n-((i*2)+2);s++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    
    
}