#include "Movie.h"

Movie::Movie( std::string name, std::string rating, int watched )
    : movieName {name}, mpaaRating {rating}, watchCount {watched} {
}

Movie::~Movie()
{
}

// Setters
void Movie::setRating( std::string rating ){ mpaaRating = rating; };
void Movie::setWatchCount( int watched ){ watchCount = watched; }
void Movie::incrementWatchCount(){ watchCount++; }

// Getters
std::string Movie::getRating() const { return mpaaRating; }
int Movie::getWatchCount() const { return watchCount; }
std::string Movie::getName() const { return movieName; }