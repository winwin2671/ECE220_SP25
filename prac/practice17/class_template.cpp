#include <iostream>

using namespace std;

template <typename T, int len> // use in complie time not runtime
class Array
{
public:
    T array[len];

    void fill(T value)
    {
        for (int i = 0; i < len; i++)
            array[i] = value;
    }

    T &at(int index)
    {
        return array[index];
    }
};

int main()
{

    Array<int, 20> int_Arr;
    int_Arr.fill(2);

    cout << "int array[4]: " << int_Arr.at(4) << endl;

    Array<string, 8> str_Arr;

    str_Arr.fill("abc");

    str_Arr.at(6) = "124";

    for (int i = 0; i < 8; i++)
        cout << "str Arr[" << i << "]: " << str_Arr.at(i) << endl;

    return 0;
}