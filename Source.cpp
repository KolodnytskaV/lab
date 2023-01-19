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
	//ПІБ
	string studentFullName = "Студент 1";
	//Ідентифікатор студента/залікової книжки
	unsigned short int studentID = 1;
	//Вік учня
	unsigned short int studentAge = 22;
	//Поточний рік навчання 
	unsigned short int currentStudyYear = 1;
	//Чи навчається студент?
	bool isStuding = true;
	//Заклад освіти
	string university = "НПУ ім. Драгоманова";
	//Адреса учня
	string originAdress = "Чернігів, Україна";
	//Освітній ступінь
	string degree = "Магістратура";
	//Навчальна група
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
	cout << "ПІБ студента:\t\t" << studentFullName << endl;
	cout << "Група:\t\t\t" << group << endl;
	cout << "Номер залікової книжки:\t" << studentID << endl;
	cout << "Вік студента:\t\t" << studentAge << endl;
	cout << "Рік навчання:\t\t" << currentStudyYear << endl;
	cout << "Чи ще навчається:\t" << ((isStuding) ? "Так" : "Ні") << endl;
	cout << "Адреса:\t\t\t" << originAdress << endl;
	cout << "Заклад освіти: \t\t\t" << university << endl;
	cout << "Освітній ступінь:\t" << degree << endl;

	cout << "Загальний об'єм використаної пам'яті (в байтах):\t" << totalMemoryInBytes << endl;

}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	studentInformationModel();
	return 0;
}