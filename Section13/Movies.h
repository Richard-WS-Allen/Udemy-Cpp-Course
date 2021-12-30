#ifndef MOVIES_H
#define MOVIES_H

#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> movieList;
    std::string allowedRatings[6] {
        "G", "PG", "PG-13", "R", "NC-17", "N/A"
        };
public:
    Movies();
    ~Movies();
    
    /**
     * @brief Returns success or failure message. Adds movie to list of movies.
     * @param name - Name of movie to add
     * @param mpaaRating - Must be G, PG, PG-13, NC-17, or N/A to
     *      add movie succesfully
     * @param watchCount - Count of number of times movie has been watched.
     * @return 
     */
    std::string addMovie( std::string name, std::string mpaaRating = "N/A", int watchCount = 0 );
    
    /**
     * @brief Increments watch count for given movie name by 1.
     * @param name - Name of movie to increment watch count for.
     * @return 
     */
    bool incrementWatchCount( std::string name );
    
    /**
     * @brief Sets new rating to movie with given name. Returns false if movie not found.
     * @param name - Name of movie.
     * @param rating - New MPAA rating.
     * @return 
     */
    bool setMovieRating( std::string name, std::string rating );
    
    /**
     * @brief Sets watch count to movie with given name. Returns false if movie not found.
     * @param name - Name of movie.
     * @param watched - New watch count.
     * @return 
     */
    bool setMovieWatchCount( std::string name, int watched );
    
    /**
     * @brief Displays list of movies, ratings, and watch counts.
     */
    void displayMovies() const;

};

#endif // MOVIES_H
