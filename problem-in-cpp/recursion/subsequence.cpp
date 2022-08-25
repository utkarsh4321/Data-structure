#include <iostream>

using namespace std;

int subSeq(string input, string output[])
{
    if (input.size() == 0)
    {
        output[0] = "";
        return 1;
    }
    int smallCount = subSeq(input.substr(1), output);
    for (int i = 0; i < smallCount; i++)
    {
        output[i + smallCount] = output[i] + input[0];
    }
    return 2 * smallCount;
}

int main()
{
    string input = "abc";
    string *output = new string[100];
    int count = subSeq(input, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << "\n";
    }
}