// Farhana Sultana 
// farhana.sultana79@myhunter.cuny.edu
// Csci 235
// project 1

#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;


class Book
{
private:
	string title;
	string author;
	int pageCount;
	bool digitallyAvailable;

public:
	/**
	 Default constructor.
	 Default-initializes all private members. Booleans are default-initialized to False.
  */
	Book();


	/**
	   Parameterized constructor.
	   @param      : The title of the book (a string)
	   @param      : The author of the book (a string)
	   @param      : The number of pages in the book (a positive int)
	   @param      : A flag indicating whether the book is in digital form (a Boolean),
					 with default value False
	   @post       : The private members are set to the values of the corresponding parameters.
	 */
	Book(string title, string author, int numPages, bool digitallyAvailable = false);
	
	
	/**
   @param  : the title of the Book
   @post   : sets the Book's title to the value of the parameter
 */
	void setTitle(const string& title);
	/**
	 @return : the title of the Book
  */
	string getTitle() const;
	
	/**
	@param  : the name of the author of the Book
	@post   : sets the Book's author to the value of the parameter
  */
	void setAuthor(const string& author);
	
	/**
	  @return : the author of the Book
   */
	string getAuthor() const;
	
	/**
   @param  : a positive integer page count
   @pre    : page count > 0 - books cannot have a negative number of pages
   @post   : sets the page count to the value of the parameter
 */
	void setPageCount(const int numPages);
	/**
	  @return : the page count
   */
	int getPageCount() const;

	/**
  @post   : sets the digital flag to true
 */
	void setDigital();
	bool isDigital() ;

};