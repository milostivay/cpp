#include <iostream>

int main() {
    std::cout << "napishi dva chisla";
    int a,b;
    std::cin >> a;
    std::cin >> b;

    std::cout << "delenie celoy"<<"\t";
    std::cout << a/b <<"\n";
    std::cout << "ostatoc "<<"\t";//�� ��� �������� ����� ������� �������� 10/6 �� �� 10 ��������� 4 � �� �������� ������� 4, ���� 10/3 �� ����� 3 � ������� 1
    std::cout << a %b <<"\n";

    return 0;
}
