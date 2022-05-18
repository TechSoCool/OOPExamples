#include <iostream>
#include<list>
using namespace std;

class YoutubeChannel {
	// attributes
	public: // public access modifier
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
};

int main() 
{

	YoutubeChannel ytChannel;
	ytChannel.Name = "DadWhoCodes";
	ytChannel.OwnerName = "Sterling G";
	ytChannel.SubscribersCount = 200;
	ytChannel.PublishedVideoTitles = { "Code Takeover" };

	cout << "Name: " << ytChannel.Name << endl;
	cout << "Owner Name: " << ytChannel.OwnerName << endl;
	cout << "SubsrcibersCount: " << ytChannel.SubscribersCount << endl;
	cout << "Videos: " << endl;
	for (string VideoTitle : ytChannel.PublishedVideoTitles) {
		cout << VideoTitle << endl;
	}



	system("pause");
}