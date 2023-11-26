#include <iostream>
#include <string>
#include <vector>
#include <format>
int main()
{
    std::string num;
    std::vector<double> numList;
    while (std::getline(std::cin, num))
    {
        size_t numLen{num.length()};
        if (numLen == 1 && num[0] == '0')
            break;
        numList.push_back(std::stod(num));
    }
    size_t cnt = numList.size();
    for (size_t i = 0; i < cnt; i += 2)
    {
        if (i >= cnt)
            break;
        std::cout << std::format("{:e}\t", numList[i]);
        if (i + 1 >= cnt)
            break;
        std::cout << std::format("{:f}\n", numList[i + 1]);
    }
    return 0;
}