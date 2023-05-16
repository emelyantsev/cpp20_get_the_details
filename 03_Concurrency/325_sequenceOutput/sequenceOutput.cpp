#include <syncstream>
#include <iostream>

int main()
{

    std::osyncstream bout1( std::cout );
    bout1 << "Hello, ";

    bout1.emit();
    {
        std::osyncstream( bout1.get_wrapped() ) << "Goodbye, " << "Planet!" << '\n';
    } // emits the contents of the temporary buffer

    bout1 << "World!" << '\n';

}