#include <unistd.h>

void	ft_print_alphabet()
{
	char	a;

	a = 48;
	while (a <= 57)
	{
		write(1, &a, 1);
		a++;
	}
	write(1, "\n", 1);
}

int main()
{
	ft_print_alphabet();
	return 0;
}
