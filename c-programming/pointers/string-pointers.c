#include <stdio.h>
#include <stdlib.h>

int main(){
    // Storing String as pointers
    char *a = "orewa monkey d luffy"; //Make sure you don't use single quotes
    printf("Value of a is %c, at address #%p\n", *a, a);
    printf("Size of a is : %d \n", sizeof(a));
    for(int i=0;i<sizeof(a); i++){
        printf("Address of the letter %c, is at #%p \n", a[i], &a[i]);
    }
    return 0;
}

/*
Output: 
=======
Address of x is #0x5 | Value of x = 5 
Address of ptr is #0x7fff476742b4 | Value of ptr = 5 
Value of a is o, at address #0x559c6ca8005c
Size of a is : 8 
Address of the letter o, is at #0x559c6ca8005c 
Address of the letter r, is at #0x559c6ca8005d 
Address of the letter e, is at #0x559c6ca8005e 
Address of the letter w, is at #0x559c6ca8005f 
Address of the letter a, is at #0x559c6ca80060 
Address of the letter  , is at #0x559c6ca80061 
Address of the letter m, is at #0x559c6ca80062 
Address of the letter o, is at #0x559c6ca80063 

Note:
=====
Can print only upto 8 character since the size of the pointer is 8 bytes(64-bit)
*/