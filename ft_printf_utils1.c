#include <unistd.h>
#include <stdio.h>

void	print_hex(int *count, unsigned long n)
{
	char *hex = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16, count);
	write(1, &hex[n % 16], 1);
	(*count)++;
}

void	printX(int *count, unsigned long n)
{
	char *hex = "0123456789ABCDEF";

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

void	ft_putchar(int *count, char c)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(int *count, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(count, s[i]);
		i++;
	}
}

void	ft_putnum(int *count, int n)
{
	char	c;

	if (n == -2147483648)
	{	
		ft_putstr(count, "-2147483648");
		return;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar(count, '-');
	}
	if (n >= 10)
		ft_putnum(count, n / 10);
	c = '0' + (n % 10);
	ft_putchar(count, c);
}

void	ft_putu(int *count, unsigned int n)
{
	char	c;

	if (n == 0)
	{
		ft_putchar(count, "0");
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar(count, '-');
	}
	if (n >= 10)
		ft_putnum(count, n / 10);
	c = '0' + (n % 10);
	ft_putchar(count, c);
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
