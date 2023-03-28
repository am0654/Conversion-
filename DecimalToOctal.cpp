#include<iostream>
using namespace std;
int main()
{
    int decimalNum, octalNum[50], i=0;
    cout<<"Enter any Decimal number: ";
    cin>>decimalNum;
    while(decimalNum != 0)
    {
        octalNum[i] = decimalNum%8;
        i++;
        decimalNum = decimalNum/8;
    }
    cout<<"\nEquivalent Octal Value = ";
    for(i=(i-1); i>=0; i--)
        cout<<octalNum[i];
    cout<<endl;
    return 0;
}

Input:
Enter any Decimal number: 256
Output:
Equivalent Octal Value = 400
