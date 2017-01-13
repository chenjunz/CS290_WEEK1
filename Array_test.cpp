#include<iostream>
using namespace std;
int *getNum();
int main()
{

int values [5] = { 4, 7, 6 }, value[5] ;
cout << values;
value[1]=*getNum();
cout << value[1];
return 0;
}
int *getNum()
{

int wholeNum;
cout << "Enter a number: ''";
cin >> wholeNum;
return &wholeNum;

}
