#include <iostream>
#include <string>
using namespace std;

int index_size(string the_second);
void clean_string(string the_first, string the_second);
int main(){
    string str1;
    string str2;
    cout << "Enter the first string: "; getline(cin,str1);
    cout << "Enter the second string: "; getline(cin, str2);
    clean_string(str1, str2);
}

void clean_string(string the_first, string the_second){
    string temp_word;
    int index_find, first_index, temp_size;
    int size = index_size(the_second);
    for (int i = 0; i <= size; ++i) {

        index_find = the_second.find(' ');
        temp_word = the_second.substr(0, index_find);
        temp_size = temp_word.length();
        the_second.erase(0, index_find + 1);
        first_index= the_first.find(temp_word);

        while(first_index != -1){
            first_index= the_first.find(temp_word);
            if (first_index != -1)
                the_first.erase(first_index, temp_size);
        }
    }
    cout << "Deleted string is: " << the_first;
}

int index_size(string the_second) {
    int size = 0;
    int the_second_size = the_second.length();
    for (int i = 0; i <= the_second_size; ++i) {
        if (the_second[i] == ' ')
            size += 1;
    }
    return size;
}