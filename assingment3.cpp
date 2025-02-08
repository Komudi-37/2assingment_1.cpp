//3) string manupulation
#include <iostream>
#include <cctype>
#include <unordered_map>
using namespace std;
int is_palindrome(string str) {
    int left = 0, right = str.length() - 1;
    
    while (left < right) {
        while (left < right && str[left] == ' ') left++;
        while (left < right && str[right] == ' ') right--;
        
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

void countCharacterFrequency(string str) {
    unordered_map<char, int> freq;
    
    for (char ch : str) {
        if (isalpha(ch)) {  
            freq[tolower(ch)]++;
        }
    }
    cout << "Character Frequencies (Case-Insensitive):\n";
    for (auto it : freq) {
        cout << "'" << it.first << "': " << it.second << endl;
    }
}

void replaceVowels(string &str, char replacement) {
    string vowels = "aeiouAEIOU";
    
    for (char &ch : str) {
        if (vowels.find(ch) != string::npos) {
            ch = replacement;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (is_palindrome(str)) {
        cout << "The string is a palindrome!\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }
    countCharacterFrequency(str);
    replaceVowels(str, '*');
    cout << "String after replacing vowels with '*': " << str << endl;

    return 0;
}

