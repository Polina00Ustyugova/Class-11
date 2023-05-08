#include "Pair.h"
#include "List.h"
#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");
	try
	{
		int n;
		cout << "Введите размер очереди: ";
		cin >> n;
		List<Pair> l(n);
		l.Print();
		Pair range_min, range_max, min_el, max_el;
		Pair el = l.average();
		l.add_list(el);
		cout << "Среднее арифметическое было добавлено очередь\n";
		l.Print();
		min_el = l.min();
		max_el = l.max();
		cout << "Увеличение всех элментов очереди на сумму минимального и максимального:\n";
		l.increase_elements(min_el, max_el);
		l.Print();
		cout << "Введите ключи пар:\nОТ\n";
		cin >> range_min;
		cout << "ДО\n";
		cin >> range_max;
		cout << "Очередь с удалёнными элементами:\n";
		l.remove_elements(range_min, range_max);
		l.Print();
	}
	catch (int)
	{
		cout << "Произошла ошибка!";
	}
	return 0;
}
