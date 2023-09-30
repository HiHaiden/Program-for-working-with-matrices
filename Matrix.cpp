#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int v, w, i, j, q, l, t;
	while (true)
	{
		cout << "Введите размер строк матрицы от 1 до 10: " << endl;
		cin >> v;
		cout << "Введите размер столбцов матрицы от 1 до 10: " << endl;
		cin >> w;
		if ((v > 0) && (v <= 10) && (w > 0) && (w <= 10)) break;
		cout << "Неверный размер матрицы, попытайтесь снова." << endl;
	}
	int **O = new int* [v];
	for (i = 0; i < v; i++)
	{
		O[i] = new int[w];
	}
	for (i = 0; i < v; i++)
	{
		cout << "Вводим " << i + 1 << " строку\n";
		for (j = 0; j < w; j++)
		{
			cout << "Введите числа матрицы по порядку: " << endl;
			cin >> O[i][j];
		}
	}
	if (true)
	{
		cout << "Матрица: " << endl;
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < w; j++)
			{
				cout << O[i][j] << "\t";
			}
			cout << "\n" << endl;
		}
	}
	if (v >= 2)
	{
		while (true)
		{
			cout << "Какой порядковый элемент второй строки вывести?: ";
			cin >> q;
			if ((q > 0) && (q <= v)) break;
			cout << "Такого нет, попытайтесь заново." << endl;
		}
		for (i = 1; i == 1; i++)
		{
			cout << "Элемент:" << endl;
			for (j = (q - 1); j == (q - 1); j++)
			{
				cout << O[i][j] << "\t";
			}
			cout << "\n" << endl;
		}
	}
	while (true)
	{
		cout << "Выведем любой элемент матрицы.\nКакая строка у элемента?: ";
		cin >> l;
		cout << "Какой столбец у элемента?: ";
		cin >> t;
		if ((l > 0) && (l <= v) && (t > 0) && (t <= w)) break;
		cout << "Такого нет, попытайтесь заново." << endl;
	}
	for (i = l-1; i == l-1; i++)
	{
		cout << "Элемент:" << endl;
		for (j = t-1; j == t-1; j++)
		{
			cout << O[i][j] << "\t";
		}
		cout << "\n" << endl;
	}
		for (i = 0; i < v; i++)
		{
			delete[] O[i];
		}
	delete [] O;
	system("pause");
	return 0;
}