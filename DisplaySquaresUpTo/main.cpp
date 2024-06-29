#include <iostream>
#include <math.h>

using namespace std;

//should be the fastest and most efficient, as it has no need to call upon sqrt.
void DisplaySquares(unsigned int n) {
    int sqrt{ 10 };
    for (int i = 0; i < sqrt; ++i) {
        cout << i << " * " << i << " = " << i * i << endl;
    }
}

void DisplaySquaresUpTo(unsigned int n)
{
    unsigned int i;
    unsigned int limit = sqrt(100); // Calculate the square root of 100 once

    /*  This outputs all numbers whose square is < 100, i.e. it will show:  0 * 0 = 0
                                                                            1 * 1 = 1
                                                                            2 * 2 = 4
                                                                            3 * 3 = 9
                                                                            ...
                                                                            9 * 9 = 81
    */

    cout << "Here are some squares <100 : " << endl;
    for (i = 0; i <= limit && i < n; i++)
    {
        cout << i << " * " << i << " = " << i * i << endl;
    }

    // The FOR loop above isn't very efficient. How can it be improved?
    // Hint: sqrt() is computationally expensive (it takes a long time).

    cout << endl;

}

int main() {

    unsigned int n{ 10 };

    //DisplaySquaresUpTo(n);

    DisplaySquares(n);

	return 0;
}