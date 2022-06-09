#include "oop6 funcoverload.h"
#include <iostream>
using namespace std;

void ToFillDouble(double* m, int N) {
	for (int i = 0; i < N; i++) {
		cout << "Enter " << i + 1 << " cell value: ";
		cin >> m[i];
	}
}

void ToFillInt(int* m, int N) {
	for (int i = 0; i < N; i++) {
		cout << "Enter " << i + 1 << " cell value: ";
		cin >> m[i];
	}
}

int* Sort(int* m, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (m[j] > m[j + 1]) {
				swap(m[j], m[j + 1]);
			}
		}
	}
	return m;
}

double* Sort(double* m, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (m[j] > m[j + 1]) {
				swap(m[j], m[j + 1]);
			}
		}
	}
	return m;
}

void PrintInt(int* m, int N) {
	cout << "Your sorted array:" << endl;
	for (int i = 0; i < N; i++) {
		cout << m[i] << "; ";
	}
	cout << endl;
}

void PrintDouble(double* m, int N) {
	cout << "Your sorted array:" << endl;
	for (int i = 0; i < N; i++) {
		cout << m[i] << "; ";
	}
	cout << endl;
}