#include <iomanip>

int sign(int arg) { return arg >= 0 ? 1 : 0; }

void Lab3() {
    const int SIZE = 100;
    int array[SIZE];

    for (size_t i = 0; i < SIZE; i++) {
        array[i] = rand() % 100 - 50;
    }
    for (size_t i = 0; i < SIZE; i++) {
        if (i > 0 && i % 10 == 0) std::cout << std::endl;
        std::cout << std::setw(5) << "[" << i << "] " << array[i];
    }
    std::cout << std::endl << std::endl;

    for (size_t i = 0; i < SIZE; i++) {
        if (sign(array[i]) != sign(array[i + 1]) && sign(array[i + 1]) != sign(array[i + 2])) {
            for (size_t j = i; j < SIZE; j++) {
                if (sign(array[j]) != sign(array[j + 1]))
                    continue;
                else {
                    std::cout << "Start: " << i << "; end: " << j << std::endl;
                    i = j;
                    break;
                }
            }
        }
    }
}

