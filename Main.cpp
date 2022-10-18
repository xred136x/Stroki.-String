// шаблон
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>// библиотека позволяющая работать с классом string(со строковыми переменными)
using namespace std;

string repead_str(string str, int num) {
	string tmp;
	for (int i = 0; i < num; i++)
		tmp += str;
	return tmp;

}

bool is_spam(string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	string spams[3]{
		"100% free",
		"sales increase",
		"only today"
	};
	for (int i = 0; i < 3; i++)
		if (str.find(spams[i]) < str.length())
			return true;

	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// строковые массивы

	/*char char_str[4]{'H', 'i', '!', '\0'};
	for (int i = 0; i < 4; i++)
		cout << char_str[i];
	cout << '\n';
	cout << char_str << '\n';

	char char_str2[]{ "Hello world!" };//char_str2[] = "Hello world!" то же самое
	cout << char_str2 << '\n';
	cout << char_str2[4] << '\n';// на экране o*/

	/*string str;// std::/ создание строковой переменной типа стринг
	cout << str << '\n';// пустая строка если не инициализировать
	str = "Hello world!";
	cout << str << '\n';// Hello world!

	// Конкатинация строк

	str += "Bye world!";
	cout << "-----------\n";
	cout << str + "WOW!" << '\n';*/
	// ввод строки
	/*string name;
	cout << "введите имя: ";
	//cin >> name;// ввод до ближайшего разделителя
	getline(cin, name);// std::
	cout << "Привет, " << name << "!\n";
	cout << "введите возраст: ";
	short age;
	cin >>age;
	cout << age << "? Bay!\n";
	cin.ignore();// очистка потока input stream
	cout << "Введите должность: ";
	string pos;
	getline(cin, pos);
	cout << "всегда мечтал быть " << pos << '\n';

	cout << "Пока, мистер " << name[0] << '\n';
	name = "Hello\nworld!";
	cout << name;*/
	// методы строк

	string str = "Hello world!";

	// Метод length и size . Возвращают длину строки

	/*cout << str.length() << '\n';
	cout << str.size() << '\n';*/

	// Метод insert . Вставка содержимого внутрь строки

	/*str.insert(3, "000");
	cout << str << '\n';*/
	 
	// Метод replace. Замена части строки новым содержимым

	/*str.replace(3, 5, "123");
	cout << str;*/

	// Метод find. Поиск первого вхождения строки в строку

	/*cout << str.find("o") << '\n';
	cout << str.find("lo") << '\n';
	cout << str.find("l", 5) << '\n';*/

	// Метод rfind .Поиск последнего вхождения подстроки в строку

	/*cout << str.rfind("o") << '\n';// 7
	cout << str.rfind("wo") << '\n';// 6
	cout << str.rfind("l", 5) << '\n';// 3*/

	// Метод substr.

	/*cout << str.substr(3) << '\n';// возвращает подстроку начинающуюся с 3 позиции
	cout << str.substr(3, 5) << '\n';// 5 символов с 3 позиции*/

	// Преобразование числа в строку

	/*cout << "введите число: ";
	cin >> n;
	n++;
	str = to_string(n);
	cout << str + '\n';*/

	// строка в число

	/*cout << "введите число: ";
	getline(cin, str);
	int num = stoi(str);
	num++;
	cout << num << '\n';*/

	// Работа с регистром

	/*//str = toupprer(str);
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	cout << str << '\n';// HELLO WORLD!

	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	cout << str << '\n';// hello world!*/

	// Задача 1. повторение строки

	/*cout << "введите строку: ";
	getline(cin, str);
	cout << repead_str(str, 5) << '\n';*/

	// Задача 3 . проверка спама

	cout << "введите сообщение: ";
	getline(cin, str);
	if (is_spam(str))
		cout << "обнаружен спам\n";
	else
		cout << "спама не обнаружено\n";
	return 0;
}