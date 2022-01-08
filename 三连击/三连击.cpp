#include<iostream>
//#include<cstdlib>
// using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;
    for (a = 100; a <= 333; a++)
    {
        b = a * 2;
        c = a * 3;
        if ((a / 100 + a / 10 % 10 + a % 10 + b / 100 + b / 10 % 10 + b % 10 + c / 100 + c / 10 % 10 + c % 10 == 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9) && ((a / 100) * (a / 10 % 10) * (a % 10) * (b / 100) * (b / 10 % 10) * (b % 10) * (c / 100) * (c / 10 % 10) * (c % 10) == (1) * (2) * (3) * (4) * (5) * (6) * (7) * (8) * (9)))
            std::cout << a << " " << b << " " << c << std::endl;
    }
    //system("pause");
    return 0;
}