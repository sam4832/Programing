#include <iostream>
using namespace std;

int main() {
    int goldCoins, silverCoins;
    int productNumber, quantity;
    
    // ���� �������
    const int waterPrice = 50, breadPrice = 120, applePrice = 30;
    const int waterStock = 10, breadStock = 5, appleStock = 20;
    
    int totalMoney; // ����� ���������� ����� � ����������
    int remainingWater = waterStock, remainingBread = breadStock, remainingApple = appleStock;
    int buyerWater = 0, buyerBread = 0, buyerApple = 0; // ������ � ����������

    // ���� ������
    cout << "������� ���������� ������� �����: ";
    cin >> goldCoins;
    cout << "������� ���������� ���������� �����: ";
    cin >> silverCoins;

    totalMoney = goldCoins * 100 + silverCoins; // ��������� ��� � �������
    cout << "���� ������: " << totalMoney << " �������.\n";
    
    cout << "������� ����� ������ (1 - ����, 2 - ����, 3 - ������): ";
    cin >> productNumber;

    // �������� �� ������������ ������ ������
    if (productNumber < 1 || productNumber > 3) {
        cout << "������: �������� ����� ������.\n";
        return 0; // ����� �� ��������� ��� ������������ ������
    }

    cout << "������� ���������� ������: ";
    cin >> quantity;

    // �������� �� ������������� ���������� ������
    if (quantity <= 0) {
        cout << "������: ���������� ������ �� ����� ���� ������������� ��� ������ ����.\n";
        return 0;
    }

    int pricePerItem = 0;
    int stock = 0;
    
    // ����� ������ �� ������
    switch (productNumber) {
        case 1:
            pricePerItem = waterPrice;
            stock = remainingWater;
            break;
        case 2:
            pricePerItem = breadPrice;
            stock = remainingBread;
            break;
        case 3:
            pricePerItem = applePrice;
            stock = remainingApple;
            break;
    }

    // �������� ������� ������ � ������ ����������
    if (quantity > stock) {
        cout << "������: ������������ ������ � ��������.\n";
        return 0;
    }

    // ��������, ������� �� �����
    if (totalMoney < pricePerItem * quantity) {
        cout << "������: ������������ �������.\n";
        return 0;
    }

    // ��������� ������ � ������� ���������� � �������
    totalMoney -= pricePerItem * quantity;

    // ���������� ��������� �������� ��� ���������� ���������� ������ � ���������� � � ��������
    (productNumber == 1) ? buyerWater += quantity, remainingWater -= quantity : 
    (productNumber == 2) ? buyerBread += quantity, remainingBread -= quantity : 
    (productNumber == 3) ? buyerApple += quantity, remainingApple -= quantity : 0;

    // ������� ���������� � ��������
    cout << "������� �������!\n";
    cout << "���������� ������ � ����������: " << totalMoney << " �������.\n";
    cout << "���������� ����� � ��������:\n";
    cout << "����: " << remainingWater << " ��.\n";
    cout << "����: " << remainingBread << " ��.\n";
    cout << "������: " << remainingApple << " ��.\n";
    
    cout << "������ � ����������:\n";
    cout << "����: " << buyerWater << " ��.\n";
    cout << "����: " << buyerBread << " ��.\n";
    cout << "������: " << buyerApple << " ��.\n";

    return 0;
}
