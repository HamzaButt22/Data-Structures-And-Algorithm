#include <iostream>

using namespace std;

int main() {
    int variable;
    cout<<"Enter Number: ";
    cin>>variable;
    int* pointer = &variable;
    cout<<endl;

    cout << "Value of variable: " << *pointer << endl;
    cout<<endl;
    cout << "Address of variable: " << pointer << endl;
    cout<<endl;
    cout << "Address of pointer: " << &pointer << endl;

    return 0;
}
