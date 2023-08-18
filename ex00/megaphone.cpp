#include <string>
#include <iostream>

int main(int argc, char **argv)
{
    int          i;
    int          j;
    int          size;
    std::string  str;

    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while ( i < argc)
        {
           j = 0;
           str = std::string(argv[i]);
           size = (int)str.size();
           while (j < size)
           {
            str[j] = toupper(str[j]);
            ++j;
           }
           std::cout << str;
            ++i;
            if (i != argc)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return (0);
}