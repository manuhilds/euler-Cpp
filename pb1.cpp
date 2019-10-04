/*  Natural numbers */

#include <iostream>
#include <vector>

int main()
{
    int i = 1000;
    int result = 0;
    std::vector<int> j;

    for( size_t n= 1; n < i; ++n)
    {
        if (n % 3 == 0 || n%5 == 0)
        j.push_back(n);
    }
    for (auto n : j)
    std::cout << n <<",";

    for (auto g : j)
    result+=g;

    std::cout <<std::endl<< result<<std::endl;
    


    return 0;
}