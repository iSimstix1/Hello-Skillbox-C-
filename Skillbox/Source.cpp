#include <iostream>

int main() {

	setlocale (LC_ALL, "Russian");

	std::string hs = "Hello, Skillbox";
	int modul = 11;

	std::cout << "������: " << modul << ". " << "����������� C++ \n" << std::endl;
	std::cout << hs + "!" << std::endl;



	return 0;
}