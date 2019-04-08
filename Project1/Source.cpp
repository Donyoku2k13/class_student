#include<iostream> 
#include<Windows.h> 

using namespace std;

class student
{
private:
	char *name;
	char surname[20];
public:
	student()
	{
		name = new char[15];
	}
	~student()
	{
		delete[] name;
	}

	void in()
	{
		cin >> name >> surname;
	}
	void print()
	{
		cout << name << " " << surname << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "");

	student s;

	int flag = 1;

	do
	{
		s.in();
		s.print();

		cout << "Continue?" << endl;
		cin >> flag;

		system("cls");

	} while (flag == 1);

	system("pause");
}