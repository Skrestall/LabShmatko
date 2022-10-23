#include <iostream>

void Lab2_1() {
    int one = 1;
    double n = 0, sum = 0;
    double  term = one * ((n + 1) / (n * n + 1));
    while (std::abs(term) >= 0.000001) {
        sum += term;
        if (n++ == 10)
            std::cout << "The sum of 10 members of the series: " << sum << std::endl;
        one = -one;
        term = one * ((n + 1) / (n * n + 1));
    }
    std::cout << "The total sum of the series: " << sum << std::endl;
}