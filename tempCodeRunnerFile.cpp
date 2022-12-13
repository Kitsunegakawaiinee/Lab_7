#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int L = x.size();
	string y = "";
	for (int i ; i < L ; i++)
	{
		y += x[L-i-1];
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main()
{
	string A,B,c,a;
    cout << "Input text: " ;
	cin >> A;
	B = func3(A);
	c = func3(func1(A));
	a = (c == B)? a="Yes": a = "No";

    cout << "Reversed text: " << func1(A) << endl;
    cout << "Palindrome: " << a ;
    return 0;
}
