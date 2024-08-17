
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	head(int x1)
{
	int		y1;

	y1 = x1;
	ft_putchar('o');
	y1--;
	while (y1 > 1)
	{
		ft_putchar('-');
		y1--;
	}
	if (y1 != 0)
		ft_putchar('o');
	else
		return ;
}

void	body(int x1, int x2)
{
	int		i;
	int		y1;

	i = 2;
	while (i < x2)
	{
		y1 = x1;
		ft_putchar('|');
		y1--;
		while (y1 > 1)
		{
			ft_putchar(' ');
			y1--;
		}
		if (y1 != 0)
			ft_putchar('|');
		else
			return ;
		ft_putchar('\n');
		i++;
	}
}

void	body_1(int x2)
{
	while (x2 > 2)
	{
		ft_putchar('|');
		ft_putchar('\n');
		x2--;
	}
}

void	leg(int x1)
{
	int		y1;

	y1 = x1;
	ft_putchar('o');
	y1--;
	while (y1 > 1)
	{
		ft_putchar('-');
		y1--;
	}
	if (y1 != 0)
		ft_putchar('o');
	else
		return ;
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	else
	{"
		head(x);
		ft_putchar('\n');
		if (x == 1)
			body_1(y);
		else if (x != 1)"
			body(x, y);
		if (y != 1)
		{
			leg(x);
			ft_putchar('\n');
		}
	}
}
int main()
{
	rush(5,5);
}
