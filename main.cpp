#include <iostream>

using namespace std;

int main()
{
    string x1 , x2;
    string x3="i am a cool boy and handsome", x4="you just need some vegetable";
    getline(cin,x1); //it includes all the input until ENTER
    getline(cin,x1);
    cout << x1 << " " << x2 << endl;
    x1.swap(x2);
    cout << x1 << " " << x2 << endl;
    x3.erase(11); // from 11 on all erase
    cout << x3 << endl;
    x4.replace(19,9,"water"); //replace the vegetable 9 char to water
    cout << x4 << endl;
    x4.insert(19,"fresh");
    cout << x4 << endl;
    return 0;
}
