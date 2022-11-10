#include<stdio.h>

int main () {
	unsigned int a ;

       __asm__ __volatile__ ( 
        
        "cmp %k1, %k0 \n\t"
	"cmovle %"
        
	:"g"
	:"i"
        :  
    ); 
}
