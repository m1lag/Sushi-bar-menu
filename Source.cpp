#include <iostream>

using namespace std;

class Fraction
{
	int m_denominator;
	int m_numerator;

public:
	Fraction()
	:	m_denominator(1),
		m_numerator(1)
	{
	}


	Fraction(int numerator, int denominator)
		: m_numerator(numerator),
		m_denominator(denominator)
	{
		if (m_denominator == 0)
		{
			cout << "nu kuda 0???" << endl;
			m_denominator = 1;
		}
	};

	void fillingInTheFraction()
	{
		cout << "Numerator: ";
		cin >> m_numerator;
		cout << "Denominator: ";
		cin >> m_denominator;

		if (m_denominator == 0)
		{
			cout << "nu kuda 0???" << endl;
			m_denominator = 1;
		}
	}

	void print() const
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}

	Fraction add(const Fraction& element) const
	{
		int numerator1 = m_numerator * element.m_denominator + element.m_numerator * m_denominator;
		int denominator1 = m_denominator * element.m_denominator;
		return Fraction(numerator1, denominator1);
	}

	Fraction subtract(const Fraction& element) const
	{
		int numerator1 = m_numerator * element.m_denominator - element.m_numerator * m_denominator;
		int denominator1 = m_denominator * element.m_denominator;
		return Fraction(numerator1, denominator1);
	}

	Fraction multipy(const Fraction& element) const
	{
		int numerator1 = m_numerator * element.m_numerator;
		int denominator1 = m_denominator * element.m_denominator;
		return Fraction(numerator1, denominator1);
	}

	Fraction division(const Fraction& element) const
	{
		int numerator1 = m_numerator * m_denominator;
		int denominator1 = m_denominator * element.m_numerator;
		return Fraction(numerator1, denominator1);
	}
};



int main() {
	Fraction drib1, drib2, res;
	char symbol;

	cout << "Fraction:" << endl;
	drib1.fillingInTheFraction();
	cout << "Fraction:" << endl;
	drib2.fillingInTheFraction();

	for (;;) {
		cout << "Please symbol: ";
		cin >> symbol;

		if (symbol == '+') {
			res = drib1.add(drib2);
			cout << "Add: ";
			res.print();
		}
		else if (symbol == '-') {
			res = drib1.subtract(drib2);
			cout << "Subtract: ";
			res.print();
		}
		else if (symbol == '*') {
			res = drib1.multipy(drib2);
			cout << "Multiply: ";
			res.print();
		}
		else if (symbol == '/') {
			res = drib1.division(drib2);
			cout << "Division: ";
			res.print();
		}
		else {
			cout << "nu vse, cho skazat, error, invalid user i tp" << endl;
		}
	}

	return 0;
}
