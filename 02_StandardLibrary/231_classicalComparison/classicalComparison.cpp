
bool cmp( double l, double r )
{
    return l < r;
}

int main()
{

    double x = -3.5;
    unsigned int y = 7;

    auto res = x < y;


    auto res2 = cmp( x, y );

}