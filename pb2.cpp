#include <iostream>
#include <vector>

int main()
{
    std::vector<int> mine;
    long long  ans(0), x(1), y(2);

    while (x <= 4000000)
    {
        if (x % 2 == 0)
        {
            mine.push_back(x);
            ans += x;
        }
            auto next = x + y;
            x = y;
            y = next;
    }

    for (auto i : mine)
        std::cout << i << ",";

    std::cout <<std::endl<< ans << std::endl;
}