#include <iostream>

#include "Movies.h"

int main()
{
    // Testing
    Movies movies;
    movies.displayMovies();
    std::cout << movies.addMovie( "The Polar Express" ) << std::endl;
    movies.displayMovies();
    
    std::cout << movies.addMovie( "The Polar Express" ) << std::endl;
    movies.displayMovies();
    
    // Error checking, should get this message, P is not valid
    if( !movies.setMovieRating( "The Polar Express", "P" ) ){
        std::cout << "Could not update rating with given movie and rating" << std::endl;
    } else
        std::cout << "Success" << std::endl;
    
    // Error checking, should not get this message, PG is valid
    if( !movies.setMovieRating( "The Polar Express", "PG" ) ){
        std::cout << "Could not update rating with given movie and rating" << std::endl;
    } else
        std::cout << "Success" << std::endl;
    
    movies.displayMovies();
    
    // Error checking, should not get this message, PG is not valid
    if( !movies.setMovieWatchCount( "The Polar Express", 10 ) ){
        std::cout << "Could not update watch count with given movie and count" << std::endl;
    } else
        std::cout << "Success" << std::endl;
    
    movies.displayMovies();
    
    // Error checking, should not get this message, The Polar Express exists in list
    if( !movies.incrementWatchCount( "The Polar Express" ) ){
        std::cout << "Could not increment watch count for given movie" << std::endl;
    } else
        std::cout << "Success" << std::endl;
    
    // Error checking, should get this message, movie does not exist in list
    if( !movies.incrementWatchCount( "The Polar" ) ){
        std::cout << "Could not update rating with given movie and rating" << std::endl;
    } else
        std::cout << "Success" << std::endl;
    
    movies.displayMovies();
    
    std::cout << movies.addMovie( "Spider Man: No Way Home", "PG-1" ) << std::endl;
    std::cout << movies.addMovie( "Spider Man: No Way Home", "PG-13" ) << std::endl;
    std::cout << movies.addMovie( "Spider Man: Homecoming", "PG-13", 10 ) << std::endl;
    
    movies.displayMovies();
}
