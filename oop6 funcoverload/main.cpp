#include "oop6 funcoverload.h"
#include <iostream>
using namespace std;

int main()
{
    bool f;
    int N;
    cout << "Enter type of your array; 0 if int, 1 if double: ";
    cin >> f;

    if (f) {
        cout << "Enter array size: ";
        cin >> N;
        double* doublemass = new double[N];
        ToFillDouble(doublemass, N);
        doublemass = Sort(doublemass, N);
        PrintDouble(doublemass, N);
    }

    else {
        cout << "Enter array size: ";
        cin >> N;
        int* intmass = new int[N];
        ToFillInt(intmass, N);
        intmass = Sort(intmass, N);
        PrintInt(intmass, N);
    }
}