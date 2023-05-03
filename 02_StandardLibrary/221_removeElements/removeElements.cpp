#include <algorithm>
#include <iostream>
#include <vector>

int main()
{

    std::cout << '\n';

    std::vector myVec{ -2, 3, -5, 10, 3, 0, -5 };

    for( auto ele : myVec ) std::cout << ele << " ";
    std::cout << "\n\n";

    std::remove_if( myVec.begin(), myVec.end(), []( int ele ) { return ele < 0; } ); // (1)
    for( auto ele : myVec ) std::cout << ele << " ";

    std::cout << "\n\n";


    std::vector<int> vec1( 2, 3 );

    std::vector<int> vec2{ 2, 3 };


}