// Lab_03_4.cpp
// < Գ���� ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 12

#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ����.�����.
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R ="; cin >> R;

	// ������������ � ����� ����
	if (((x>=-R) && (x<=0) && (y>=0) && (y<=R) && (pow(x+R, 2) + pow(y-R, 2) != R*R)) ||
		((x>=0) && (x<=R) && (y<= 0) && (y>=-R) && (pow(x-R, 2) + pow(y+R, 2) != R * R)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}

