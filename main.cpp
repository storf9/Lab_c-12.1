#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
void readFile(vector<string>& v) {}
void printLines(const vector<string>& v) {
    for (auto& s : v) {
        cout << s << endl;
    }
}

void writeFile(const vector<string>& v) {
    ofstream fout("output.txt");
    for (auto& s : v) {
        fout << s << "\n";
    }
}
int main() {
    vector<string> lines;
    lines.push_back(" ");
    lines.push_back(" ");
    readFile(lines);
    printLines(lines);
    writeFile(lines);

    return 0;
}