#include<iostream>

using namespace std;

int main(){
	
	int P[5000], k, result;

	for (int i = 0; i < 5000; i++)
	{
		P[i] = 2*i+1;
	}

	cout << "Please input k: ";
	cin >> k;
	

	if (k > 0)
	{
		int i =0;
		while (i<5000)
		{
			if (P[i]%k == 0)
			{
				result -= P[i];
			}
			else 
			{
				result += P[i];
			}

			i++;
		}

		cout << "Result = "<< result;
	}
	else
	{
		cout << "Invalid input!!!";
	}
	return 0;
}
