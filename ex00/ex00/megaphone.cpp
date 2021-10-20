#include <iostream>
#include <cstring>

int		main(int argc, char **agrv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			j = 0;
			while (j < std::strlen(agrv[i]))
			{
				std::cout << (char)std::toupper(agrv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}