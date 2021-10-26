#include<iostream>
using namespace std;

int main()
{
	int* a;
	int n, i=0,sw=1;
	cout << "tedad ra vard konid >> ";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "adad" << i + 1 << ": ";
		cin >> a[i];

	}

	while (i < n && sw == 1)
	{
		for (int j = 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				sw = 0;
				break;
			}
		}
		i++;
	}
	if (sw == 1)
		cout << "moratab ast" << endl;
	else
		cout << "namoratb ast" << endl;

	system("pause");
	return 0;
}