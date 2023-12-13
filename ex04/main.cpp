#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Usage: sed <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string inputFileName = argv[1];
	std::string outputFileName = inputFileName + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(inputFileName.c_str(), std::fstream::in);
	std::ofstream outputFile(outputFileName.c_str(), std::fstream::trunc);
    if (!inputFile.is_open() || !inputFile.is_open())
	{
        std::cerr << "Failed to open file" << std::endl;
        return 1;
    }
    std::stringstream buffer;
	buffer << inputFile.rdbuf();
    inputFile.close();
    std::string content = buffer.str();
	if (!s1.empty())
	{
	    size_t pos = 0;
		pos = content.find(s1, pos);
	    while (pos != std::string::npos)
		{
	        content = content.substr(0, pos) + s2 + content.substr(pos + s1.length(), std::string::npos);
	        pos += s2.size();
			pos = content.find(s1, pos);
	    }
	}
    outputFile << content;
    outputFile.close();

    return 0;
}