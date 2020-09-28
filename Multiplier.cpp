#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int n;

    cout << "Enter Digit: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    getch();
}
