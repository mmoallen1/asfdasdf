#include <iostream>

using namespace std;

void placestogo(char &);
int main()
{
    char choice;
    cout<<"Please select a letter A, B, or C"<<endl;
    cin>> choice;
    placestogo(choice);
    return 0;
}

void placestogo(char &choice){

switch(choice){
    case 'A':
        cout<<"Entered A";
        break;

    case 'B':
        cout<<"Entered B";
        break;

    case 'C':
        cout<<"Entered C";
        break;

    default:
        cout<<"Wrong character.";
}
