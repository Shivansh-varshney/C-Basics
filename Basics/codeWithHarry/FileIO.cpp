#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "This is a sample text.";
    string st2;

    // opening a file and writing in it.
    ofstream out("sample.txt");
    out << st;
    out.close();

    // opening a file and reading it.
    ifstream in("sample.txt");
    // in >> st2;
    getline(in, st2);
    cout << st2 << endl;

    return 0;
}