#include <iostream>
#include <string>
#include "uppercase.h"


int main() {

	std::cout << "Pls Input a Word or sentence" << std::endl;
	std::string myWord;
	std::getline(std::cin, myWord);
	std::cout << "The original word is - " << myWord << std::endl;
	std::cout << "The new word is - " << mylibrary::toUppercase(myWord)<<std::endl;
	std::cout << "The new word is - " << mylibrary::toLowercase(myWord) << std::endl;

	return 0;
}