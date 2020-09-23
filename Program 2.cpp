#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int z = 23,x = 89;

	cout << "a = " << z << endl;
    cout << "b = " << x << endl;
    cout << "a & b = " << (z & x) << endl;

    cout<<endl;
    
    cout << "z = " << z << endl;
    cout << "x = " << x << endl;
    cout << "z | x = " << (z | x) << endl;
    
	cout<<endl;
    
    cout << "z = " << z << endl;
    cout << "x = " << x << endl;
    cout << "z ^ x = " << (z ^ x) << endl;
        
	cout<<endl;
    
    cout << "z = " << z << endl;
    cout << "x = " << x << endl;
    cout << "z >> x = " << (z >> x) << endl;
        
	cout<<endl;
    
    cout << "z = " << z << endl;
    cout << "x = " << x << endl;
    cout << "z << x = " << (z << x) << endl;

	getch();
}
