#include <iostream>
using namespace std;

class HotDogStand {
public:
	HotDogStand();
	HotDogStand(int newID, int newNumSold);

	void setID(int newID);
	int getID();

	void JustSold();
	int getNumSold();

	static int getTotalSold();
private:
	int stand_ID;
	int numSold;
	static int totalSold;

};

int HotDogStand::totalSold = 0;

int main()
{
	HotDogStand s1(1, 0), s2(2, 0), s3(3, 0),s4(4,0);

	s1.JustSold();
	s2.JustSold();
	s2.JustSold();
	s4.JustSold();

	cout << "Stand " << s1.getID() << " sold " << s1.getNumSold()<<endl;
	cout << "Stand " << s2.getID() << " sold " << s2.getNumSold()<<endl;
	cout << "Stand " << s3.getID() << " sold " << s3.getNumSold()<<endl;
	cout << "Stand " << s4.getID() << " sold " << s4.getNumSold()<<endl;
	cout << "Total sold = " << HotDogStand::getTotalSold()<<endl;
	cout << endl;

	s3.JustSold();
	s1.JustSold();
	s3.JustSold();
	s2.JustSold();
	s4.JustSold();

	cout << "Stand " << s1.getID() << " sold " << s1.getNumSold() << endl;
	cout << "Stand " << s2.getID() << " sold " << s2.getNumSold() << endl;
	cout << "Stand " << s3.getID() << " sold " << s3.getNumSold() << endl;
	cout << "Stand " << s4.getID() << " sold " << s4.getNumSold() << endl;
	cout << "Total sold = " << HotDogStand::getTotalSold();
	cout << endl;
	
}
HotDogStand::HotDogStand() : stand_ID(0), numSold(0) {}
HotDogStand::HotDogStand(int newID,int newNumSold) : stand_ID(newID),numSold(newNumSold) {}

void HotDogStand::setID(int newID) {
	stand_ID = newID;
}

int HotDogStand::getID()
{
	return stand_ID;
}

void HotDogStand::JustSold()
{
	numSold++;
	totalSold++;
}
int HotDogStand::getNumSold()
{
	return numSold;
}
int HotDogStand::getTotalSold()
{
	return totalSold;
}