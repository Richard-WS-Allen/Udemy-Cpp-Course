#include <fstream>
#include <iostream>
#include <iomanip>

int main() {
    // File names
    std::string in_file_name{"romeoandjuliet"};
    std::string out_file_name{in_file_name + "_numbered.txt"};
    //in_file_name += ".txt";
    
    std::ifstream in_file{in_file_name};
    std::ofstream out_file{out_file_name};
    
    // File checking
    if(!in_file){
        // Try above directory
        in_file = std::ifstream{"./" + in_file_name};
        out_file = std::ofstream{"./" + out_file_name};
        if(!in_file){
            std::cerr << "There was a problem with the input file" << std::endl;
            return 1;
        }
    }
    if(!out_file){
        std::cerr << "There was a problem with the output file" << std:: endl;
        return 1;
    }
    
    std::string line{};
    int line_number{1};
    
    while(getline(in_file, line)){
        // line == "" did not work as I expected. Using size check, probably a newline or return character
        // Video solution in course used line == "". Not sure why it did not correctly for me
        if(line == "\r" ) { //|| line == "\n") {
            out_file << std::endl;
        }
        else {
            out_file << std::setw(5) << std::left << line_number++ << line << std::endl;
        }
    }
    in_file.close();
    out_file.close();
    
    return 0;
}
