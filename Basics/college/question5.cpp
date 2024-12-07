// menu driven program to perform given tasks.

#include <iostream>
using namespace std;

bool check_string(string* pointer)
{
    for (int i = 0; i < (*pointer).length(); i++)
    {
        if ((*pointer)[i] == ' ')
        {
            if (islower((*pointer)[i + 1]))
            {
                return false;
            }
        }
    }

    return false;
}

int string_length(string* pointer)
{
    int length = 0;
    for (char i : *pointer)
    {
        length += 1;
    }

    return length;
}

bool reverse_string(string* pointer)
{
    for(int i = (*pointer).length() - 1; i>=0; i--)
    {
        cout<<(*pointer)[i];
    }
    return true;
}

bool memory_address(string* pointer)
{
    for(int i = 0; i<(*pointer).length(); i++)
    {
        cout<<"Memory address of "<<(*pointer)[i]<<" is "<<&pointer[i]<<endl;
    }
}

int main()
{
    int ch;
    string strg = "This string is being used as an example for this program";
    // cout<<"Enter string of your choice: ";
    // cin>>strg;
    string* pointer = &strg;

    bool flag = true;
    while (flag == true)
    {
        cout << R"(
-----------------------------------------------------
What do you want to do now?
Enter 1 for length of string.
Enter 2 for checking that the first letter of every word is capital or not.
Enter 3 for reverse the string.
Enter 4 to display address of each character in the string.
Enter 5 to end program.)"
             << endl;

        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int length = string_length(pointer);
            cout << R"(
-----------------------------------------
Lenth of the string is )"
                 << length;
                 continue;
        }

        case 2:
        {
            bool result = check_string(pointer);
            if(result == false)
            {
                cout<<"-----------------------------------------"<<endl;
                cout<<"No, all the words are not starting from uppercase.";
                continue;
            }
            else
            {
                cout<<"-----------------------------------------"<<endl;
                cout<<"Yes, all the words are starting from uppercase.";
                continue;
            }
        }

        case 3:
        {
            flag = reverse_string(pointer);
            continue;
        }

        case 4:
        {
            flag = memory_address(pointer);
        }

        case 5:
        {
            flag = false;
        }
        }
    }
}