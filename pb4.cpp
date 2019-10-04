#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int[]> k;
    int n = 1000;
    std::vector<int> h;

    for (int i=1; i<n;++i)
    {
        for (int j = 1; j<i; ++j)
        {
            if (std::to_string(i*j) == std::to_string(i*j));
        }
    }
}