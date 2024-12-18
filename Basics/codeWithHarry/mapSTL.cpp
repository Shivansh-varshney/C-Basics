#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> marksMap;

    marksMap["Suress"] = 98;
    marksMap["Kamless"] = 69;
    marksMap["Neeless"] = 65;

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " got " << (*iter).second << " marks." << "\n";
    }

    return 0;
}