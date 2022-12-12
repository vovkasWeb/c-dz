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

int* DelNeg(int* Arr, int n, int& k)
{
	int i, j, * r;
	k = 0;
	for (i = 0; i < n; i++) if (Arr[i] >= 0) k++;
	r = new int[k];
	j = 0;
	for (i = 0; i < n; i++) if (Arr[i] >= 0) r[j++] = Arr[i];
	delete[] Arr;
	return r;
}

int main()
{
	srand(time(0));

	//1

	/*int* array = new int[n];

	initArr(array, n);
	printArr(array, n);
	array = addNewElement(array, n);
	printArr(array, n);
	array = intElement(array,n,1);
	printArr(array, n);
	array = deleteElement(array, n, 4);
	printArr(array, n);
	deleteArr(array);*/
	
	//2
	int* A = new int[10];
	int i, n, * r;

	A[0] = 1;
	A[1] = -1;
	A[2] = 16;
	A[3] = -81;
	A[4] = 0;
	A[5] = 0;
	A[6] = 12;
	A[7] = 121;
	A[8] = -11;
	A[9] = 11;

	r = DelNeg(A, 10, n);

	for (i = 0; i < n; i++) cout << r[i] << " ";

	cout << endl;

	delete[] r;

	
}