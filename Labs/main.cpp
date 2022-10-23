#include "LAB1/Lab1.cpp"
#include "LAB2/Lab2_1.cpp"
#include "LAB2/Lab2_2.cpp"
#include "LAB3/Lab3.cpp"
#include "LAB4/Lab4.cpp"



int main() {
    srand((unsigned)(time(NULL)));
    int select = 0;
    start:std::cout << "Select lab\n[1] Lab1\n[2] Lab2_1\n[3] Lab2_2\n[4] Lab3\n[5] Lab4\n[6]Exit";
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
            Lab3();
            break;
        case 5:
            Lab4();
            break;
        case 6:
            exit(EXIT_SUCCESS);
        default:
            std::cout << "Wrong choice\n";
    }
    goto start;
    return 0;
}
