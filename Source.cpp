#include <iostream>
using namespace std;
int main() {
	/* 
	//Series1◦
	//.Даны десять вещественных чисел.Найти их сумму.
	int sum = 0;
	int x;
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		sum += x;
	}
	cout << sum << endl;*/
	/*Series2.Даны десять вещественных чисел.Найти их произведение
	double proiz = 1;
	double x;
	int i = 1;
	while (i <= 10) {
		cin >> x;
		proiz *= x;
		i++;
	}*/
	/* 
	//Series3.Даны десять вещественных чисел.Найти их среднее арифметическое.
	double rez = 1;
	int i;
	for (i = 1; i <= 10; ++i) {
		cin >> i;
		rez += i;
	}
	rez = rez / 10;
	cout << rez;*/
	//Series4.Дано целое число N и набор из N вещественных чисел.Вывести
	//сумму и произведение чисел из данного набора.
	int proiz = 1;
	int n;
	cin >> n;
	int i = 1;
	int x;
	int sum = 0;
	while (i <= n) {
		cin >> x;
		proiz *= x;
		sum += x;
		i++;
	 }
	cout << sum << " " << proiz << endl;
}