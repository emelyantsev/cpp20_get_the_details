#include <algorithm>
#include <list>
#include <vector>
#include <array>
#include <functional>

int main()
{

    std::list<int> myList{ 1, 10, 3, 2, 5 };

   // std::sort( myList.begin(), myList.end() ); // Compile-time error


    std::vector<int> myVector = { 8,4,5 };

    std::sort( myVector.begin(), myVector.end() );


    std::array<int, 3> myArray = { 8, 4, 5 };

    std::sort( myArray.begin(), myArray.end(), std::greater<int>{} );


    int arr[] = { 8, 4, 5 };


    std::sort( std::begin( arr ), std::end( arr ) );



    return EXIT_SUCCESS;
}