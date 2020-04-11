#include <iostream>

// Вызывает функцию std::cout
void print() {

	// Потому что хотим использовать стандартную библиотеку для печати
	// в консоль и не использовать какие-либо другие библиотеки
	std::cout << "Check funtion!";
}

/*
Присваиваем значение переменным и печатает "Check funtion!"
*/

int main() {

	setlocale (LC_ALL, "Russian");

	std::string hs = "Hello, Skillbox";
	int modul = 11;
	int x = 100;
	3 + 7;
	int y = x + 100;
	
	int b = 0;
	b = b + 2;

	int test;
	test = 100500;

	int test2 = 1005001;

	int mult = x * y;
	int random = 1002;

	std::cout << "Модуль: " << modul << ". " << "Инструменты C++ \n" << std::endl;
	std::cout << hs + "!\n" << std::endl;
	std::cout << "test: " << test << std::endl;
	std::cout << "test2: " << test2 << std::endl;
	std::cout << "random: " << random << std::endl;
	std::cout << "mult: " << mult << std::endl;
	std::cout << "x: " << x << ", b: " << b << std::endl << std::endl;

	print();
	std::cout << std::endl;


	return 0;
}