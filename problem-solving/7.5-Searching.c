#include<stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0 ; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);
    int search = -1;

    for(int i = 0 ; i < n ; i++){
        if(x == arr[i]){
            search = i;
            break;
        }
    }

    printf("%d", search);


    return 0;
}