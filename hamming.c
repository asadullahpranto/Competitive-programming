#include <stdio.h>
#include <stdlib.h>
# include <math.h>
# include <string.h>
#include <ctype.h>
#include <conio.h>

#define N 1000

int isPowOfTwo(int); // Является ли число степенью двойки.
void mainMenu(); // Вывод главного меню.

int main(int argc, char **argv)
{
	mainMenu(); // Вывод главного меню.
	char user = '1'; // Индекс выбранного элемента меню.

	while (1)
	{
		scanf("%c", &user);
		int count = 0; // Количество лишних символов.
		while (getchar()!='\n') count++;

		while (!isdigit(user) || user - '0' < 1 || user - '0' > 3 || count > 0) // Пункт меню выбран некорректно.
		{
			printf("\nERROR: Item is incorrect.\nSelect an item: ");
			scanf("%c", &user);
			count = 0;
			while (getchar()!='\n') count++;
		}

		switch (user - '0') // Обработка пунктов меню.
		{
			case 1: // Генерация кода Хэмминга.
				puts("-------------------------");
				puts(" Hamming Code Simulation");
				puts("-------------------------");
				printf("Input a word: ");

				char data[N]; // Входные данные.
				gets(data);

				int j = 0;	// Основной счетчик.
				int correct = 1; // Флаг корректности введенных данных (0 - имеется ошибка, 1 - данные корректны).

				while (j < strlen(data) && correct) // Проверка корректности введенных данных (может быть только 0/1).
				{
					if (!isdigit(data[j]) || (data[j] - '0' != 0 && data[j] - '0' != 1)) correct = 0;
					j++;
				}

				if (strlen(data) == 0) correct = 0;

				while (!correct) // Обработка ввода некорректных данных.
				{
					printf("\nERROR: Incorrect word.\n");
					printf("Input a word: ");
					gets(data);

					j = 0;
					correct = 1;

					while (j < strlen(data) && correct) // Проверка корректности введенных данных (может быть только 0/1).
					{
						if (!isdigit(data[j]) || (data[j] - '0' != 0 && data[j] - '0' != 1)) correct = 0;
						j++;
					}

					if (strlen(data) == 0) correct = 0;
				}

				int i = strlen(data); // Число информационных разрядов.
				int r = 0; // Число проверочных разрядов.
				while (pow(2, r) < r + i + 1) r++;
				int n = i + r; // Общее число разрядов.

				int *res = (int *)malloc(n*sizeof(int)); // Результирующее кодовое слово.

				int jData = 0; // Счетчик для прохода по массиву исходных данных.

				// Первичное заполнение данными результирующего массива.
				j = 0;
				while (j < n)
				{
					if (isPowOfTwo(j+1)) res[j] = 0; // Заполнение проверочных разрядов нулями.
					else // Перенос информационных разрядов в результирующий код.
					{
						res[j] = data[jData] - '0';
						jData++;
					}
					j++;
				}

				// Расчет значений проверочных разрядов.
				int num = 1; // Номер проверочного разряда.
				for (j=0; j<n; j++)
				{
					if (isPowOfTwo(j+1)) // Если текущий бит - проверочный.
					{
						int sum = 0; // Сумма бит, контролируемых этим проверочным разрядом.
						int k;
						for (k = j; k < n; k += pow(2, num)) // Вычисление суммы.
						{
							int q;
							for (q = k; q < n && q < k + pow(2, num-1); q++)
								sum = sum + res[q];
						}
						res[j] = sum % 2;
						num++;
					}
				}

				// Вывод результата работы алгоритма.
				printf("Hamming code: ");
				for (j=0; j<n; j++)
					printf("%d", res[j]);
				printf("\n");

				// Генерация ошибки в коде Хэмминга.
				int err = 0;
				printf("\nInput the index of error: ");
				scanf("%d", &err);

				count = 0;
				while (getchar()!='\n');

				while (err < 0 || err >= n)
				{
					printf ("ERROR: The index must be included in the interval [%d; %d].\n", 0, n-1);
					printf("Input the index of error: ");
					scanf("%d", &err);
					while (getchar()!='\n');
				}

				if (res[err]) res[err] = 0; else res[err] = 1; // Генерация ошибки в коде.

				printf("\nIncorrect code: ");
				for (j=0; j<n; j++)
					printf("%d", res[j]);
				printf("\n");

				int syndrome = 0;
				int index = 0;
				num = 1;
				for (j=0; j<n; j++)
				{
					if (isPowOfTwo(j+1)) // Если текущий бит - проверочный.
					{
						syndrome = 0;
						int k;
						for (k = j; k < n; k += pow(2, num)) // Вычисление суммы.
						{
							int q;
							for (q = k; q < n && q < k + pow(2, num-1); q++)
							{
								syndrome += res[q];
							}
						}
						syndrome %= 2;
						if (syndrome != 0) index += (j+1);
						num++;
					}
				}

				index--;
				printf("Error was found. Index: %d\n", index);
				if (res[index]) res[index] = 0; else res[index] = 1; // Исправление ошибки.

				printf("Correct code: ");
				for (j=0; j<n; j++)
					printf("%d", res[j]);
				printf("\n");

				free(res);

				puts("\nPress any key to exit to main menu.");
				getch();
				system("cls");
				mainMenu();

				break;

			case 2:
				puts("-------------------------");
				puts("   About the program");
				puts("-------------------------");
				puts("Authors:");
				puts("\tIvashkova K.P.,");
				puts("\tIgnatova I.A.,");
				puts("\tOsadchaia T.S.,");
				puts("\tPutintseva A.A.");
				puts("University ITMO, Department of Instrumentation Technology, Group 2652.");
				puts("Saint-Petersburg, 2014.");

				puts("\nPress any key to exit to main menu.");
				getch();
				system("cls");
				mainMenu();

				break;

			case 3:
				printf("-------------------------\n");
				printf("  Program was finished\n");
				printf("-------------------------\n");
				return 0;

		}
	}
	return 0;
}

int isPowOfTwo(int a)
{
	return (fmod(log2(a), 1) == 0);
}

void mainMenu()
{
	printf("*** Welcome to Hamming Code Simulation! ***\n");
	printf("1 - Begin the simulation\n");
	printf("2 - About the program\n");
	printf("3 - Exit\n");
	printf("Select an item: ");
}
