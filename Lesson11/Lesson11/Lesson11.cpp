#include <iostream>
using namespace std;
int main()
{
	//int array[3]{ 2,8,13 };
	//int n = sizeof array / sizeof array[0];
	//for (int i = 0; i < n; i++)
	//{
	//	cout << array[i] << " ";
	//	cout << i[array] << " ";
	//	cout << *(array + i) << " "; //indaraction
	//	cout << &(array[i]) << " "; // adressof
	//	cout << endl;

	//}
	srand(time(NULL));
	cout << "tap2" << endl << endl;
	int myArr3[10];
	int min = -10;
	int max = 20;
	for (int i = 0; i < sizeof(myArr3) / sizeof(myArr3[0]); i++)
	{
		int random = min + rand() % (max - min + 1);
		myArr3[i] = random;
	}
	int myArr4[15];

	for (int i = 0; i < sizeof(myArr4) / sizeof(myArr4[0]); i++)
	{
		int random = min + rand() % (max - min + 1);
		myArr4[i] = random;
	}
	int myArr5[25];
	int l = 0;
	bool k = true;
	for (int i = 0; i < sizeof(myArr3) / sizeof(myArr3[0]); i++)
	{
		k = true;
		for (int j = 0; j < sizeof(myArr4) / sizeof(myArr4[0]); j++)
		{
			if (myArr3[i] == myArr4[j])
			{
				k = false;
				break;
			}

		}
		if (k == true)
		{
			myArr5[l] = myArr3[i];
			l++;
		}

	}
	for (int i = 0; i < sizeof(myArr4) / sizeof(myArr4[0]); i++)
	{
		k = true;
		for (int j = 0; j < sizeof(myArr3) / sizeof(myArr3[0]); j++)
		{
			if (myArr3[i] == myArr4[j])
			{
				k = false;
				break;
			}

		}
		if (k == true)
		{
			myArr5[l] = myArr4[i];
			l++;
		}

	}
	for (int i : myArr3)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i : myArr4)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i : myArr5)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << endl << endl << "tap1" << endl << endl;

	int myArr1[10];
	min = -10;
	max = 20;
	for (int i = 0; i < sizeof(myArr1) / sizeof(myArr1[0]); i++)
	{
		int random = min + rand() % (max - min + 1);
		myArr1[i] = random;
	}
	int myArr2[15];

	for (int i = 0; i < sizeof(myArr2) / sizeof(myArr2[0]); i++)
	{
		int random = min + rand() % (max - min + 1);
		myArr2[i] = random;
	}
	int myArr[15];
	l = 0;
	for (int i = 0; i < sizeof(myArr1) / sizeof(myArr1[0]); i++)
	{
		for (int j = 0; j < sizeof(myArr2) / sizeof(myArr2[0]); j++)
		{
			for (int p = 0; p < l; p++)
			{
				if (myArr[p] == myArr1[i]) {
					j++;
					break;
				}
			}
			if (myArr1[i] == myArr2[j]) {
				myArr[l] = myArr1[i];
				l++;
			}
		}
	}
	for (int i : myArr1)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i : myArr2)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i : myArr)
	{
		cout << i << " ";
	}
	cout << endl;


	cout << endl << endl << "tap3" << endl << endl;
	int Narr[10];
	min = -10;
	max = 20;
	for (int i = 0; i < sizeof(Narr) / sizeof(Narr[0]); i++)
	{
		int random = min + rand() % (max - min + 1);
		Narr[i] = random;
	}
	int narr1[10];
	int narr2[10];
	bool po = false;
	for (int i = 0; i < sizeof(Narr) / sizeof(Narr[0]); i++)
	{
		int l = 0;
		int ln = 0;
		if (Narr[i - 1] <= 0 || Narr[i] > 0)
		{
			for (int j = i; Narr[j] > 0; j++)
			{
				narr2[l] = Narr[j];
				l++;
			}
			for (int p = 0; p < sizeof(narr1) / sizeof(narr1[0]); p++)
			{
				if (narr1[p] > 0)
				{
					ln++;
				}
			}
			if (ln < l)
			{
				for (int ip = 0; ip < sizeof(Narr) / sizeof(Narr[0]); ip++)
				{
					narr1[ip] = narr2[ip];
					narr2[ip] = 0;
				}

			}

		}
	}
	for (int i : Narr)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i : narr1)
	{
		cout << i << " ";
	}


	cout << endl << endl << "tap4" << endl << endl;
	min = -20;
	max = 20;
	int arry9[20];
	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry9[i] = random;
	}
	cout << endl << "kohne massiv: ";
	for (int i : arry9) {
		cout << i << " ";
	}
	int narry9[20];
	int h = 0;
	for (int i = 0; i < 20; i++)
	{
		if (arry9[i] >= 0)
		{
			narry9[h] = arry9[i];
			h++;
		}
	}

	for (int i = 0; i < 20; i++)
	{
		if (arry9[i] < 0)
		{
			narry9[h] = arry9[i];
			h++;
		}
	}

	cout << endl << "yeni massiv: ";
	for (int i : narry9) {
		cout << i << " ";
	}


	cout << endl << endl << "tap5" << endl << endl;

	min = -20;
	max = 20;
	int arry[20];
	for (int i = 0; i < 20; i++)
	{
		int random = min + rand() % (max - min + 1);
		arry[i] = random;
	}
	cout << endl << "kohne massiv: ";
	for (int i : arry) {
		cout << i << " ";
	}
	int narry[20];
	h = 0;
	for (int i = 0; i < 20; i++)
	{
		if (arry[i] >= 0)
		{
			narry[h] = arry[i];
			h++;
		}
		else
		{
			narry[h] = -arry[i];
			h++;
		}
	}



	cout << endl << "yeni massiv: ";
	for (int i : narry) {
		cout << i << " ";
	}
}