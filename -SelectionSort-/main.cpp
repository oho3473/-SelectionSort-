#include<iostream>

void PrintArray(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << input[i] << " ";
	}
}


void Swap(int& x, int&y)
{
	int temp = x;
	x = y;
	y = temp;
}

//Ot = n^2	Os= n
void SelectionSort(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		int minIndex = i;

		for (int j = i; j < size; ++j)
		{
			if(input[minIndex] > input[j])
			{
				minIndex = j;
			}
		}

		Swap(input[minIndex], input[i]);
	}
}


int main()
{
	int array[5]{ 8,7,2,3,1 };

	SelectionSort(array,5);

	PrintArray(array, 5);
}