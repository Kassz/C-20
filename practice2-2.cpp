#include <iostream>
#include <string>
using namespace std::literals::string_literals;
std::string replaceString(std::string haystack,
                          std::string needle,
                          std::string replacement)
{
    std::string result = haystack;
    size_t needleLen{needle.length()};
    size_t pos;
    while ((pos = result.find(needle)) != std::string::npos)
    {
        result.replace(pos, needleLen, replacement);
    }
    return result;
}

int main()
{
    std::string haystack{"okokokokokokokok"s};
    std::string needle{"ok"s};
    std::string replacement{"no"s};
    std::cout << replaceString(haystack, needle, replacement);
    return 0;
}