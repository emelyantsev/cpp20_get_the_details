#include <iostream>
#include <format>
#include <string>
#include <vector>

template <class  T, class CharT>
struct std::formatter<std::vector<T>, CharT> : std::formatter<T, CharT> {

    //std::string formatString;

    //auto constexpr parse( format_parse_context& ctx )
    //{
    //    formatString = "{:";
    //    std::string parseContext( std::begin( ctx ), std::end( ctx ) );
    //    formatString += parseContext;
    //    return std::end( ctx ) - 1;
    //}

    template <typename FormatContext>
    auto format( const std::vector<T>& v, FormatContext& ctx )
    {
        auto out = ctx.out();
        std::format_to( out, "[" );
        if( v.size() > 0 ) std::formatter<T, CharT>::format( v[0], ctx); //std::format_to( out, formatString, v[0] );
        for( int i = 1; i < v.size(); ++i ) {

            std::format_to( out, ", " );
            std::formatter<T, CharT>::format( v[i], ctx );
        }
        std::format_to( out, "]" );
        return std::format_to( out, "\n" );
    }

};

int main()
{

    std::vector<int> myInts{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << std::format( "{:}", myInts );
    std::cout << std::format( "{:+}", myInts );
    std::cout << std::format( "{:03d}", myInts );
    std::cout << std::format( "{:b}", myInts );

    std::cout << '\n';

    std::vector<std::string> myStrings{ "Only", "for", "testing", "purpose" };
    std::cout << std::format( "{:}", myStrings );
    std::cout << std::format( "{:.3}", myStrings );

}