#define FILENAME 1
#define S1 2
#define S2 3

#include <iostream>
#include <fstream>
#include <string.h>

int		ret_error(std::string err_msg)
{
	std::cout << err_msg << std::endl;
	return (1);
}

bool	create_file(std::ofstream& dst, char *filename)
{
	char	dst_name[strlen(filename) + strlen(".replace") + 1];
	
	strcpy(dst_name, filename);
	strcat(dst_name, ".replace");
	dst.open(dst_name);
	return (dst.is_open());
}

int		main(int ac, char **av)
{
	std::ifstream	org;
	std::ofstream	dst;
	std::string		filename;

	if (ac != 4)
		return (ret_error("Bad number of arguments"));
	if (strcmp(av[S1], "") == 0 || strcmp(av[S2], "") == 0)
		return (ret_error("Strings can't be empty"));
	org.open(av[FILENAME]);
	if (!org.is_open())
		return (ret_error("Problem with the original file"));
	if (!(create_file(dst, av[FILENAME])))
		return (ret_error("Problem with the creation of the new file"));
	std::string line;
	size_t ret = 0;
	while (getline(org, line))
	{
		while ((ret = line.find(av[S1], 0)) != std::string::npos)
		{
			line.replace(ret, strlen(av[S2]), av[S2]);
		}
		dst << line;
		dst << "\n";
	}
}