#include "Labwork1/Lab1.cpp"
#include "Labwork2_1/Lab2_1.cpp"
#include "Labwork2_2/Lab2_2.cpp"

int main() {
    int select = 0;
    start:std::cout << "Select lab\n[1] Lab1\n[2] Lab2_1\n[3] Lab2_2\n";
    std::cin >> select;
    switch(select){
        case 1:
            Lab1();
            break;
        case 2:
            Lab2_1();
            break;
        case 3:
            Lab2_2();
            break;
        case 4:
            exit(EXIT_SUCCESS);
        default:
            std::cout << "Wrong choice\n";
    }
    goto start;
    return 0;
}
