#include <iostream>
using namespace std;

int main()
{
	
	int size, x, y, temp, arr[50];
	
	cout << "Selection Sorting..." << endl;
	cout << "Enter array size: ";
	cin >> size;
	cout << "Enter the " << size << " elements: " << endl;
	for(x = 0; x < size; x++)
	{
		cin >> arr[x];
	}
	
	
	for(x = 0; x < size; x++)
	{
		for(y = x + 1; y < size; y++)
		{
			if(arr[x] > arr[y])
			{
				temp = arr[x];
				arr[x] = arr[y];
				arr[y] = temp;
			}
		}
	}
	
	cout << "After using selection sort..." << endl;
	cout << "Sorted array: " << endl;
	for(x = 0; x < size; x++)
	{
		cout << arr[x] << " " << endl; 
	
	}
	cout << "______________" << endl;
	cout << " " << endl;
	cout << "THANK YOU!" << endl;
	
	return 0;
	
}
