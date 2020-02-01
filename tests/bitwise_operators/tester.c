
#include <stdio.h>

void	print_bits(unsigned int num);
void	print_bitschars(unsigned char octet);

int main(void)
{
	/* binary = 1 2 4 8 16 32 64 128 256 512 */  
	/* binary = 0 0 0 0  0  0  0   0   0   0 */ 
	unsigned int a = 60;	/* 60 = 0011 1100 */  
	unsigned int b = 13;	/* 13 = 0000 1101 */
	unsigned int c = 0;
	print_bits(a);
	print_bits(b);
	print_bits(c);

	unsigned char z = 2;
	print_bitschars(z);

	/* Binary AND Operator copies a bit to the result if it exists in both operands */
	c = a & b;       /* 12 = 0000 1100 */ 
	printf("Line 1 - Value of c is %d\nbits in c = ", c );
	print_bits(c);

	/* Binary OR Operator copies a bit if it exists in either operand. */
	c = a | b;       /* 61 = 0011 1101 */
	printf("Line 2 - Value of c is %d\nbits in c = ", c );
	print_bits(c);

	/* Binary XOR Operator copies the bit if it is set in one operand but not both. */
	c = a ^ b;       /* 49 = 0011 0001 */
	printf("Line 3 - Value of c is %d\nbits in c = ", c );
	print_bits(c);

	/* Binary One's Complement Operator is unary and has the effect of 'flipping' bits. */
	c = ~a;          /* -61 = 1100 0011 */
	printf("Line 4 - Value of c is %d\nbits in c = ", c );
	print_bits(c);

	/* Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand. */
	c = a << 2;     /* 240 = 1111 0000 */
	printf("Line 5 - Value of c is %d\nbits in c = ", c );
	print_bits(c);

	/* Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand. */
	c = a >> 2;     /* 15 = 0000 1111 */
	printf("Line 6 - Value of c is %d\nbits in c = ", c );
	print_bits(c);
}

void	print_bits(unsigned int num)
{
	unsigned int size = sizeof(unsigned int);
	unsigned int maxPow = 1 << (size * 2 - 1);
	unsigned int i;

	i = 0;
	while (i < size * 2)
	{
		printf("%u ",num & maxPow ? 1 : 0);
    	num = num << 1;
		i++;
		if (i == 4)
			printf(" ");
	}
	printf("\n\n");
}

void	print_bitschars(unsigned char octet)
{
	unsigned int size = sizeof(unsigned char);
	printf("\n\nprint chars\n\n");
	printf("size = %d\n", size);
	unsigned int maxPow = 1 << (size * 8 - 1);
	printf("maxpow = %d\n", maxPow);
	unsigned int i;

	i = 0;
	while (i < size * 8)
	{
		printf("%u ",octet & maxPow ? 1 : 0);
    	octet = octet << 1;
		i++;
		if (i == 4)
			printf(" ");
	}
	printf("\n\nend print chars\n\n");
}


{

}

unsigned char	reverse_bits(unsigned char octet)
{ 
	unsigned int  NO_OF_BITS;
	unsigned char reverse_num;
	unsigned int i;
	unsigned char temp;

	reverse_num = 0;
	NO_OF_BITS = sizeof(octet) * 8; 

	while (i < NO_OF_BITS)
	{
		temp = (octet & (1 << i));
		if(temp) 
			reverse_num |= (1 << ((NO_OF_BITS - 1) - i)); 
		} 
	}
	return reverse_num; 
} 