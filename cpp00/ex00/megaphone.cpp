#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int	j = 1;

	if (argc == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc != 1 && argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if (argv[j][i] >= 97 && argv[j][i] <= 122 )
				argv[j][i] -= 32;
			if (argv[j][i] == (char)(-15439))
				argv[j][i] = (char)(-15471);
			std::cout <<argv[j][i];
			i++;
		}
		std::cout <<" ";
		j++;
	}
	std::cout << std::endl;
	return (0);
}


//#include <cctype>

// int main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		for (int i = 1; i < argc; i++)
// 		{
// 			for (int j = 0; argv[i][j] != '\0'; j++)
// 				argv[i][j] = (char)toupper(argv[i][j]);
// 			std::cout << argv[i];
// 			if (argv[i+1] != NULL)
// 				std::cout << " ";
// 		}
// 		std::cout << std::endl;
// 	}
// 	else
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 	return (0);
// }
