#include<iostream>
using namespace std;

int main()
{
	string words[3] = { "apple","car","bear" };
	string word;
	char user_letter;
	int random, correct = 0;
	srand(time(0));
	random = rand() % 3;
	word = words[random];
	char* show = new char[word.size()];
	for (int i = 0; i < word.size(); i++)
		show[i]='_';
	for (int i = 0; i < word.size(); i++)
		cout << "_";
	while (correct!=word.size())
	{
		cout << "\nEnter a letter: ";
		cin >> user_letter;
		for (int i = 0; i < word.size(); i++)
		{
			if (user_letter == word[i] || (int(user_letter))+32== int(word[i]))
			{
				show[i] = user_letter;
				correct++;
			}
		}
		for (int i = 0; i < word.size(); i++)
			cout << show[i];
	}

	cout << endl << "YOU WIN !"<< endl;
	system("pause");
	return 0;
}