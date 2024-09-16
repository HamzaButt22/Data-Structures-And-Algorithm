#include <iostream>
using namespace std;

int main() {
    int Students = 10;
    int ages[Students];
    int largestAge = 0;

    for (int i = 0; i < Students; i++) {
        cout << "Enter the age of student " << i + 1 << ": ";
        cin >> ages[i];
    }

    for (int i = 0; i < Students; i++) {
        if (ages[i] > largestAge) {
            largestAge = ages[i];
        }
    }

    cout<<endl;
    cout << "The largest age among the students is: " << largestAge << endl;

    return 0;
}
