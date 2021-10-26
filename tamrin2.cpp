#include<iostream>
using namespace std;

int main()
{
	int* a;
	int n;
	cout << "tedad ra vared konid >> ";
	cin >> n;
	a = new int[n];
	srand(time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand();
	for(int i=0;i<n;i++)
		cout << a[i] << endl;
	system("pause");
	return 0;

}