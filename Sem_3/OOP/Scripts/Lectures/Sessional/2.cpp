//WAP to display content of files in reverse order
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    fstream st;
    st.open("demo.txt", ios::in);

    st.seekg(0, st.end);
    int len = st.tellg();

    char c;
    while (len--){
        st.seekg(len, st.beg);
        st >> c;
        cout << c;
    }
}