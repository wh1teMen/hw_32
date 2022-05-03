#include<iostream>
#include<string>
using namespace std;

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
//Задача 3.
int BitIndex(char num,int index) {
	int res = 0;
	for (int i = 7; i >= 0; i--) {
		res += (num >> i & 1) * pow(10, i);
	}
	if(((num>> index) & 1) == 1)
	return 1;
	return 0;
}

int main() {
	setlocale(LC_ALL, "ru");
	system("title Home Work #32");
	//Задача 1
	cout << "Задача 1\n";
	unsigned int n;
	cout << "Enter number: ";
	cin >> n;
	n--;
	unsigned int res = 2 << n;
	cout << "2^" << n+1 << " = " << res << endl;
	//Задача 2
	cout << "Задача 2\n";
	cout << "Введите число в десятичном виде: ";
	cin >> n;
	cout<<"Количество единиц,которые есть в двоичном представлении числа "<<n<<" = " << foo(n);
	
	
	cout << "\nЗадача 3\n";
	int m;
	cout << "Введите число: ";
	cin >> m;
	cout << "Введите индекс: ";
	cin >> n;
	cout <<"Значение бита в двоичном представлении числа "<<m<<" на позиции "<<n<<" = "<<BitIndex(m, n) << endl;
	


	system("pause>null");
	return 0;
}