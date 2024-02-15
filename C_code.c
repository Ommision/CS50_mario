
/////////CS 50 Mario Challenge ////////////  
#include <stdio.h>

int main(void){
    int n;
    do{
        printf("Height: ");
        scanf("%i", &n);
    }
    while(n < 1);

    for(int f = 1; f <= n; f++){
        // print spaces 
        for(int j = 1; j <= n - f ; j++){
            printf(" ");
        }
        for(int i = 1; i < f; i++){
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}