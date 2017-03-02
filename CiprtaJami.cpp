#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Insert a number: ";
	cin >> num;
	
	int sum = 0;
	
	while(num != 0)
	{
		cout << num % 10;
		
		sum += num % 10;
		num /= 10;
		
		if (num != 0)
			cout << " + ";
	}
	
	cout << " = " << sum;
	
	
	
	//--------------------
	cout << "\n\n\nDone!..\n\n";
	return 0;
}
