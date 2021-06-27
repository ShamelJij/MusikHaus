#include <iostream>
using namespace std;


class Musikinstrument
{
	string kategorie;
	string name;
public:
	Musikinstrument(const string& name, const string& kategorie)
		: name{ name }//, kategorie{ kategorie }
	{
		set_kategorie(kategorie);
	}
	
	string get_kategorie()
	{
		return kategorie;
	}
	string get_name()
	{
		return name;
	}
	
	void set_kategorie(const string& kategorie)
	{
		if (kategorie == "Schlaginstrument" || kategorie == "Saiteninstrument" || kategorie == "Blasinstrument" || kategorie == "Tasteninstrument")
		{
			this->kategorie = kategorie;
		}
		else
		{
			this->kategorie = "kein Instrument";
		}
	}
	
};

int main()
{
	Musikinstrument yamaha("gitarre", "Saiteninstrument");

	cout << yamaha.get_kategorie() << endl;
	cout << yamaha.get_name() << endl;

}
