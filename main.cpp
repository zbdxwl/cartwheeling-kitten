// demo1
//# include <iostream>
//
//int main()
//{
//	// Display Aloha to console.
//	std::cout << " Aloha World! " << std::endl;
//	std::cout << " haha " << std::endl;
//	
//	return 0; 
//}

// demo2
// unit1 Online Judge
#include<iostream>
using std::cout;
using std::endl;

int main()
{
	const int SIZE = 5;
	 
	// output triangle consist of stars
	for ( int i = 1; i <= SIZE; i++ ) 
	{
		int count = i;
		while( count != 0 )
		{
			cout << "*";
			count--;	
		}
		cout << endl << endl;

	}
	
	return 0;
}



