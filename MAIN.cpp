/*Edwin Y. Melendez Lopez #89139
Raudo E. Columna Manon  #86724

CECS 3212 Sec. 20
15 de agosto de 2017
Profesora Claudia Talavera

Pag. 1022 Min-Max Template*/

#include<iostream>
#include<iomanip>

using namespace::std;

template < class MAX >

MAX max(MAX N1, MAX N2)
{
	if (N1 > N2)
	{

		return N1;

	}
	else
	{

		return N2;
	}
}

template < class MIN >

MIN min(MIN N1, MIN N2)
{
	if (N1 < N2)
	{

		return N1;

	}
	else
	{

		return N2;
	}


}

int main()
{
	int userMax;
	int userMin;

	cout << "Enter 2 numbers: ";
	cin >> userMax >> userMin;

	cout << "Here is the minimum number: ";
	cout << min(userMax, userMin) << "\n\n" << 
		" and here is the maximum number: "
		<< max(userMax, userMin) << endl;

	system("pause");

	return 0;

} // end main. 2 de mayo de 2017 - Successful!

/*Output:

Enter 2 numbers: 4
7
Here is the minimum number: 4

and here is the maximum number: 7
Press any key to continue . . .


Enter 2 numbers: 11
7
Here is the minimum number: 7

and here is the maximum number: 11
Press any key to continue . . .*/