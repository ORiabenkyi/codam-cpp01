#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int count, char *argv[])
{
    if (count != 4)
    {
        std::cout << "Use: ./ex04 <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string target   = argv[2];
    std::string replace  = argv[3];

    if (target.empty())
    {
        std::cerr << "Error: s1 (target string) cannot be empty." << std::endl;
        return 1;
    }

    if (replace.empty())
    {
        std::cerr << "Error: s2 (replacement string) cannot be empty." << std::endl;
        return 1;
    }
    
    std::ifstream inputFile(filename);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    
    std::string line;
    std::ostringstream output;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(target, pos)) != std::string::npos)
        {
            line.replace(pos, target.length(), replace);
            // Avoid infinite loop if replace extends the string
            if (replace.length() >= target.length())
                pos += replace.length();
        }
        output << line << std::endl;
    }
    inputFile.close();

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not create output file " << filename << ".replace" << std::endl;
        return 1;
    }
    outputFile << output.str();
    outputFile.close();

    return 0;
}