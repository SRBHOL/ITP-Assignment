#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int num = 1;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << num;
            if (j < n - 1) 
            {
                cout << "*";
            }
            num++;
        }
        cout << endl;
    }

    return 0;
}