#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i,n;

    float sum=0, avg;
    float *p;


    cout << "How many marks would you like to enter: ";
    cin >> i;

    p = new float [i];

    for (n=0; n<i; n++)
    {
        cout << "Enter marks " << n+1 << ": ";
        cin >> p[n];
        sum += p[n];
    }

    cout << endl << "You have entered : ";

    for (n=0; n<i; n++)
    {
        cout << p[n] << ", ";
    }
    cout << "\b\b";

    avg = sum / i;


    cout << endl << endl << "Sum of mark is : " << sum << endl;
    cout << "Average marks is : " << (int)avg;



    return 0;
}
