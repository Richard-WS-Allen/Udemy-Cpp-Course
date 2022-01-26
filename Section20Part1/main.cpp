// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <chrono>

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    /*
    // Using deque
    std::deque<char> d;
    for(char c : s){
        if(std::isalpha(c))
            d.push_back(std::toupper(c));
    }
    char c1{};
    char c2{};
    while(d.size() > 1){
        c1 = d.front();
        c2 = d.back();
        if(c1 != c2)
            return false;
        d.pop_back();
        d.pop_front();
    }
    return true;
    */
    // Checking in place
    auto it = s.begin();
    // Using end() for std::distance in while loop
    // instead of rbegin() which gives compilation error in distance()
    // distance can only compare iterators, not iterator and reverse iterator
    auto itr = s.end() - 1;
    while(std::distance(it,itr) > 0){
        // Both alpha
        if(std::isalpha(*it) && std::isalpha(*itr)){
            if(std::toupper(*it) != std::toupper(*itr)){
                return false;
            }
            it++;
            itr--;
        }
        // Only it is alpha, decrement itr
        else if(std::isalpha(*it)){
            itr--;
        }
        // Only itr is alpha, inc it
        else {
            it++;
        }
    }
    // Exited loop, must be a palindrome
    return true;
    
}

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    
    auto runtime = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start);
    std::cout << "Runtime: " << runtime.count();
    std::cout << std::endl;
    return 0;
}