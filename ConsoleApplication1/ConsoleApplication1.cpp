#include <iostream>
#include <cmath> 
#include <string>

// �������� 1
void task1() {
    int a, sum = 0;
    std::cout << "�������� 1. ������ ����� a: ";
    std::cin >> a;

    for (int i = a; i <= 500; ++i) {
        sum += i;
    }
    std::cout << "���� �� " << a << " �� 500: " << sum << std::endl;
}

// �������� 2
void task2() {
    int x, y;
    std::cout << "�������� 2. ������ ��� ����� (x � y): ";
    std::cin >> x >> y;

    long long result = pow(x, y);
    std::cout << x << " � ������ " << y << " = " << result << std::endl;
}

// �������� 3
void task3() {
    int sum = 0;
    for (int i = 1; i <= 1000; ++i) {
        sum += i;
    }
    double average = sum / 1000.0;
    std::cout << "�������� 3. ������ ����������� �� 1 �� 1000: " << average << std::endl;
}

// �������� 4
void task4() {
    int a, product = 1;
    std::cout << "�������� 4. ������ ����� a (1 <= a <= 20): ";
    std::cin >> a;

    if (a < 1 || a > 20) {
        std::cout << "������ �������� a." << std::endl;
        return;
    }

    for (int i = a; i <= 20; ++i) {
        product *= i;
    }
    std::cout << "������� ����� �� " << a << " �� 20: " << product << std::endl;
}

// �������� 5
void task5() {
    int k;
    std::cout << "�������� 5. ������ ����� ������� (k): ";
    std::cin >> k;

    std::cout << "������� �������� �� " << k << ":\n";
    for (int i = 2; i <= 10; ++i) {
        std::cout << k << " x " << i << " = " << k * i << std::endl;
    }
}

// �������� 6
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
    std::cout << "�������� 6. ʳ������ ����� � ���������� �������: " << count << std::endl;
}

// �������� 7
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
    std::cout << "�������� 7. ʳ������ �����, � ���� �� ����� ���: " << count << std::endl;
}

// �������� 8
void task8() {
    int number;
    std::cout << "�������� 8. ������ ���� �����: ";
    std::cin >> number;

    std::string result = "";
    while (number > 0) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            result = std::to_string(digit) + result;
        }
        number /= 10;
    }

    std::cout << "����� ��� 3 � 6: " << result << std::endl;
}

// �������� 9
void task9() {
    int A;
    std::cout << "�������� 9. ������ ����� A: ";
    std::cin >> A;

    std::cout << "����� B, �� ���������� ������: ";
    for (int B = 1; B * B <= A; ++B) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            std::cout << B << " ";
        }
    }
    std::cout << std::endl;
}

// �������� 10
void task10() {
    int A, sum = 0;
    std::cout << "�������� 10. ������ ����� A: ";
    std::cin >> A;

    int temp = A;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (pow(sum, 3) == A * A) {
        std::cout << "��� ���� ���� ������� �������� �����." << std::endl;
    }
    else {
        std::cout << "��� ���� ���� �� ������� �������� �����." << std::endl;
    }
}

// �������� 11
void task11() {
    int A;
    std::cout << "�������� 11. ������ ����� A: ";
    std::cin >> A;

    std::cout << "�����, �� �� A ������� ��� �������: ";
    for (int i = 1; i <= A; ++i) {
        if (A % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

// �������� 12
void task12() {
    int x, y;
    std::cout << "�������� 12. ������ ��� �����: ";
    std::cin >> x >> y;

    std::cout << "�����, �� �� ������ ����� ������� ��� �������: ";
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
        std::cout << "\n����:\n";
        std::cout << "1. ���� �� a �� 500\n";
        std::cout << "2. ������ �����\n";
        std::cout << "3. ������ ����������� �� 1 �� 1000\n";
        std::cout << "4. ������� �� a �� 20\n";
        std::cout << "5. ������� ��������\n";
        std::cout << "6. ʳ������ ����� � ���������� �������\n";
        std::cout << "7. ʳ������ ����� � ������ �������\n";
        std::cout << "8. �������� ����� 3 � 6\n";
        std::cout << "9. ĳ����� �� B*B � �� �� B*B*B\n";
        std::cout << "10. ��� ���� ����\n";
        std::cout << "11. ĳ����� ����� ��� �������\n";
        std::cout << "12. ����� ������� ��� ���� �����\n";
        std::cout << "0. �����\n";
        std::cout << "��� ����: ";
        std::cin >> choice;

        switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
