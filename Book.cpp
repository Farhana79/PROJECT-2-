// Farhana Sultana 
// farhana.sultana79@myhunter.cuny.edu
// Csci 235
// project 1


#include "Book.hpp"

/**
     Default constructor.
     Default-initializes all private members. Booleans are default-initialized to False.
  */
Book::Book()
{
	title = "";
	author = "";
	pageCount = 0;
	digitallyAvailable = false;
}


/**
   Parameterized constructor.
   @param      : The title of the book (a string)
   @param      : The author of the book (a string)
   @param      : The number of pages in the book (a positive int)
   @param      : A flag indicating whether the book is in digital form (a Boolean),
                 with default value False
   @post       : The private members are set to the values of the corresponding parameters.
 */
Book::Book(string title, string author, int numPages, bool digitallyAvailable)
{
	this->title = title;
	this->author = author;
	this->pageCount = numPages;
	this->digitallyAvailable = digitallyAvailable;
}

/**
	@return : the title of the Book
 */
string Book::getTitle()
{
	return title;
	
}

/**
	@return : the author of the Book
 */
string Book::getAuthor()
{
	return author;
	
}

/**
	@return : the number of pages in the Book
 */
int Book::getPageCount()
{
	return pageCount;
	
}

/**
	@return : a flag indicating whether the Book is in digital form
 */
bool Book::isDigital()
{
	return digitallyAvailable;
}


/**
	@param : the title of the Book
 */
void Book::setTitle(string title)
{
	this->title = title;
	
}

/**
	@param : the author of the Book
 */

void Book::setAuthor(string author)
{
	this->author = author;
}

/**
	@param : the number of pages in the Book
 */
void Book::setPageCount(int numPages)
{
	this->pageCount = numPages;
}

/**
	@param : a flag indicating whether the Book is in digital form
 */
void Book::setDigital()
{
	this->digitallyAvailable = true;
}
