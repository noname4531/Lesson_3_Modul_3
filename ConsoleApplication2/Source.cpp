#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
start:
	int x;
	cout << " �������� ����� �������: ";
	cin >> x;
	if (x == 1)
	{
		int a, b;
		cout << " ������� ����� a: ";
		cin >> a;
		cout << " ������� ����� b: ";
		cin >> b;
		if (a == b)
			cout << " �����"" " << a << " ""����� �����"" " << b << endl;
		else if (a > b)
			cout << " " << b << " " << a << endl;
		else if (a < b)
			cout << " " << a << " " << b << endl;
	}
	if (x == 2)
	{
		float a, b, c, d, e, s;
		cout << " ������� ������ ������: ";
		cin >> a;
		cout << " ������� ������ ������: ";
		cin >> b;
		cout << " ������� ������ ������: ";
		cin >> c;
		cout << " ������� ��������� ������: ";
		cin >> d;
		cout << " ������� ����� ������: ";
		cin >> e;
		s = ((a + b + c + d + e) / 5);
		if (s >= 4)
			cout << " ������� �������. ������: " << s << endl;
		else
			cout << " ������� ���������. ������: " << s << endl;
	}
	if (x == 3)
	{
		// To zhe samoe zadanie chto vyshe
	}
	if (x == 4)
	{
		float a, b, s1, s2, s3, s4;
		cout << " ������� ����� a: ";
		cin >> a;
		cout << " ������� ����� b: ";
		cin >> b;
		cout << " �������� �������������� ��������: +(1), -(2), *(3), /(4) ";
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
		cout << " ������� �����: ";
		cin >> a;
		for (int i = 0; i <= 7; i++)
		{
			cout << a << " � �������"" " << i << " = " << pow(a, i) << endl;
		}
	}
	if (x == 7)
	{
		// Chtoby v trekh marshrutkah bylo porovnu passazhirov, To obshee kolichestvo ludey dolzhno byt kratno 3!
		//Esli ne kratno, zadachu po usloviyu reshit nevozmozhno, cheloveka popolam ne podelish zhe
		//Reshim zadachu tak chtoby obsheee kolichesvto bylo kratno 3!
		int a, b, c, s;
		int m1, m2, m3;
		cout << " ������� ���������� ����� � ������ ���������: " << endl;
		cin >> a;
		cout << " ������� ���������� ����� �� ������ ���������: " << endl;
		cin >> b;
		cout << " ������� ���������� ����� � ������ ���������: " << endl;
		cin >> c;
		int d;
		d = a + b + c;
		if (d % 3 == 0)
		{
			s = d / 3;
			m1 = s - a;
			{
				if (m1 > 0)
					cout << m1 << " ������� ����� �������� � ������ ���������" << endl;
				else
					cout << m1 << " ������� ����� ���������� �� ������ ���������" << endl;
			}
			m2 = s - b;
			{
				if (m2 > 0)
					cout << m2 << " ������� ����� �������� � ������ ���������" << endl;
				else
					cout << m2 << " ������� ����� ���������� �� ������ ���������" << endl;
			}
			m3 = s - c;
			{
				if (m3 > 0)
					cout << m3 << " ������� ����� �������� � ������� ���������" << endl;
				else
					cout << m3 << " ������� ����� ���������� �� ������� ���������" << endl;
			}

		}
		else
			cout << " ������ �� �������� ";


	}
}