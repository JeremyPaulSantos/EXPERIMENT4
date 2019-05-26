
#include <iostream>
using namespace std;

int main()
{
	
	int size, e, f, temp, arr[50];
	
	cout << "Selection Sorting..." << endl;
	cout << "Enter array size: ";
	cin >> size;
	cout << "Enter the " << size << " elements: ";
	for(e = 0; e < size; e++)
	{
		cin >> arr[e];
	}
	
	
	for(e = 0; e < size; e++)
	{
		for(f = e + 1; f < size; f++)
		{
			if(arr[e] > arr[f])
			{
				temp = arr[e];
				arr[e] = arr[f];
				arr[f] = temp;
			}
		}
	}
	
	cout << "After using selection sort..." << endl;
	cout << "Sorted array: ";
	for(e = 0; e < size; e++)
	{
		cout << arr[e] << " ";
	}
	
	return 0;
	
}
