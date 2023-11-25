#include <iostream>
#include <string>
using namespace std::literals::string_view_literals;
std::string replaceString(std::string_view haystack,
                          std::string_view needle,
                          std::string_view replacement)
{
    std::string result = haystack.data();
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
    std::string_view haystack{"okokokokokokokok"sv};
    std::string_view needle{"ok"sv};
    std::string_view replacement{"no"sv};
    std::cout << replaceString(haystack, needle, replacement);
    return 0;
}