#include "Array.hpp"

int		main() {
	
    Array<int> intArray(10);
	Array<double> doubleArray(10);
 
	for (int count = 0; count < intArray.size(); ++count)
	{
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
	}
 
	for (int count = intArray.size()-1; count >= 0; --count)
		std::cout <<"intArray[" << count <<"]: " << intArray[count] << "\t" <<"doubleArray[" << count <<"]: " << doubleArray[count] << std::endl;

	 std::cout << "*********   TEST STRING   *********" << std::endl << std::endl;
	try {
		Array<std::string> str(1);
		std::cout<< str[0] <<std::endl;
		str[0] = "Lorem ipsum dolor sit amet";
		std::cout<< str[0] <<std::endl;
		Array<std::string> str2;
		str2 = str;
		std::cout<< str2[0] <<std::endl;
		std::cout<< str[1] <<std::endl;
	}
	catch (std::exception &m) {
		std::cout << m.what() << std::endl;
	}
	std::cout << "*********   TEST CHAR  *********" << std::endl << std::endl;
	{
	try {
		Array<char> str(6);
		str[2] = 'a';
		str[3] = 'c';
		std::cout<< str[2] <<std::endl;
		std::cout<< str[3] <<std::endl;
		std::cout<< str[4] <<std::endl;
		Array<char> str2;
		str2 = str;
		str[2] = 'b';
		std::cout<< str[2] <<std::endl;
		std::cout<< str2[2] <<std::endl;
		std::cout<< str[7] <<std::endl;
	}
	catch (std::exception &m) {
		std::cout << m.what() << std::endl;
	}
	}
	std::cout << "*********   TEST INT  *********" << std::endl << std::endl;
	try {
		Array<int> intArr(10);
		Array<int> intArr2(10);
		intArr[5] = 42;
		std::cout<< "intArr: "<< intArr[5] <<std::endl;
		std::cout<< "intArr: "<< intArr[6] <<std::endl;
		intArr2 = intArr;
		intArr[5] = 21;
		std::cout<< "intArr2: "<<intArr2[5] <<std::endl;
		std::cout<< "intArr: "<<intArr[5] <<std::endl;
		std::cout<< "intArr: "<<intArr[12] <<std::endl;
	}
	catch (std::exception &m) {
		std::cout << m.what() << std::endl;
	}

	std::cout << "*********   TEST DOUBLE *********" << std::endl << std::endl;
	try {
		Array<double> daubArr(20);
		daubArr[6] = 21.5432;
		std::cout<<"doubleArr: "<< daubArr[5] <<std::endl;
		std::cout<< "doubleArr: "<< daubArr[6] <<std::endl;
		std::cout<< "doubleArr: "<< daubArr[12] <<std::endl;
		std::cout<< "doubleArr: "<< daubArr[21] <<std::endl;
	}
	catch (std::exception &m) {
		std::cout << m.what() << std::endl;
	}
	std::cout << "*********   EMPTY ARRAY *********" << std::endl << std::endl;

	try {
		Array<int> intArr;
		intArr[0] = 42;
		std::cout<< "intArr: "<< intArr[0] <<std::endl;
	}
	catch (std::exception &m) {
		std::cout << m.what() << std::endl;
	}
 	// int * a = new int();
	//  std::cout <<"*a: " <<*a << std::endl; 

	return 0;
}