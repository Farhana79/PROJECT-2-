// Farhana Sultana 
// farhana.sultana79@myhunter.cuny.edu
// Csci 235
// project 2

#include "Manual.hpp"
#include <regex>


/**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : The name of the device (a string)
  @param     : A flag indicating whether the book is in digital form
				with DEFAULT VALUE False (a Boolean)
  @param     : The URL that is in the format
				'https://www.something.something'
				or 'http://www.something.something'
				with the last 'something' being at least 2 characters
				with DEFAULT VALUE empty string (a string)
  @param     : A Boolean indicating the presence of a visual aid
				with DEFAULT VALUE False
  @post      : The private members are set to the values of the
				corresponding parameters.
				If a URL is provided, the website flag is set to True.
				If the URL is ill-formatted, the website is set to
				empty string and the website flag is set to False.
*/
Manual::Manual(std::string title, std::string author, int page_count, std::string device_name,
	bool is_digital_, std::string website, bool visual_aid) :Book(title, author, page_count, is_digital_)
{
	device_name_ = device_name;
	has_visual_aid_ = visual_aid;
	std::regex pattern("(https?://)?(www\\.)?\\w+\\.\\w{2,}");
	if (std::regex_match(website, pattern)) {
		url_ = website;
		has_website_ = true;
	}
	else {
		has_website_ = false;
		url_ = "";
	}
}

/**
  @param  : a reference to a string representing the device
  @post   : sets the private member variable to the value of the parameter
  */
void Manual::setDevice(const std::string& device_name)
{
	device_name_ = device_name;
}

/**
	@return  : the variable indicating the device the manual is for
**/
std::string Manual::getDevice() const
{
	return device_name_;
	
}

/**
	@param   : a reference to a website link (string) that is in the format
				'https://www.something.something'
				or 'http://www.something.something'
				with the last 'something' being at least 2 characters
	@return  : has_website_ flag (a boolean)
	@post    : If the link is not correctly formatted,
				store "Broken Link" in the link member variable (see <regex>)
				and either way set the has website flag to True
**/
bool Manual::setWebsite(const std::string& website)
{
	std::regex pattern("(https?://)?(www\\.)?\\w+\\.\\w{2,}");
	if (std::regex_match(website, pattern)) {
		url_ = website;
		has_website_ = true;
		return true;
	}
	else {
		url_ = "Broken Link";
	}
	has_website_ = true;
	return has_website_;

	
}

/**
  @return  : the url for the website
**/
std::string Manual::getWebsite() const
{
	return url_;
}

/**
  @param  : a reference to boolean
  @post   : sets the private member variable indicating the presence
			of a visual aid to the value of the parameter
**/
void Manual::setVisualAid(const bool& visual_aid)
{
	has_visual_aid_ = visual_aid;
}

/**
  @return  : the visual aid flag
**/
bool Manual::hasVisualAid() const
{
	return has_visual_aid_;
}

/**
  @return  : the has website flag
  */
bool Manual::hasWebsite() const
{
	return has_website_;
}
