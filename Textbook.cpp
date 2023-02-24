// Farhana Sultana 
// farhana.sultana79@myhunter.cuny.edu
// Csci 235
// project 2

#include "TextBook.hpp"

TextBook::TextBook(std::string title, std::string author, int page_count, std::string subject,
	bool is_digital, grade_level grade, bool has_review_questions) :Book(title, author, page_count, is_digital)
{
	setSubject(subject);
	setGradeLevel(grade);
	has_review_questions_ = has_review_questions;	
}

/**
	@param  : a reference to a string representing the the subject of the book
	@post   : sets the private member variable to the value of the parameter
**/
void TextBook::setSubject(const std::string& subject)
{
	subject_ = subject;
}

/**
	@return  : the subject of the textbook
**/
std::string TextBook::getSubject() const
{
	return subject_;
}

/**
	@param  : a reference to a grade_level
	@post   : sets the private member variable to the value of the parameter
**/
void TextBook::setGradeLevel(grade_level grade)
{
	grade_ = grade;
}

/**
	@return  : a string representative of the grade_level
			(e.g. if the grade level is JUNIOR_HIGH,
			it returns "JUNIOR HIGH")
**/
grade_level TextBook::getGradeLevel() const
{
	return grade_;
}

/**
	@post   : sets the review question flag to True
**/
void TextBook::setReviewQuestions(bool flag)
{
	has_review_questions_ = flag;
}

/**
	@return  : the flag indicating if the texbook has review questions
**/
bool TextBook::checkReviewQuestions()
{
	return has_review_questions_;
}
