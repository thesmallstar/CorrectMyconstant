#include <bits/stdc++.h>
using namespace std;

int main()
{
	//incorrect constant name of format iAmAnConstant
    string A;
    while (true) {
        cin >> A;
        char* j;
        j[0] = A[0];

        int k = 1;
        for (int i = 1; i < A.length(); i++) {
            j[k] = A[i];
            k++;
            if (i != A.length() - 1 && A[i + 1] >= 'A' && A[i + 1] <= 'Z') {
                j[k] = '_';
                k++;
            }
        }
        //Correct Constant name of format I_AM_AN_CONSTANT
        for (int i = 0; i < k; i++)
            putchar(toupper(j[i]));
        cout << endl;
    }
}
