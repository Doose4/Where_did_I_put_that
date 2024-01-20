#include <iostream>
#include <string>

using namespace std;
 
// finds substring
void findout(string a, string b)
{
    
    cout << "location = " << b.find(a);
}
 
//finds character
void findout(char a, string b)
{
    
    cout << "location = " << b.find(a);
}
 
//drives the function
int main()
{
    char yes_no;
    string inputed2;
    
    cout << "Input the string you want to find from: ";
    getline(cin, inputed2);
    
    cout << "Are you looking for a character(Y) or a string(N): ";
    cin >> yes_no;
    cin.ignore();
    
    yes_no = toupper(yes_no);
    if (yes_no =='N'){
        string inputed1;
        cout << "Input the substring you want to find: ";
        getline(cin, inputed1);
        findout(inputed1,inputed2);
    } else {
        char inputed1;
        cout << "Input the charcter you want to find: ";
        cin>>inputed1;
        cin.ignore();
        findout(inputed1,inputed2);
    }
    
    return 0;
}