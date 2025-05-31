#include <iostream>

using namespace std;

template <typename T>
T find_max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <typename T1, typename T2>
int find_max_size(T1 a, T2 b)
{
    if (sizeof(a) > sizeof(b))
        return sizeof(a);
    else
        return sizeof(b);
}

int main()
{
    double x = 10.6;
    double y = 20.6;

    double max_double = find_max<double>(x, y);

    cout << "max_double: " << max_double << endl;

    int j = 10;
    int k = 6;

    int max_int = find_max<int>(j, k);

    cout << "max_int: " << max_int << endl;

    char c;
    int max_size = find_max_size(c, k);

    cout << "max_size: " << max_size << endl;

    return 0;
}