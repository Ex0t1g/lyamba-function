#include <iostream>
#include <string>
using namespace std;
//�������� ���� ������ - �������, �����������
//��� ��������� - ������ � ������ ��������.
//�� �������� ������� :
//
//******************************
//**
//*������������� *
//*��������� ���������� *
//**
//******************************
//
//(��� ����� �� ������� ����������
//    ��� ����������� �����������)
//    ����� ����������, ������� ��������
//    ����������.
int main()
{
        int tableCount = 0; 

        auto printTable = [&tableCount](int width, int height) {
            string name = "��������� ����������";
            string horizontalLine(width, '*');
            string emptyLine(width - 2, ' ');

            cout << horizontalLine << endl;
            for (int i = 0; i < height - 2; i++) {
                if (i == (height - 2) / 2) {
                    cout << "*" << emptyLine.insert((width - 2) / 2, name) << "*" << endl;
                }
                else {
                    cout << "*" << emptyLine << "*" << endl;
                }
            }
            cout << horizontalLine << endl;

            tableCount++;
            };

        printTable(30, 6);
        cout << "���������� ������������ ��������: " << tableCount << endl;

	return 0;

}