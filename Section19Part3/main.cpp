// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>


int main() {
    
    std::string file_name{"romeoandjuliet.txt"};
    std::ifstream in_file {file_name};
    std::string word;
    
    if(!in_file){
        // Depending on where program is ran from, this may be necessary
        // to check above directory
        in_file = std::ifstream{"../" + file_name};
        if(!in_file){
            std::cerr << "There was an error opening the file" << std::endl;
            return 1;
        }
    }
    
    std::cout << "Enter a word to search for in Romeo and Juliet (case-sensitive): ";
    
    std::cin >> word;
    std::cout << std::endl;
    
    char c;
    int word_count {0};
    std::string curr_word{};
    
    /*
    while(in_file >> curr_word){
        std::size_t found = curr_word.find(word);
        if(found != std::string::npos)
            word_count++;
    }*/
    
    
    OUTER:while(in_file.get(c)){
        // Found first letter, look for whole word
        if(c == word[0]){
            // Check rest of word. Single letter words will not enter loop
            INNER:for(size_t i=1; i<word.size(); i++){
                if(in_file.get(c)){
                    // Not a match, go back to outer loop
                    if(c != word[i]){
                        // Need to start inner search again
                        if(c == word[0]) {
                            goto INNER;
                        }
                        else {
                            goto OUTER;
                        }
                    }
                }
            }
            word_count++;
        }
        
    }
    in_file.close();
    std::cout << word << " found: " << word_count << " times.";
    std::cout << std::endl;
    return 0;
}

