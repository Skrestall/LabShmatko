#include <iostream>

void Lab2_2() {
    std::string name1 = "", name2 = "", name3 = "";
    double tem1 = 700, tem2 = 304, tem3 = 441, vis1 = 2.90, vis2 = 1.65, vis3 = 2.11;
    int num1 = 13, num2 = 83, num3 = 82;
    std::cout << "Enter first name, atomic number, temperature, Viscosity" << std::endl;
    std::cin >> name1 >> num1 >> tem1 >> vis1;
    std::cout << "Enter second name, atomic number, temperature, Viscosity" << std::endl;
    std::cin >> name2 >> num2 >> tem2 >> vis2;
    std::cout << "Enter third name, atomic number, temperature, Viscosity" << std::endl;
    std::cin >> name3 >> num3 >> tem3 >> vis3;
    std::cout << "____________________________________________________________________________\n";
    std::cout << "| Viscosity of metals in liquid state                                      |\n";
    std::cout << "|--------------------------------------------------------------------------|\n";
    std::cout << "| Substance | Atomic number | Temperature(degrees C) | Viscosity (kg/m*sec)|\n";
    std::cout << "|--------------------------------------------------------------------------|\n";
    printf("| %9s | %-13d | %-23.1f | %-18.2f |\n", name1.c_str(), num1, tem1, vis1);
    std::cout << "|--------------------------------------------------------------------------|\n";
    printf("| %9s | %-13d | %-23.1f | %-18.2f |\n", name2.c_str(), num2, tem2, vis2);
    std::cout << "|--------------------------------------------------------------------------|\n";
    printf("| %9s | %-13d | %-23.1f | %-18.2f |\n", name3.c_str(), num3, tem3, vis3);
    std::cout << "|--------------------------------------------------------------------------|\n";
    std::cout << "| Note: Data given is for melting point                                    |\n";
    std::cout << "|__________________________________________________________________________|\n";
}
