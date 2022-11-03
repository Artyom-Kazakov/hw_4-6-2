﻿#include <iostream>
#include <string>
#include <Windows.h>
#include "counter.h"

int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string answer_y_n;
	std::string command_input;
	int count_input = 0;

	Counter counter;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> answer_y_n;

	if (answer_y_n == "да") {
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> count_input;
		counter.set_count(count_input);
	}

	std::cout << "Введите команду ('+', '-', '=' или 'x' (в русской раскладке): ";
	std::cin >> command_input;

	while (command_input != "х") {

		if (command_input == "+") {
			counter.count_increase();
		}
		else if (command_input == "-") {
			counter.count_decrease();
		}
		else if (command_input == "=") {
			std::cout << counter.count_print() << std::endl;
		}
		else {
			std::cout << "Неизвестная комманда. Введите команду ('+', '-', '=' или 'x' (в русской раскладке): ";
			std::cin >> command_input;
		}
		std::cout << "Введите команду ('+', '-', '=' или 'x' (в русской раскладке): ";
		std::cin >> command_input;
	}

	std::cout << "До свидания!";
	return 0;
}