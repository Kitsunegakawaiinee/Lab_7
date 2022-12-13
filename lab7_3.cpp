#include<iostream>
#include<cmath>

using namespace std;

int adiff(int x, int y){  int ans = 0;  ans = (x >= y)? x-y:y-x;  ans %= 360;  if (ans > 180) ans = 360-ans;  return ans;}

int main(){  cout << adiff(180,270) << endl;  cout << adiff(210,45)<< endl;  cout << adiff(0,360) << endl;  cout << adiff(10,350) << endl;  cout << adiff(95,260) << endl;  cout << adiff(90,-90) << endl;  cout << adiff(1000,280) << endl;  cout << adiff(60,244) << endl;}
