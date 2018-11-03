#include <iostream>

using namespace std;

int main()
{
	int x,n,t,batas;

	cout << "masukan nilai n : ";
	cin >> n;

	batas =n+100;
	x=20;
	t=n;

	while (t<=batas){
		t=t+x;
		x=x+10;
	}
	cout << t;
	

	return 0;
}