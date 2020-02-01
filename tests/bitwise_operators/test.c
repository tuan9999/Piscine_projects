/* Function to reverse bits of num */
#include <stdio.h>

unsigned int reverseBits(unsigned int num) 
{ 
    unsigned int  NO_OF_BITS;
    unsigned int reverse_num;
    unsigned int i;
    unsigned int temp;

    reverse_num = 0;
    NO_OF_BITS = sizeof(num) * 8; 

    while (i < NO_OF_BITS)
    {
        temp = (num & (1 << i));
    }
    for (i = 0; i < NO_OF_BITS; i++) 
    { 

    if(temp) 
    reverse_num |= (1 << ((NO_OF_BITS - 1) - i)); 
    } 

    return reverse_num; 
} 
  
/* Driver function to test above function */
int main() 
{ 
    unsigned int x = 2;  
    printf("%u", reverseBits(x)); 
    return (0);
} 