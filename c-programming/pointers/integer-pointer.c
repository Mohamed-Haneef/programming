#include <stdio.h>
#include <stdlib.h>

int main(){
    // Integer Pointer (or) Pointer to Integer
    int x = 5;
    int *ptr;
    ptr = &x;

    printf("Address of x is #%p | Value of x = %d \n", &x, x);
    printf("Address of ptr is #%p | Value of ptr = %d \n", ptr, *ptr);

    // Changing the value in the ptr 
    printf("Changing the value of ptr to 7 \n");
    *ptr = 7;
    printf("After Changing the value in ptr to 7\n");
    printf("The value of x is : %d || The value held in ptr is : %d", x, *ptr);
    
}


/*
Output:
=======
Address of x is #0x7ffc49cc47f4 | Value of x = 5 
Address of ptr is #0x7ffc49cc47f4 | Value of ptr = 5 
Changing the value of ptr to 7 
After Changing the value in ptr to 7
The value of x is : 7 || The value held in ptr is : 7    

Note:
=====
Changing the value held in an address reflects in all the variables holding that address.
*/