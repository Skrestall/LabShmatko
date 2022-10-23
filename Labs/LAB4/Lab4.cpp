void Lab4() {
    const int SIZE = 9;
    int arr[SIZE][SIZE], num = 1, kef = 0;

    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = SIZE - 1 - kef; j + 1 > 0 + kef; j--)
            arr[i][j] = num++;
        for (size_t j = 1 + kef; j < SIZE - kef; j++)
            arr[j][kef] = num++;
        for (size_t j = 1 + kef; j < SIZE - kef; j++)
            arr[8 - kef][j] = num++;
        for (size_t j = SIZE - 1 - kef; j + 1 > 1 + kef; j--)
            arr[j][8 - kef] = num++;
        kef++;
    }


    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = 0; j < SIZE; j++) {
            std::cout << std::setw(5) << arr[i][j];
        }
        std::cout << std::endl;
    }
}
