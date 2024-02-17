#include <iostream>
#include <string>
#include <cassert>

using namespace std;

//Makes string upper case
string uppercase(string mystr) {

    for (int i = 0; i < mystr.size(); i++)
    {
        mystr[i] = toupper(mystr[i]);
    }
    return mystr;
}


// finds substring
void findout(string a, string b, int supporter = 0, int casee = 0)
{
    if (casee != 0) {
        b = uppercase(b);
        a = uppercase(a);
    }
    cout << "location = " << b.find(a, supporter);
    
}

//finds character
void findout(char a, string b, int supporter = 0, int casee = 0)
{
    if (casee != 0) {
        b = uppercase(b);
        a = toupper(a);
    }
    cout << "location = " << b.find(a, supporter);
    
}

int extra_fun(string determiner, int* location, int* casee) {
    if (determiner == "help") {
        cout << "The options are; \n"
            << "No - for no options\n"
            << "starter - to start from a specific position on the string (starting at 0)\n"
            << "case - to make the program not case sensitive\n";
        return 0;
    }
    else if (determiner == "starter") {
        int locate;
        cout << "\nWhat is the starting point? ";
        cin >> locate;
        *location = locate;
        cin.clear();
        cin.ignore(256, '\n');
        return 0;
    }
    else if (determiner == "case") {
        cout << "\nNo longer case sensitive.\n";
        *casee = 1;
        return 0;
    }
    else {
        return 1;
    }
}

void test() {
    //returns 1
    findout('e', "test the TEST");
    //returns 1
    findout("e", "test the TEST");
    //returns 10
    findout('E', "test the TEST");
    //returns 7
    findout('e', "test the TEST",4);
    //returns 1
    findout('e', "test the TEST",0,1);
    //returns 1
    findout('E', "test the TEST", 0, 1);
    //returns 7
    findout('E', "test the TEST", 4, 1);
    //returns 1
    findout('e', "test the TEST", 0, 0);
    //returns 7
    findout('e', "test the TEST", 4, 0);

}

//drives the function
int main()
{
    string inputed1;
    string inputed2;
    int starter;
    int casee;

    //test();

    cout << "Input the string you want to find from: ";
    getline(cin, inputed2);

    cout << "Input the substring you want to find: ";
    getline(cin, inputed1);

    int extras = 0;

    while (extras == 0) {
        string inputed3;
        cout << "Type run to continue or type another option (type help for details).\n";
        getline(cin, inputed3);
        extras = extra_fun(inputed3, &starter, &casee);
           
    }


    findout(inputed1, inputed2, starter, casee);

    return 0;
}