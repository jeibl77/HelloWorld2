#include <iostream>
#include <vector>
#include <string>

using namespace std;

static void printVec(const vector<int>& vec)
{
    for(auto i : vec)
    {
        cout << i;
    }
    cout << endl;
}

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

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
        // comment main
        cout << i;
    }
    cout << endl;
=======
    printVec(v);
>>>>>>> printVector

    return 0;

    // v2 comment comment
    // v3
}