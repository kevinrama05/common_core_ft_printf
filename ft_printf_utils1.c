#include <unistd.h>
#include <stdio.h>

void	print_hex(unsigned long n, int *count)
{
	char *hex = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16, count);
	write(1, &hex[n % 16], 1);
	(*count)++;
}

void	ft_putptr(void *ptr, int *count)
{
	unsigned long addr;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		(*count) += 5;
		return;
	}

	addr = (unsigned long)ptr;
	write(1, "0x", 2);
	(*count) += 2;
	print_hex(addr, count);
}

int	main(void)
{
	int		count = 0;
	int		x = 42;
	int		*p = &x;

	ft_putptr(p, &count);
	write(1, "\n", 1);
	printf("Printed chars: %d\n", count);

	ft_putptr(NULL, &count);
	write(1, "\n", 1);
	printf("Printed chars total: %d\n", count);
}
