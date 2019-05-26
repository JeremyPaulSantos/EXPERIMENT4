#include <iostream>

using namespace std;

int add(int a, int b)
{
	int answer;
	answer=a+b;
	return answer;
}

int sub(int a, int b)
{
	int answer;
	answer=a-b;
	return answer;
}

int mul(int a, int b)
{
	int answer;
	answer=a*b;
	return answer;
}

int div(int a, int b)
{
	int answer;
	answer=a/b;
	return answer;
}

int rem(int a, int b)
{
	int answer;
	answer=a%b;
	return answer;
}

int main()

{
	int x, y, choice, answer;
	char z;
	
	do {
		cout << "MENU: (1-5)" << "\n 1. Add" << "\n 2. Subtract" <<"\n 3. Multiply" <<  "\n 4. Divide" << "\n 5. Modulus" << endl;
		cout << "Enter your choice: "; cin >> choice;
		
		switch (choice)
		
		{
			
			case 1: 
				cout << "Enter your two numbers: " << endl; 
				cin >> x >> y;
				answer = add(x,y); 
				cout << "Result: " << answer << endl;
				break;
			
			case 2: 
				cout << "Enter your two numbers: " << endl;; cin >> x >> y;
				answer = sub(x,y); 
				cout << "Result: " << answer << endl;
				break;
				
			case 3: 
				cout << "Enter your two numbers: " << endl; cin >> x >> y;
				answer = mul(x,y); 
				cout << "Result: " << answer << endl;
				break;
			
			case 4: 
				cout << "Enter your two numbers: " << endl;; cin >> x >> y;
				answer = div(x,y); 
				cout << "Result: " << answer << endl;
				break;
				
			case 5: 
				cout << "Enter your two numbers: " << endl; cin >> x >> y;
				answer = rem(x,y); 
				cout << "Result: " << answer << endl;
				break;
		}
		
	cout << "Continue? (y IF YES): ";
	cin >> z;
	} while (z == 'y' || z == 'Y');
	if (z!=y)
	cout << "THANK YOU FOR USING THE PROGRAM!";

	
	
	return 0;
}
