#include<Windows.h>
#include<iostream>
#include<string>
#include <iostream>
using namespace std; 

using std::string;
using std::cout;
using std::endl;

void studentInformationModel()
{
	//ϲ�
	string studentFullName = "������� 1";
	//������������� ��������/������� ������
	unsigned short int studentID = 1;
	//³� ����
	unsigned short int studentAge = 22;
	//�������� �� �������� 
	unsigned short int currentStudyYear = 1;
	//�� ��������� �������?
	bool isStuding = true;
	//������ �����
	string university = "��� ��. �����������";
	//������ ����
	string originAdress = "������, ������";
	//������ ������
	string degree = "�����������";
	//��������� �����
	string group = degree + to_string(currentStudyYear);

	unsigned int totalMemoryInBytes = sizeof(studentFullName) +
		sizeof(group) +
		sizeof(studentID) +
		sizeof(studentAge) +
		sizeof(currentStudyYear) +
		sizeof(isStuding) +
		sizeof(originAdress) +
		sizeof(university) +
		sizeof(degree);
	cout << "ϲ� ��������:\t\t" << studentFullName << endl;
	cout << "�����:\t\t\t" << group << endl;
	cout << "����� ������� ������:\t" << studentID << endl;
	cout << "³� ��������:\t\t" << studentAge << endl;
	cout << "г� ��������:\t\t" << currentStudyYear << endl;
	cout << "�� �� ���������:\t" << ((isStuding) ? "���" : "ͳ") << endl;
	cout << "������:\t\t\t" << originAdress << endl;
	cout << "������ �����: \t\t\t" << university << endl;
	cout << "������ ������:\t" << degree << endl;

	cout << "��������� ��'�� ����������� ���'�� (� ������):\t" << totalMemoryInBytes << endl;

}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	studentInformationModel();
	return 0;
}