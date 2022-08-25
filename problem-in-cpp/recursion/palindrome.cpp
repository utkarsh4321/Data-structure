#include <iostream>

using namespace std;

int reverse(int num, int sum)
{

    if (num < 10)
        return sum * 10 + num % 10;
    return reverse(num / 10, sum * 10 + num % 10);
}
int main()
{
    int aa;
    cout << "Enter a no: ";
    cin >> aa;

    int bb = reverse(aa, 0);

    if (aa == bb)
        cout
            << aa << " This no is palindrome";
    else
        cout << aa << " This no is not palindrome";
}