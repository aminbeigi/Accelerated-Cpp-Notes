#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;
using std::streamsize;
using std::numeric_limits;

int main() {
    cout << "This program will count how many distict words there " 
            "are in some a list of strings." 
        << endl
        << "Followed by an end-of-file to exit..." 
        << endl;
    cout << "Enter a word: ";

    vector<string> data;
    typedef vector<string>::size_type vec_sz;
    vec_sz size = data.size();

    string x;
    while (size < 2) {
        while (cin >> x) {
            data.push_back(x);
        }

        size = data.size();
        if (size >= 2) {
            break;
        }

        cout << "Atleast 2 word is required. " << endl;
        data.clear(); 
        //get rid of cin failure state
        cin.clear(); 
        // discard "bad" character(s) 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');        
    }

    string longest_str = data[0];
    string shortest_str = data[0];
    for (int i = 0; i < size; ++i) {
        if (data[i].size() > longest_str.size()) {
            longest_str = data[i];
        }
        if (data[i].size() < shortest_str.size()) {
            shortest_str = data[i];
        }
    }

    cout << "Longest string: " << longest_str << endl;
    cout << "Shortest string: " << shortest_str << endl;
    return 0;
}