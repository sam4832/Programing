#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    cout << "���� ������ � C++:\n";
    
    cout << "���: char, ������: " << sizeof(char) << " ����, ��������: " 
         << (int)CHAR_MIN << " �� " << (int)CHAR_MAX << "\n";
    
    cout << "���: int, ������: " << sizeof(int) << " ����, ��������: " 
         << INT_MIN << " �� " << INT_MAX << "\n";
    
    cout << "���: double, ������: " << sizeof(double) << " ����, ��������: "
         << DBL_MIN << " �� " << DBL_MAX << "\n";
    
    cout << "���: bool, ������: " << sizeof(bool) << " ����, ��������: " 
         << 0 << " �� " << 1 << "\n";

    cout << "\n������ �������������� �������� � ������ ������:\n";
    int a = 5, b = 3;
    
    cout << "��������: " << a + b << "\n";
    cout << "���������: " << a - b << "\n";
    cout << "���������: " << a * b << "\n";
    cout << "������� (int): " << a / b << "\n";

    double c = 5.0, d = 3.0;
    cout << "������� (double): " << c / d << "\n";

    int x = 10;
    cout << "\n���������� x, ��������: " << x << "\n";
    x = 20;
    cout << "����� �������� ���������� x: " << x << "\n";

    int num1, num2;
    cout << "\n������� ��� ����� �����:\n";
    cout << "������ �����: ";
    cin >> num1;
    cout << "������ �����: ";
    cin >> num2;

    cout << "��������: " << num1 + num2 << "\n";
    cout << "���������: " << num1 - num2 << "\n";
    cout << "���������: " << num1 * num2 << "\n";
    
    if (num2 != 0) {
        cout << "������� (int): " << num1 / num2 << "\n";
        cout << "������� (double): " << (double)num1 / num2 << "\n";
    } else {
        cout << "������� �� ���� ����������.\n";
    }

    if (num2 != 0) {
        int result_int = num1 / num2;
        double result_double = (double)num1 / num2;
        cout << "\n��������� ������� � ���� int: " << result_int << "\n";
        cout << "��������� ������� � ���� double: " << result_double << "\n";
    }

    cout << "\n���� ��������� ������� ���������!\n";
    cout << "�� �������� ������� ������ � ������� CMake � ��������� �� GitHub/GitLab.\n";

    return 0;
}
