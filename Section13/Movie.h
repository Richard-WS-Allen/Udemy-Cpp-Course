#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie
{
private:
    std::string movieName;
    std::string mpaaRating;
    int watchCount;
public:
    Movie( std::string name, std::string rating, int watched );
    ~Movie();
    
    // Setters
    void setRating( std::string rating );
    void setWatchCount( int watched );
    void incrementWatchCount();
    
    // Getters
    std::string getRating() const;
    int getWatchCount() const;
    std::string getName() const;
};

#endif // MOVIE_H
