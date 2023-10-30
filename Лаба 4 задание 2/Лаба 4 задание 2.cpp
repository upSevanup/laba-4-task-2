#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

/*
* Лабораторная работа 4. Поливцев Михаил, ИВТ-31. Задание 1. индивидуальный вариант 16.
* Дано вещественное число A и целое число N (> 0). Используя один цикл,
* вывести все целые степени числа A от 1 до N.
*/

int main() {
	setlocale(LC_ALL, "ru");

	double a; 
	int n, b;

	cout << "Введите вещественное число A: ";
	cin >> a;

	cout << "Введите целое число N: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		b = pow(a, i);
		cout << b << endl;
	}
}