#include <iostream>
using namespace std;

class binary
{

public:
    string num;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the number is : ";
    cin >> num;
}

// check the binary number
void binary ::chk_bin(void)
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            cout << "Incorrect Binary number ";
            exit(0);
        }
    }
}

// number ones compliment -------> 0 convert 1 and 1 convert 0
void binary ::ones_compliment(void)
{
    for (int i = 0; i < num.length(); i++)
    {

        if (num.at(i) == '0')
        {
            num.at(i) = '1';
        }
        else
        {
            num.at(i) = '0';
        }
    }
}

// display function
void binary ::display(void)
{

    cout << "Displaying your binary number is : " << endl;

    for (int i = 0; i < num.length(); i++)
    {
        cout << num.at(i);
    }
    cout << endl;
}

int main()
{

    binary number; // object made -----> number is object
    number.read();
    number.chk_bin();
    number.display();
    number.ones_compliment();
    number.display();
    return 0;
}
