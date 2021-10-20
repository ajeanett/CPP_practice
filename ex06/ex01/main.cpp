#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
# define LEN 24

struct				Data
{
	std::string		string1;
	std::string		string2;
	int				num;
};

void	*serialize(void) {
	char	random[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *bytes = new char[LEN + LEN + 4];
	int i = 0;
	srand(time(0));
	while (i < LEN) {
		bytes[i] = random[(rand() % 61)];
		i++;
	}
	*reinterpret_cast<int*>(bytes + LEN) = (rand() % 2147483647);
	i += 4;
	while (i < (LEN + LEN + 4)) {
		bytes[i] = random[(rand() % 61)];
		i++;
	}
	return (bytes);
}

Data	*deserialize (void *raw) {
	Data *data = new Data;
	data->string1 = std::string(reinterpret_cast<char*>(raw), LEN);
	data->num = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + LEN);
	data->string2 = std::string(reinterpret_cast<char*>(raw) + LEN + 4, LEN);
	return (data);
}

int     main(void) {
	void	*ptr = serialize();
	Data	*data = deserialize(ptr);
	std::cout << data->string1 << std::endl;
	std::cout << data->num << std::endl;
	std::cout << data->string2 << std::endl;
    return (0);
}