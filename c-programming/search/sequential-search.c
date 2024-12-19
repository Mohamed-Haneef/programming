#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 4, 5, 7};
    int key = 5;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[1])); i++){
        if(arr[i] == key){
            printf("The element is located at index : %d", i);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}