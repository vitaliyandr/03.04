#include <iostream>

// Ініціалізація квадратної матриці типу int
void initializeMatrix(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = 0;
        }
    }
}

// Ініціалізація квадратної матриці типу double
void initializeMatrix(double matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = 0.0;
        }
    }
}

// Ініціалізація квадратної матриці типу char
void initializeMatrix(char matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = '-';
        }
    }
}

// Вивід квадратної матриці типу int на екран
void printMatrix(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Вивід квадратної матриці типу double на екран
void printMatrix(double matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Вивід квадратної матриці типу char на екран
void printMatrix(char matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Знаходження максимального елемента на головній діагоналі квадратної матриці типу int
int maxDiagonalElement(int matrix[][10], int size) {
    int max = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }
    return max;
}

// Знаходження максимального елемента на головній діагоналі квадратної матриці типу double
double maxDiagonalElement(double matrix[][10], int size) {
    double max = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }
    return max;
}

// Знаходження максимального елемента на головній діагоналі квадратної матриці типу char
char maxDiagonalElement(char matrix[][10], int size) {
    char max = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
    }
    return max;
}

// Знаходження мінімального елемента на головній діагоналі квадратної матриці типу int
int minDiagonalElement(int matrix[][10], int size) {
    int min = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }
    return min;
}

// Знаходження мінімального елемента на головній діагоналі квадратної матриці типу double
double minDiagonalElement(double matrix[][10], int size) {
    double min = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }
    return min;
}

// Знаходження мінімального елемента на головній діагоналі квадратної матриці типу char
char minDiagonalElement(char matrix[][10], int size) {
    char min = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }
    return min;
}

int main() {
    int intMatrix[10][10];
    double doubleMatrix[10][10];
    char charMatrix[10][10];

    // Ініціалізація матриць
    initializeMatrix(intMatrix, 3);
    initializeMatrix(doubleMatrix, 3);
    initializeMatrix(charMatrix, 3);

    // Вивід матриць на екран
    std::cout << "Int matrix:\n";
    printMatrix(intMatrix, 3);
    std::cout << "Double matrix:\n";
    printMatrix(doubleMatrix, 3);
    std::cout << "Char matrix:\n";
    printMatrix(charMatrix, 3);

    // Заповнення матриць
    intMatrix[0][0] = 1;
    intMatrix[1][1] = 2;
    intMatrix[2][2] = 3;
    doubleMatrix[0][0] = 1.1;
    doubleMatrix[1][1] = 2.2;
    doubleMatrix[2][2] = 3.3;
    charMatrix[0][0] = 'a';
    charMatrix[1][1] = 'b';
    charMatrix[2][2] = 'c';
    // Знаходження максимального й мінімального елемента на головній діагоналі матриць
    std::cout << "Max diagonal element of int matrix: " << maxDiagonalElement(intMatrix, 3) << std::endl;
    std::cout << "Min diagonal element of int matrix: " << minDiagonalElement(intMatrix, 3) << std::endl;
    std::cout << "Max diagonal element of double matrix: " << maxDiagonalElement(doubleMatrix, 3) << std::endl;
    std::cout << "Min diagonal element of double matrix: " << minDiagonalElement(doubleMatrix, 3) << std::endl;
    std::cout << "Max diagonal element of char matrix: " << maxDiagonalElement(charMatrix, 3) << std::endl;
    std::cout << "Min diagonal element of char matrix: " << minDiagonalElement(charMatrix, 3) << std::endl;

    return 0;
}
