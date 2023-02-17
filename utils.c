#include "pushswap.h"

int	*ft_atoi(char *str)
{
	int k;
	int *number;
	int i;
	int sign;

	k = 0;
	sign = 1;
	i = 0;
	number = (int *)malloc(sizeof(int*) * atoi_cal_and_che(str));
	while(str[i] && number_checker(&str[i], k) == 1)
	{
		number[k] = 0;
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if ((str[i] == '-' || str[i] == '+') && number_checker(&str[i], (k + 1)) == 1)
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9' && str[i])
			number[k] = (number[k] * 10) + (str[i++] - 48) * sign;
		sign = 1;
		k++;
	}
	return (number);
}

int number_checker(char *str, int k)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+' && str[i] != ' ' && str[i] != '\t')
		ft_error();
	if((str[i] == '-' || str[i] == '+') && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
		ft_error();
	if(k == 0)
	{
		while(str[i])
		{
			if(str[i] >= '0' && str[i] <= '9')
				j++;
			i++;
		}
		if(j == 0)
			ft_error();
	}
	return 1;
}

int atoi_cal_and_che(char *str)
{
	int i;
	int number;
	long result;
	int sign;

	sign = 1;
	i = 0;
	result = 0;
	number = 0;
	while(str[i])
	{
		while (str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '\t')
		{
			if(str[i] == '-')
				sign *= -1;
			i++;
		}	
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
			ft_error();
		while (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i++] - 48);
		number++;
		result *= sign; 
		sign = 1;
		if(result > 2147483647 || result < -2147483648)
			ft_error();
		result = 0;
	}
	return (number);
}

void ft_error(void)
{
	write(2,"Error\n",6);
	exit(0);
}