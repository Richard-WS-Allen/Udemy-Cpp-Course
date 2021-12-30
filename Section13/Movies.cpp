#include "Movies.h"
#include <iostream>

Movies::Movies()
{
}

Movies::~Movies()
{
}

std::string Movies::addMovie( std::string name, std::string mpaaRating, int watchCount ){
    bool acceptedRating = false;
    std::string returnMessage;
    
    for( std::string s : allowedRatings ){
        if( s == mpaaRating )
            acceptedRating = true;
    }
    if( !acceptedRating ){
        returnMessage = "Movie rating not in acceptable format.\n";
        returnMessage += "Can be left blank if unknown.\n";
        returnMessage += "Or, must be one of the following:\n";
        returnMessage += "G, PG, PG-13, R, or NC-17.\n\n";
        return returnMessage;
    }
    
    for( const Movie &m : movieList ){
        if( m.getName() == name ){
            returnMessage += "Movie already in movie list. Can not add duplicates.\n";
            return returnMessage;
        }
    }
    
    returnMessage = "Succesfully added ";
    returnMessage += name;
    returnMessage += " to movie list.\n";
    Movie movie { name, mpaaRating, watchCount };
    movieList.push_back( movie );
    return returnMessage;
    
}

bool Movies::incrementWatchCount( std::string name ){
    for( Movie &m : movieList ){
        if( m.getName() == name ){
            m.incrementWatchCount();
            return true;
        }
    }
    return false;
}


bool Movies::setMovieRating( std::string name, std::string rating ){
    for( std::string s : allowedRatings ){
        if( s == rating ){
            for( Movie &m : movieList ){
                if( m.getName() == name ){
                    m.setRating( rating );
                    return true;
                }
            }
        }
    }
    return false;
}

bool Movies::setMovieWatchCount( std::string name, int watched ){
    for( Movie &m : movieList ){
        if( m.getName() == name ){
            m.setWatchCount( watched );
            return true;
        }
    }
    return false;
}

void Movies::displayMovies() const{
    std::cout << "==================================================" << std::endl;
    std::cout << "Movie\t\t\tRating\tWatchCount" << std::endl;
    std::cout << "==================================================" << std::endl;

    for( const Movie &m : movieList ){
        std::cout << m.getName() << "\t";
        std::cout << m.getRating() << "\t";
        std::cout << m.getWatchCount() << std::endl;
    }
    std::cout << "==================================================" << std::endl;
}