#ifndef TEXT_BOOK_HPP
#define TEXT_BOOK_HPP
#include "Book.hpp"
#include <string>

enum grade_level
{
	NONE, ELEMENTARY, JUNIOR_HIGH, HIGH_SCHOOL, COLLEGE
};

class TextBook :public Book {
public:

	/**
	  Default constructor.
	  Default-initializes all private members.
	*/
	TextBook() = default;
	
	/**
	  Parameterized constructor.
	  @param     : The title of the book (a string)
	  @param     : The author of the book (a string)
	  @param     : The number of pages in the book (a positive integer)
	  @param     : The subject of the book (a string)
	  @param     : A flag indicating whether the book is in digital form
					with DEFAULT VALUE False (a Boolean)
	  @param     : The grade level of the book (of type grade_level)
					with DEFAULT VALUE NONE
	  @param     : A boolean to indicate whether the book has review
					questions with DEFAULT VALUE False
	  @post      : The private members are set to the values of the
					corresponding parameters.
	*/

	TextBook(std::string title, std::string author, int page_count, std::string subject, 
		bool is_digital = false, grade_level grade = NONE, bool has_review_questions = false);
	/**
	  @param  : a reference to a string representing the the subject of the book
	  @post   : sets the private member variable to the value of the parameter
	**/
	void setSubject(const std::string& subject);

	/**
		@return  : the subject of the textbook
	**/
	std::string getSubject() const;
	

	/**
		@param  : a reference to a grade_level
		@post   : sets the private member variable to the value of the parameter
	**/
	void setGradeLevel(grade_level grade);
		

	/**
		@return  : a string representative of the grade_level
				(e.g. if the grade level is JUNIOR_HIGH,
				it returns "JUNIOR HIGH")
	**/
	grade_level getGradeLevel() const;
		

	/**
		@post   : sets the review question flag to True
	**/
	void setReviewQuestions(bool flag);


	/**
		@return  : the flag indicating if the texbook has review questions
	**/
	bool checkReviewQuestions();

	
private:

	std::string subject_;
	grade_level grade_;
	bool has_review_questions_;
};

#endif
