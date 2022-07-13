//Functions

#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    cout << phrase.find("ffe", 0) << endl;              //find returns the first occurance of the given characters
    cout << phrase.substr(8, 3) << endl;                //substr takes 2 args - start and len, and returns the characters accordingly

    return 0;
}