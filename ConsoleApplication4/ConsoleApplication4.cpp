#include <iostream>
using namespace std;
int n = 5;

void initArr(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 10;
	}


}
void printArr(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << '\n';
}
void deleteArr(int* arr)
{
	delete[] arr;
}

int* addNewElement(int* arr, int length) {
	int* dest = new int[length + 1];
	for (int i = 0; i < length; i++)
	{
		dest[i] = arr[i];
	}
	dest[length] = rand() % 10;
	delete[] arr;
	n++;
	return dest;
}

int* intElement(int* arr, int length, int index) {
	int* newArray = new int[++length];
	for (int i = 0; i < index; ++i) 
		newArray[i] = arr[i];
	newArray[index] = rand() % 10;
	for (int i = index; i < length - 1; ++i) 
		newArray[i + 1] = arr[i];
	delete[]arr; 
	arr = newArray;
	n++;
	return newArray;
}
int* deleteElement(int* arr, int length, int index) {
	int* newArray = new int[--length];
	for (int i = 0; i < index; ++i)
		newArray[i] = arr[i];
	for (int i = index; i < length; ++i)
		newArray[i] = arr[i+1];
	delete[]arr;
	arr = newArray;
	n--;
	return newArray;
}

int main()
{
	srand(time(0));
	int* array = new int[n];

	initArr(array, n);
	printArr(array, n);
	array = addNewElement(array, n);
	printArr(array, n);
	array = intElement(array,n,1);
	printArr(array, n);
	array = deleteElement(array, n, 4);
	printArr(array, n);
	deleteArr(array);
	

}