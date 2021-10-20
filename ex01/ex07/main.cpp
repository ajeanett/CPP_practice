#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
    std::string file;
	std::string src;
	std::string dst;
    std::string content;
    int         find;
	int			i;

    if (argc != 4)
    {
        std::cerr << "Wrong arguments" << std::endl;
        return(1);
    }
	file = argv[1];
	src = argv[2];
	dst = argv[3];
    if (src.length() == 0 || dst.length() == 0)
    {
        std::cerr << "Error! Empty arguments." << std::endl;
		return(1);
    }
	std::ifstream ifs(file);
	if (!ifs)
	{
		std::cerr << "Uh oh, " << file << " could not be opened for reading!" << std::endl;
		return(1);
	}
    std::ofstream ofs(file + ".replace");
	if (!ofs)
	{
		std::cerr << "Uh oh, " << file + ".replace" << " could not be opened for writing!" << std::endl;
		return(1);
	}
	i = 0;
    while (getline(ifs, content))
	{
		find = content.find(src);
		if (i)
			ofs << std::endl;
		while (find != std::string::npos)
		{
			content.replace(content.find(src), src.size(), dst);
			find = content.find(src, find + src.length());
		}
		i++;
		ofs << content ;
	}
	return(0);
}