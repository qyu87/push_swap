#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 7 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	return (result * sign);
}

int	check_int(char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			if (av[i][j] == av[i][j + 1])
			{
				write(1, "error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac < 1)
		exit (1);
	while (av)
	{
		ft_atoi(*av);
	}
	check_int(av);
	exit (0);
}
