#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
// Прості функції
void Create(int* b, const int size, const int Low, const int High, int i) {
	b[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1) {
		Create(b, size, Low, High, i + 1);
	}
}


void Print(int* b, const int size, int i) {
	cout << setw(4) << b[i];
	if (i < size - 1) {
		Print(b, size, i + 1);
	}
	else {
		cout << endl;
	}
}


int Sum(int* b, const int size, int i, int S) {
	if (b[i] % 2 != 0) {
		S += b[i];
	}
	if (i < size - 1) {
		return Sum(b, size, i + 1, S);
	}
	else {
		return S;
	}
}

// З шаблонами 

template <typename T>
void SCreate(T* b, const T size, const T Low, const T High, T i) {
	b[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1) {
		Create(b, size, Low, High, i + 1);
	}
}

template <typename T>
void SPrint(T* b, const T size, T i) {
	cout << setw(4) << b[i];
	if (i < size - 1) {
		Print(b, size, i + 1);
	}
	else {
		cout << endl;
	}
}

template <typename T>
int SSum(T* b, const T size, T i, T S) {
	if (b[i] % 2 != 0) {
		S += b[i];
	}
	if (i < size - 1) {
		return Sum(b, size, i + 1, S);
	}
	else {
		return S;
	}
}


int main() {

	srand((unsigned)time(NULL));

	const int n = 23;
	int b[n];
	int Low = -25;
	int High = 80;

	Create(b, n, Low, High, 0);

	Print(b, n, 0);

	cout << "\nSum: " << Sum(b, n, 0, 0) << "\n" << endl;

	SCreate(b, n, Low, High, 0);

	SPrint(b, n, 0);

	cout << "\nSSum: " << Sum(b, n, 0, 0) << endl;

	return 0;
}