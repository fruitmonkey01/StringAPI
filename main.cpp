#include <string>
#include <iostream>

using namespace std;

// Function: Convert string to uppper case
std::string toUpperCase(string str) {
    string upperCaseStr = "";
    std::locale loc;
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        char c = std::toupper(str[i], loc);
        upperCaseStr.append(string(1, c));
    }
    return upperCaseStr;
}

// Function: Find the substring in the full text string
void findString(string str1, string str2)
{
    unsigned long pos = 0;
    int count = 0;
    
    while (pos < str1.size()) {
        // Note: string::find() API is CaseSensitive
        pos = str1.find(str2, pos);
        if (pos != string::npos) {
            count++;
            cout << "[" << str2 << "] found at: " << pos << endl;
        } else {
            cout << "[" << str2 << "] found " << count << " times." << endl;
            break;
        }
        pos++;
    }
}

// Function: Clean the input string
string cleanString(string s)
{
    s.erase(std::remove(s.begin(), s.end(), '\n'), s.end());
    s.erase(std::remove(s.begin(), s.end(), '\r'), s.end());
    s.erase(std::remove(s.begin(), s.end(), '\f'), s.end());
    return s;
}

int main ()
{
    string str1; // Ex: Papper1pancil2pan3.
    string str2; // Ex: pa
    
    cout << "Function: Find substring withing the full text string regardless the letter is uppercase or lowercase." << endl;
    
    while (str1.empty() || str2.empty()) {
        cout << "Please enter the full text string: " << endl;
        getline(cin, str1);
        cout << "Please enter the substring: " << endl;
        getline(cin, str2);
    }
    
    // clean the input string
    str1 = cleanString(str1);
    str2 = cleanString(str2);
    
    // convert the string to uppercase,
    // to allow find substring regardless of the letter is Upper or Lower case.
    str1 = toUpperCase(str1);
    str2 = toUpperCase(str2);
    
    findString(str1, str2);
    
    return 0;
}
