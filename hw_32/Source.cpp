#include<iostream>
#include<string>
using namespace std;
//Задача 3. невенрная
void func(char num) {
	int index=3;
	string q; 
	int res = 0;//хранит в себе двоичное число
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
//Задача 2. Возвращает количество единиц, которые есть в двоичном представлении переданного числа
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
	//Задача 1
	/*cout << "Задача 1\n";
	unsigned int n;
	cout << "Enter number: ";
	cin >> n;
	n--;
	unsigned int res = 2 << n;
	cout << "2^" << n+1 << " = " << res << endl;

	//Задача 2
	cout << "\nЗадача 2\n";
	cout << "Введите число в десятичном виде: ";
	cin >> n;
	cout<<"Количество единиц,которые есть в двоичном представлении числа "<<n<<" = " << foo(n);*/
	func(170);
	

	system("pause>null");
	return 0;
}