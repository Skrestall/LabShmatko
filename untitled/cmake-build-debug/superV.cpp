/*#include <iostream>
#include <string>

bool point(float x, float y) {
    return y <= std::abs(x) && y >= -std::abs(x) ? true : false;
}

int main() {
    char choice = '0';
    std::string _x = "", _y = "";
    while(true) {
        std::cout << "Choice operation\n[1] Enter (X, Y)\n[2] Check point\n[3] Exit\n";
        std::cin >> choice;
        switch (choice) {
            case '1':
                std::cout << "Enter (x):";
                std::cin >> _x;
                std::cout << "Enter (y):";
                std::cin >> _y;
                std::cout << "\nYour pair (" << _x << ", " << _y << ")\n\n";
                break;
            case '2':
                try {
                    if (point(std::stof(_x), std::stof(_y))) std::cout << "\nThe point falls into the shaded area\n\n";
                    else std::cout << "\nThe point don't falls into the shaded area\n\n";
                }
                catch(...){
                    std::cout << "Wrong numbers " << _x << " or " << _y << std::endl;
                }
                break;
            case '3':
                std::cout << "Exit\n";
                exit(EXIT_SUCCESS);
            default:
                std::cout << "Wrong choice\n";
        }
    }
    return 0;
}*/
