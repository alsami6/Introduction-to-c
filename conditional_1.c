#include<stdio.h>

int main(){
    int marks;
    printf("Your marks ? ");
    scanf("%d", &marks);
    
    if(marks >= 30){
        printf("You got pass");
    }
    else{printf("You fail");
    }

    return 0;
} 
