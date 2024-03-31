#include "Person.h"
#include <iostream>
#include <format>

using namespace std;
using namespace HR;

int main()
{
	Person person = { "John", "Doe" };
	cout << "The initials of " << person.getFirstName() << " " << person.getLastName() << " are " << person.getInitials() << ".";
    

	Person person2 { "Marc", "Gregoire", "Mg" };
	cout << "The initials of " << person2.getFirstName() << " " << person2.getLastName() << " are " << person2.getInitials() << ".";
    

	Person persons[3];

	// Test copy constructor.
	Person copy { person };

	// Test assignment operator.
	Person otherPerson { "Jane", "Doe" };
	copy = otherPerson;

	// Test comparison operators.
	if (person < person2) { cout << "person < person2" << endl; }
	if (person > person2) { cout << "person > person2" << endl; }
	if (person <= person2) { cout << "person <= person2" << endl; }
	if (person >= person2) { cout << "person >= person2" << endl; }
	if (person == person2) { cout << "person == person2" << endl; }
	if (person != person2) { cout << "person != person2" << endl; }
}
