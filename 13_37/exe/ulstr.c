#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4) | (octet << 4);
}

int main()
{
	char a = 't';

	a = swap_bits(a);
	write(1, &a, 1);
	return (0);
}
