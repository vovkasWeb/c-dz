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
	int* dest = new int[length + 1], i;
	for (i = 0, dest[length] = 0; i < length; i++)
		dest[length] += (dest[i] = arr[i]);
	delete[] arr;
	n++;
	return dest;
}
int * addElementOnIndex(int* arr, int length) {

int main()
{
	srand(time(0));
	int* array = new int[n];

	initArr(array, n);
	printArr(array, n);
	array = addNewElement(array, n);
	printArr(array, n);
	deleteArr(array);
	

}