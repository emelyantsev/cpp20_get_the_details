#include <algorithm>
#include <iostream>
#include <vector>

int main()
{

    std::vector<int> myVec{ -3, 5, 0, 7, -4 };

    std::sort( myVec.begin(), myVec.end() );
    
    for( auto v : myVec ) std::cout << v << " "; // -4, -3, 0, 5, 7

}