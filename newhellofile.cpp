#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"NewHello", "NewC++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    cout << "Fiished" << endl;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    for(auto i : v)
    {
        cout << i;
    }
    cout << endl;

    return 0;

    // v2 comment
}