#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
start:
	int x;
	cout << " Выберите номер задания: ";
	cin >> x;
	if (x == 1)
	{
		int a, b;
		cout << " Введите число a: ";
		cin >> a;
		cout << " Введите число b: ";
		cin >> b;
		if (a == b)
			cout << " Число"" " << a << " ""равно числу"" " << b << endl;
		else if (a > b)
			cout << " " << b << " " << a << endl;
		else if (a < b)
			cout << " " << a << " " << b << endl;
	}
	if (x == 2)
	{
		float a, b, c, d, e, s;
		cout << " Введите первую оценку: ";
		cin >> a;
		cout << " Введите вторую оценку: ";
		cin >> b;
		cout << " Введите третью оценку: ";
		cin >> c;
		cout << " Введите четвертую оценку: ";
		cin >> d;
		cout << " Введите пятую оценку: ";
		cin >> e;
		s = ((a + b + c + d + e) / 5);
		if (s >= 4)
			cout << " Студент допущен. Оценка: " << s << endl;
		else
			cout << " Студент недопущен. Оценка: " << s << endl;
	}
	if (x == 3)
	{
		// To zhe samoe zadanie chto vyshe
	}
	if (x == 4)
	{
		float a, b, s1, s2, s3, s4;
		cout << " Введите число a: ";
		cin >> a;
		cout << " Введите число b: ";
		cin >> b;
		cout << " Выберите арифметическое действие: +(1), -(2), *(3), /(4) ";
		int x;
		cin >> x;
		if (x == 1)
		{
			s1 = a + b;
			cout << s1 << endl;
		}
		else if (x == 2)
		{
			s2 = a - b;
			cout << s2 << endl;
		}
		else if (x == 3)
		{
			s3 = a*b;
			cout << s3 << endl;
		}
		else if (x == 4)
		{
			s4 = a / b;
			cout << s4 << endl;
		}
	}
	if (x == 6)
	{
		int a;
		cout << " Введите число: ";
		cin >> a;
		for (int i = 0; i <= 7; i++)
		{
			cout << a << " в степени"" " << i << " = " << pow(a, i) << endl;
		}
	}
	if (x == 7)
	{
		// Chtoby v trekh marshrutkah bylo porovnu passazhirov, To obshee kolichestvo ludey dolzhno byt kratno 3!
		//Esli ne kratno, zadachu po usloviyu reshit nevozmozhno, cheloveka popolam ne podelish zhe
		//Reshim zadachu tak chtoby obsheee kolichesvto bylo kratno 3!
		int a, b, c, s;
		int m1, m2, m3;
		cout << " Введите количество людей в первой маршрутке: " << endl;
		cin >> a;
		cout << " Введите количество людей во второй маршрутке: " << endl;
		cin >> b;
		cout << " Введите количество людей в третьй маршрутке: " << endl;
		cin >> c;
		int d;
		d = a + b + c;
		if (d % 3 == 0)
		{
			s = d / 3;
			m1 = s - a;
			{
				if (m1 > 0)
					cout << m1 << " человек нужно добавить к первой маршрутке" << endl;
				else
					cout << m1 << " человек нужно пересадить из первой маршрутки" << endl;
			}
			m2 = s - b;
			{
				if (m2 > 0)
					cout << m2 << " человек нужно добавить к второй маршрутке" << endl;
				else
					cout << m2 << " человек нужно пересадить из второй маршрутки" << endl;
			}
			m3 = s - c;
			{
				if (m3 > 0)
					cout << m3 << " человек нужно добавить к третьей маршрутке" << endl;
				else
					cout << m3 << " человек нужно пересадить из третьей маршрутки" << endl;
			}

		}
		else
			cout << " Задача не решается ";


	}
}