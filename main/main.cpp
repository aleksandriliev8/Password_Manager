#include "../Headers/Ciphers.h"

int main() {
	const char* pass = "";

	try
	{
		const char* encrypted = ceaserCipher("Alexandar", 26);
		std::cout << encrypted << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cerr << ex.what();
	}

	try
	{
		const char* encrypted = ceaserCipher(pass, 0);
		std::cout << encrypted;
	}
	catch (const std::exception& ex)
	{
		std::cerr << ex.what();
	}
}
