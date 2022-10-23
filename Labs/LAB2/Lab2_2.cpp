#include <iostream>

void Lab2_2() {
    std::string name1 = "dsa", name2 = "sad", name3 = "sad";
    double tem1 = 0, tem2 = 0, tem3 = 0, vis1 = 0, vis2 = 0, vis3 = 0;
    int num1 = 0, num2 = 0, num3 = 0;
   // std::cout << "Enter first name, atomic number, temperature, Viscosity" << std::endl;
    //std::cin >> name1 >> num1 >> tem1 >> vis1;
    //std::cout << "Enter second name, atomic number, temperature, Viscosity" << std::endl;
    //std::cin >> name2 >> num2 >> tem2 >> vis2;
   // std::cout << "Enter third name, atomic number, temperature, Viscosity" << std::endl;
    //std::cin >> name3 >> num3 >> tem3 >> vis3;
    std::cout << "_____________________________________________________________________________\n";
    std::cout << "| Viscosity of metals in liquid state                                       |\n";
    std::cout << "|---------------------------------------------------------------------------|\n";
    std::cout << "|  Substance  | Atomic number | Temperature(degreesC) | Viscosity(kg/m*sec) |\n";
    std::cout << "|-------------|---------------|-----------------------|---------------------|\n";
    printf("| %11s | %-13d | %-21.1f | %-19.2f |\n", name1.c_str(), num1, tem1, vis1);
    std::cout << "|-------------|---------------|-----------------------|---------------------|\n";
    printf("| %11s | %-13d | %-21.1f | %-19.2f |\n", name2.c_str(), num2, tem2, vis2);
    std::cout << "|-------------|---------------|-----------------------|---------------------|\n";
    printf("| %11s | %-13d | %-21.1f | %-19.2f |\n", name3.c_str(), num3, tem3, vis3);
    std::cout << "|---------------------------------------------------------------------------|\n";
    std::cout << "| Note: Data given is for melting point                                     |\n";
    std::cout << "|___________________________________________________________________________|\n";
}