// Farhana Sultana 
// farhana.sultana79@myhunter.cuny.edu
// Csci 235
// project 2

#include "Novel.hpp"

/**
Parameterized constructor.
@param     : The title of the book (a string)
@param     : The author of the book (a string)
@param     : The number of pages in the book (a positive integer)
@param     : The genre of the novel (a string)
@param     : A flag indicating whether the book is in digital form
            with DEFAULT VALUE False (a Boolean)
@param     : A flag indicating whether there is a film adaptation
            for this novel with DEFAULT VALUE False (a Boolean)
*/
Novel::Novel(std::string title, std::string author, int numPages, std::string genre,
    bool digitalForm, bool filmAdaptation) :Book(title, author, numPages, digitalForm){

	genre_ = genre;
	filmAdaptation_ = filmAdaptation;
    averageRating_ = 0;
}

/**
    @return   : the value of the genre private member
**/
std::string Novel::getGenre()
{
	return genre_;
}

/**
    @param  : a reference to string indicating the genre of the book
    @post   : sets genre_ private member to the
                value of the parameter
**/
void Novel::setGenre(const std::string& genre)
{
	genre_ = genre;
}

/**
    @return   : the vector containing the list of characters for this novel
**/
std::vector<std::string> Novel::getCharacterList()
{
	return characters_;
}

/**
@return    : a string of all the characters in the
            character_list_ private member, concatenated
            and separated by a space " " .
            For example: "character1 character2 character3"
**/
std::string Novel::getCharacterListString()
{
    std::string result = "";
	for (int i = 0; i < characters_.size(); i++)
	{
		result += characters_[i];
		if (i != characters_.size() - 1)
		{
			result += " ";
		}
	}
	return result;
}

/**
    @param  : a reference to string indicating a character
    @post   : inserts the character into the character_list_ vector
**/
void Novel::addCharacter(const std::string& character)
{
	characters_.push_back(character);
}


/**
    @return   : the value of the film_adaptation_ private member
**/
bool Novel::hasFilmAdaptation()
{
	return false;
}

/**
    @post   : sets has_film_adaptation_ private member to true
**/
void Novel::setFilmAdaptation(const bool& filmAdaptation)
{
    filmAdaptation_ = filmAdaptation;
}

/**
    @return   : the value of the average rating private member
**/
double Novel::getAverageRating()
{
    return 0.0;
}

/**
    @param    : a reference to floating point number (double) indicating
                the score of the  review
    @param    : a reference to string indicating the rating of the review
    @return   : creates and returns a review data type with
                score and rating as indicated by the parameters
*/
review Novel::createReview(const double& score, const std::string& rating)
{
	review newReview;
	newReview.score_ = score;
	newReview.rating_ = rating;
	return newReview;
    
}

/**
	@param    : a reference to review data type
	@post     : adds the review to the review_list_ vector
*/
void Novel::addReview(const review& review)
{
	reviews_.push_back(review);
}

/**
    @post   : retrieves all scores from the reviews_ vector and
        computes the average to set value of the average_rating_
        private member
**/
void Novel::calculateAverageRating()
{
	double sum = 0;
	for (int i = 0; i < reviews_.size(); i++)
	{
		sum += reviews_[i].score_;
	}
	averageRating_ = sum / reviews_.size();

}

