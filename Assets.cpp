#include<iostream>

using namespace std;

class Asset_info // Asset_info Class
{
	private:
		float landAsset;
		float bankAsset;
		float carAsset;
		float totalAsset;
		char name[50];
	
	public:
		Asset_info(): landAsset(0), bankAsset(0), carAsset(0), totalAsset(0) {}
		
		void enterData(int n) // Method for getting values from user
		{
			cout << "Please enter values for person " << n << ":" << endl;
			cout << "Enter value Name: ";
			cin >> name;
			cout << "Enter value for land asset: ";
			cin >> landAsset;
			cout << "Enter value for bank asset: ";
			cin >> bankAsset;
			cout << "Enter value for car asset: ";
			cin >> carAsset;
			cout << endl;
		}
		
		float computeTotalAsset() // Method for computing total assets
		{
			totalAsset = landAsset + bankAsset + carAsset;
		}
		
		void printData()
		{
			cout << "Total asset for " << name << " is " << totalAsset << endl;
		}
};

main()
{
	Asset_info a1; // 1st Asset_info Object
	Asset_info a2; // 2nd Asset_info Object
	
	a1.enterData(1);
	a2.enterData(2);
	a1.computeTotalAsset();
	a2.computeTotalAsset();
	a1.printData();
	a2.printData();
}
