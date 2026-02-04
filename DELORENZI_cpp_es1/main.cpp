#include <iostream>
#include <vector>
#include <algorithm>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int numeri[10] = { 20, 50, -10, -40, 80, -30, 70, 55, 75, 5 };
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numeri[i] > numeri[j]) {
                swap(&numeri[i], &numeri[j]);
            }
        }
    }
    for (int i : numeri) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    if (numeri[0] < 0) {
        std::cout << "L'array contiene valori negativi" << std::endl;
    }
    else {
        std::cout << "L'array non contiene valori negativi" << std::endl;
    }
    std::vector<int> v;
    for (int i = 0; i < 10; i++) {
        if (numeri[i] % 10 == 0) {
            v.push_back(numeri[i]);
        }
    }
    std::cout << "Valori multipli di 10: ";
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}