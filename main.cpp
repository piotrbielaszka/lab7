#include <iostream>
#include <vector>
#include <variant>

using namespace std;

int podziel(int a, int b)
{
    if (b == 0)
        throw 0;
    return a / b;
}

int main()
{
    int a = 0;
    cin >> a;

    int b = 0;
    cin >> b;

    // try
    // {
    //     vector<int> x(a, 0);
    //     variant<int, std::string> y;
    //     if (b % 2)
    //         y = 42;
    //     else
    //         y = "nieparzyste";
    // }
    // catch (bad_alloc ex)
    // {
    //     cout << ex.what();
    // }
    // catch (bad_variant_access ex)
    // {
    //     cout << ex.what();
    // }

    try
    {
        podziel(a, b);
    }
    catch (int ex)
    {
        cout << "Pamietaj cholero, nie dziel przez zero!\n";
    }
}