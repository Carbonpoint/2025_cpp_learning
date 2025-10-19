#include<string>
#include<vector>
struct phonebook_entry
{
	std::string firstname, lastname;
	std::string number;
	std::string address;
	std::string zipcode;
};


std::vector<phonebook_entry> phone_book;

int main()
{
	phonebook_entry alexander = {"Alexander", "Goldman", "+1 (916) 860-9550", "4315 Maricopa Ave. Unit 4", "95628"};
	
	//phonebook_entry saeed = {.lastname{"ab"}, .firstname{"Saeed"}};

	phonebook_entry mobina.firstname = {"Mobina"};
	phonebook_entry mobina.lastname = {"Amrollahi"};
	phonebook_entry mobina.number = {"+1 (515) 715-7865"};
	phonebook_entry mobina.address = {"2706 Kent Ave Unit 2"};
	phonebook_entry mobina.zipcode = {"50010"};
	return 0;
}
