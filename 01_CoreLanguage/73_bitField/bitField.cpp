#include <iostream>

struct Class11 {
    int i = 1;
    int j = 2;
    int k = 3;
    int l = 4;
    int m = 5;
    int n = 6;
};

struct BitField20 {
    int i : 3 = 1;
    int j : 4 = 2;
    int k : 5 = 3;
    int l : 6 = 4;
    int m : 7 = 5;
    int n : 7 = 6;
};

int main()
{

    std::cout << '\n';

    std::cout << "sizeof(Class11): " << sizeof( Class11 ) << '\n';
    std::cout << "sizeof(BitField20): " << sizeof( BitField20 ) << '\n';

    std::cout << '\n';


    BitField20 bf20;

    bf20.k = 1023;

    std::cout << bf20.i << std::endl;
    std::cout << bf20.j << std::endl;

    std::cout << bf20.k << std::endl;

    std::cout << bf20.l << std::endl;

}