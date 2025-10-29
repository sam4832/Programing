#include <iostream>
#include <cmath> // ��� ������� pow (���������� � �������)

using namespace std;

int main() {
    int goldCoins, silverCoins, totalMoney, itemCount;
    
    // ���� ������
    cout << "������� ���������� ������� �����: ";
    cin >> goldCoins;
    cout << "������� ���������� ���������� �����: ";
    cin >> silverCoins;

    // ��������� ��� ������ � ���������� ������
    totalMoney = goldCoins * 100 + silverCoins;
    cout << "����� ���������� ����� � ����������: " << totalMoney << " ���������� �����.\n";

    // ������ ���������� ������������� �������
    cout << "������� ���������� ������������� ������� (������� ����): ";
    cin >> itemCount;

    // ���� ������ ������
    int itemPrice = 50; // 50 ���������� �����

    // ������������, ������� ������� ����� ������
    int totalItemsPurchased = totalMoney / itemPrice;

    // ���������� ������ � ����������
    int remainingMoney = totalMoney - totalItemsPurchased * itemPrice;

    // ���������� ���������� ������� �� ��������
    int remainingItems = 10 - totalItemsPurchased;

    // ���������� ������ � ����������
    int itemsAtBuyer = totalItemsPurchased;

    // ������� ����������
    cout << "���������� ������ � ����������: " << remainingMoney << " ���������� �����.\n";
    cout << "���������� ���������� ������ �� ��������: " << remainingItems << " ������� ����.\n";
    cout << "���������� ������ � ����������: " << itemsAtBuyer << " ������� ����.\n";

    // ������� 1: �������� � ������� ���������� ������
    int squaredItems = (int)pow(itemsAtBuyer, 2);
    cout << "���������� ������ � ��������: " << squaredItems << "\n";

    // ������� 2: ������� ���������� ������ ����� ������
    int reversedMoney = 0;
    while (remainingMoney != 0) {
        reversedMoney = reversedMoney * 10 + remainingMoney % 10;
        remainingMoney /= 10;
    }
    cout << "���������� ������ � ���������� ����� �������: " << reversedMoney << " ���������� �����.\n";

    return 0;
}
