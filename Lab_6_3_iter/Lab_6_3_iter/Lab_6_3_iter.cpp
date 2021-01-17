#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

// Використовуючи прості функції

void Create(int* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
	}

}

void Print(int* a, const int size) {
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;  // виводить в стовпчик, оскільки функція рахує індекси, а в стовпі їх легше бачити.
	}
	cout << endl;
}

int Sum(int* a, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 != 0) {
			S += a[i]; // Обчислення суми непарних елементів
		}
	}
	return S;
}

// Використовуючи шаблони 

template <typename T>

void SCreate(T* a, const T size, const T Low, const T High) {
	for (T i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
	}

}

template <typename T>

void SPrint(T* a, const T size) {
	cout << endl;
	for (T i = 0; i < size; i++) {
		cout << "[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;  // виводить в стовпчик, оскільки функція рахує індекси, а в стовпі їх легше бачити.
	}
	cout << endl;
}

template <typename T>

int SSum(T* a, const T size) {
	int S = 0;
	for (T i = 0; i < size; i++)
	{
		if (a[i] % 2 != 0) {
			S += a[i]; // Обчислення суми непарних елементів
		}
	}
	return S;
}


int main() {

	srand((unsigned)time(NULL));

	const int n = 15;

	int Low, High;
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;

	int a[n];

	Create(a, n, Low, High); // Заповнюэ масив ранд. числами

	Print(a, n); // Виводить масив 

	cout << "Sum: " << Sum(a, n); // Рахує непарні числа з масиву

	SCreate(a, n, Low, High); 

	SPrint(a, n);

	cout << "Sum: " << SSum(a, n);


	return 0;
}