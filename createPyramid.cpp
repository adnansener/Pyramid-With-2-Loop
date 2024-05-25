#include <iostream>
using namespace std;

class Piramit
{
private:
	int Size = 2;
public:
	Piramit();
	~Piramit();
};
int main()
{
	Piramit* Obj = new Piramit;

	delete Obj;
	Obj = NULL;
	
	return 0;
}

Piramit::Piramit()
{
	cout << "Enter Length for Pyramid:";
	do
	{
		if (Size < 2)
			cout << "Try Again by Entering Minimum 2 Values:";
		cin >> Size;
	} while (Size < 2);
}

Piramit::~Piramit()
{
	for (int i = 1; i <= Size; i++)
	{
		for (int j = 1; j <= (Size + i - 1); j++)
		{
			if (j <= (Size - i))
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}