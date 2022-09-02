#include <iostream>
#include <fstream>

int		replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	input_stream(filename);
	std::string		buffer;

	if (!(input_stream.is_open()))
	{
		std::cout << "The file cannot be opened." << std::endl;
		return (0);
	}
	std::string		output_filename = filename + ".replace";
	std::ofstream	output_stream(output_filename);
	while (std::getline(input_stream, buffer))
	{
		size_t	find = buffer.find(s1);
		while (find != std::string::npos)
		{
			buffer.replace(find, s1.length(), s2);
			find = buffer.find(s1, find + s2.length());
		}
		output_stream << buffer;
		if (!(input_stream.eof()))
			output_stream << std::endl;
	}
	input_stream.close();
	output_stream.close();
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "> The number of arguments is not valid." << std::endl;
		std::cout << "> Need \"./replace [filename] [search] [replace]\"" << std::endl;
		return (1);
	}
	else
	{
		if (!(replace(argv[1], argv[2], argv[3])))
			return (1);
	}
	return (0);
}
