#include<iostream>
#include<string>
using namespace std;
//������ 3. ���������
void func(char num) {
	int index=3;
	string q; 
	int res = 0;//������ � ���� �������� �����
	for (int i = 7; i >= 0; i--) {
		res += (num >> i & 1) * pow(10, i);
	}
	q=to_string(res);
	for (int i = q.size()-1; i >= 0; i--) {
	//	cout << q[i];
	cout<<"index "<<i<<" = " << q[i]<<endl;
	}
	cout << "\n";
	//cout << q[0] << " " << q[1] << " " << q[2] << " " << q[3] << " " << endl;
	for (int i = 0; i <=7; i++) {
		//cout << q[i];
		cout << "index " << i << " = " << q[i] << endl;
	}
	
	cout << "\n";
	

	
}
//������ 2. ���������� ���������� ������, ������� ���� � �������� ������������� ����������� �����
int foo(char num) {
	int count = 0;
	int res = 0;
	string str;
	for (int i = 7; i >= 0; i--) {
		res += (num >> i & 1) * pow(10, i);
	}
	str = to_string(res);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] =='1')
			count++;
	}
	return count;
	
}
int main() {
	setlocale(LC_ALL, "ru");
	system("title Home Work #32");
	//������ 1
	/*cout << "������ 1\n";
	unsigned int n;
	cout << "Enter number: ";
	cin >> n;
	n--;
	unsigned int res = 2 << n;
	cout << "2^" << n+1 << " = " << res << endl;

	//������ 2
	cout << "\n������ 2\n";
	cout << "������� ����� � ���������� ����: ";
	cin >> n;
	cout<<"���������� ������,������� ���� � �������� ������������� ����� "<<n<<" = " << foo(n);*/
	func(170);
	

	system("pause>null");
	return 0;
}