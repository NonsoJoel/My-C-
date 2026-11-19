#ifndef uppercase_H
#define uppercase_H

#include <iostream>
#include <string>

namespace mylibrary {
	std::string toUppercase(std::string word) {
		std::string newWord;
		for (char letter : word) {
			int ascii = static_cast<int>(letter);
			
			if (ascii >= 97 && ascii <= 122) {
				ascii -= 32;
			}
			
			char newChar = static_cast<char>(ascii);
			newWord = newWord + newChar;
		}
		return newWord;
	}

	std::string toLowercase(std::string word) {
		std::string newWord;
		for (char letter : word) {
			int ascii = static_cast<int>(letter);

			if (ascii >= 65 && ascii <= 90) {
				ascii += 32;
			}

			char newChar = static_cast<char>(ascii);
			newWord = newWord + newChar;
		}
		return newWord;
	}
}

#endif
