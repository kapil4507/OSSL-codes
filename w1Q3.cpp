#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    cout << "Enter a paragraph:\n";
    string paragraph;
    getline(cin, paragraph);

    map<string, int> frequency;
    string word;
    stringstream ss(paragraph);

    while (ss >> word) {
        frequency[word]++;
    }

    cout << "Word frequencies:\n";
    for (auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
