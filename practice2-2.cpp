#include <iostream>
#include <string>
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
    std::string haystack{"okokokokokokokok"};
    std::string needle{"ok"};
    std::string replacement{"yes"};
    std::cout << replaceString(haystack, needle, replacement);
    return 0;
}