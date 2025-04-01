#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string inputFileName = "input.txt";   // Input file name
    string outputFileName = "output.txt"; // Output file name
    ifstream inputFile(inputFileName);    // Open the input file
    ofstream outputFile(outputFileName);  // Open the output file
    if (!inputFile)
    {
        cerr << "Error: Cannot open input file!" << endl;
        return 1;
    }
    if (!outputFile)
    {
        cerr << "Error: Cannot open output file!" << endl;
        return 1;
    }
    string line;
    int lineCount = 0;
    int wordCount = 0;
    while (getline(inputFile, line))
    {
        // Write the line to the output file
        outputFile << line << endl;
        // Count lines
        lineCount++;
        // Count words in the current line
        string word;
        for (size_t i = 0; i < line.size(); i++)
        {
            if (line[i] == ' ' || line[i] == '\t')
            {
                wordCount++;
                while (i < line.size() && (line[i] == ' ' || line[i] == '\t'))
                    i++; // Skip multiple spaces
            }
        }
        if (!line.empty() && (line[line.size() - 1] != ' ' && line[line.size() - 1] != '\t'))
            wordCount++;
    }
    inputFile.close();
    outputFile.close();
    // Output the counts
    cout << "Number of lines: " << lineCount << endl;
    cout << "Number of words: " << wordCount << endl;
    return 0;
}
