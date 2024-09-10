#include <iostream>
#include <cmath> 
#include <string>

// Завдання 1
void task1() {
    int a, sum = 0;
    std::cout << "Завдання 1. Введіть число a: ";
    std::cin >> a;

    for (int i = a; i <= 500; ++i) {
        sum += i;
    }
    std::cout << "Сума від " << a << " до 500: " << sum << std::endl;
}

// Завдання 2
void task2() {
    int x, y;
    std::cout << "Завдання 2. Введіть два числа (x і y): ";
    std::cin >> x >> y;

    long long result = pow(x, y);
    std::cout << x << " у степені " << y << " = " << result << std::endl;
}

// Завдання 3
void task3() {
    int sum = 0;
    for (int i = 1; i <= 1000; ++i) {
        sum += i;
    }
    double average = sum / 1000.0;
    std::cout << "Завдання 3. Середнє арифметичне від 1 до 1000: " << average << std::endl;
}

// Завдання 4
void task4() {
    int a, product = 1;
    std::cout << "Завдання 4. Введіть число a (1 <= a <= 20): ";
    std::cin >> a;

    if (a < 1 || a > 20) {
        std::cout << "Невірне значення a." << std::endl;
        return;
    }

    for (int i = a; i <= 20; ++i) {
        product *= i;
    }
    std::cout << "Добуток чисел від " << a << " до 20: " << product << std::endl;
}

// Завдання 5
void task5() {
    int k;
    std::cout << "Завдання 5. Введіть номер варіанту (k): ";
    std::cin >> k;

    std::cout << "Таблиця множення на " << k << ":\n";
    for (int i = 2; i <= 10; ++i) {
        std::cout << k << " x " << i << " = " << k * i << std::endl;
    }
}

// Завдання 6
void task6() {
    int count = 0;
    for (int i = 100; i <= 999; ++i) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        if (hundreds == tens || tens == units || hundreds == units) {
            count++;
        }
    }
    std::cout << "Завдання 6. Кількість чисел з однаковими цифрами: " << count << std::endl;
}

// Завдання 7
void task7() {
    int count = 0;
    for (int i = 100; i <= 999; ++i) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        if (hundreds != tens && tens != units && hundreds != units) {
            count++;
        }
    }
    std::cout << "Завдання 7. Кількість чисел, у яких усі цифри різні: " << count << std::endl;
}

// Завдання 8
void task8() {
    int number;
    std::cout << "Завдання 8. Введіть ціле число: ";
    std::cin >> number;

    std::string result = "";
    while (number > 0) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            result = std::to_string(digit) + result;
        }
        number /= 10;
    }

    std::cout << "Число без 3 і 6: " << result << std::endl;
}

// Завдання 9
void task9() {
    int A;
    std::cout << "Завдання 9. Введіть число A: ";
    std::cin >> A;

    std::cout << "Числа B, що відповідають умовам: ";
    for (int B = 1; B * B <= A; ++B) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            std::cout << B << " ";
        }
    }
    std::cout << std::endl;
}

// Завдання 10
void task10() {
    int A, sum = 0;
    std::cout << "Завдання 10. Введіть число A: ";
    std::cin >> A;

    int temp = A;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (pow(sum, 3) == A * A) {
        std::cout << "Куб суми цифр дорівнює квадрату числа." << std::endl;
    }
    else {
        std::cout << "Куб суми цифр не дорівнює квадрату числа." << std::endl;
    }
}

// Завдання 11
void task11() {
    int A;
    std::cout << "Завдання 11. Введіть число A: ";
    std::cin >> A;

    std::cout << "Числа, на які A ділиться без залишку: ";
    for (int i = 1; i <= A; ++i) {
        if (A % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

// Завдання 12
void task12() {
    int x, y;
    std::cout << "Завдання 12. Введіть два числа: ";
    std::cin >> x >> y;

    std::cout << "Числа, на які обидва числа діляться без залишку: ";
    for (int i = 1; i <= std::min(x, y); ++i) {
        if (x % i == 0 && y % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int choice;

    do {
        std::cout << "\nМеню:\n";
        std::cout << "1. Сума від a до 500\n";
        std::cout << "2. Степінь числа\n";
        std::cout << "3. Середнє арифметичне від 1 до 1000\n";
        std::cout << "4. Добуток від a до 20\n";
        std::cout << "5. Таблиця множення\n";
        std::cout << "6. Кількість чисел з однаковими цифрами\n";
        std::cout << "7. Кількість чисел з різними цифрами\n";
        std::cout << "8. Видалити цифри 3 і 6\n";
        std::cout << "9. Ділення на B*B і не на B*B*B\n";
        std::cout << "10. Куб суми цифр\n";
        std::cout << "11. Ділення числа без залишку\n";
        std::cout << "12. Спільні дільники для двох чисел\n";
        std::cout << "0. Вихід\n";
        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
