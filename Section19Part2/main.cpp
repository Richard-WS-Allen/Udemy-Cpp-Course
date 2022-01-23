#include <fstream>
#include <iostream>
#include <iomanip>

int main()
{
    // Input file stream
    std::string file_name {"responses.txt"};
    std::ifstream in_file{file_name};
    
    if(!in_file){
        // Depending on where program is ran from, this may be necessary
        // to check above directory
        in_file = std::ifstream{"../" + file_name};
        if(!in_file){
            std::cerr << "There was an error opening the file" << std::endl;
            return 1;
        }
    }
    
    // Answer key
    std::string correct_answers{};
    in_file >> correct_answers;
    
    // Header
    std::cout << std::setw(15) << std::left << "Student"
        << std::setw(15) << std::right << "Score" << std::endl;
    
    std::cout << std::setw(30) << std::setfill('-') << "" << std::endl;
    
    std::cout << std::setfill(' ');
    
    // Score tracking variables
    std::string name, answers;
    int total_score = 0;
    int student_count = 0;
    
    // Get student name and responses
    while(in_file >> name >> answers){
        
        int score = 0;
        
        std::cout << std::setw(15) << std::left << name;
        
        // Compare answers
        for(size_t i=0; i<answers.size() && i<correct_answers.size(); i++){
            if(answers[i] == correct_answers[i])
                score++;
        }
        // Increment variables
        total_score += score;
        student_count++;
        
        std::cout << std::setw(15) << std::right << score << std::endl;

    }
    
    std::cout << std::setfill('-') << std::setw(30) << "" << std::endl;
    
    // Average score (footer)
    if(student_count>0)
        std::cout << std::setfill(' ') << std::setw(15) << std::left <<
            "Average score" << std::setw(15) << std::right <<
            std::fixed << std::setprecision(1) << 
            static_cast<double>(total_score)/student_count << std::endl;
    else
        std::cerr << "No student scores" << std::endl;
    
    in_file.close();
    
    return 0;
}