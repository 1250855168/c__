//
// Created by CHENMENG on 2022/11/9.
//

#include <iostream>

const int SIZE = 5;
using namespace std;

template<class T>
class Array {
private:
    T a[SIZE];
public:
    Array() {
        for (int i = 0; i < SIZE; i++) {
            a[i] = 0;
        }
    }

    T &operator[](int i);

    void Sort();
};

template<class T>
T &Array<T>::operator[](int i) {
    return a[i];
}

template<class T>
void Array<T>::Sort() {
    for (int i = 0; i < SIZE; ++i) {
        int t = i;
        for (int j = 0; j < SIZE; ++j) {
            if (a[t] < a[j]) {
                t = j;
            }
            if (t != i) {
                auto temp = a[t];
                a[t] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main() {
    Array<int> A;
    for (int i = 0; i < SIZE; ++i) {
        A[i] = i;
    }
    for (int i = 0; i < SIZE; ++i) {
        cout << A[i] << endl;
    }
    A[0] = 9;
    A.Sort();
    for (int i = 0; i < SIZE; ++i) {
        cout << A[i] << endl;
    }

    return 0;
}