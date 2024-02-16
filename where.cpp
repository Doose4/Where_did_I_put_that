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
    
    string inputed1;
    cout << "Input the substring you want to find: ";
    getline(cin, inputed1);
    findout(inputed1,inputed2);
    
    return 0;
}