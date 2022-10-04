#include <iostream>

int main() {
    int choice = 0;
    float x = 0, y = 0;
    start:std::cout << "Choice operation\n[1] Enter (X, Y)\n[2] Check point\n[3] Exit\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Enter (x):";
            std::cin >> x;
            std::cout << "Enter (y):";
            std::cin >> y;
            std::cout << "\nYour pair (" << x << ", " << y << ")\n\n";
            break;
        case 2:
            y <= std::abs(x) && y >= -std::abs(x) ? std::cout << "\nThe point falls into the shaded area\n\n"
            : std::cout << "\nThe point don't falls into the shaded area\n\n";
            break;
        case 3:
            std::cout << "Exit\n";
            exit(EXIT_SUCCESS);
        default:
            std::cout << "Wrong choice\n";
    }
    goto start;

}
