int main()
{
    int x = -3;
    
    unsigned int y = 7;

    bool val = x < y;              // (1)

    static_assert( static_cast<unsigned int>( -3 ) == 4'294'967'293 );
}