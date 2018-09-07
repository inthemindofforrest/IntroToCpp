#include <iostream>
#include "Televisions.h"
#include "PiggyBank.h"
#include "ServerBrowserService.h"

using namespace std;


void printLocalServers(ServerInfo * StartArray, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Server: " << i + 1 << endl;
		cout << "Players: " << StartArray[i].currentPlayerCount << "/" << StartArray[i].maxPlayers << endl;
		cout << "Region: " << StartArray[i].regionID << endl;
		cout << "Ping: " << StartArray[i].ping << endl;
		cout << endl;
	}
}

int main()
{
	bool TeleLoop = true;
	bool PiggyLoop = true;
	bool ServerLoop = false;
	int UserInput;
	ServerInfo LocalServers[50];

	Televisions Television;
	DigitalPiggyBank Bank{};
	ServerBrowserService MainServer;

	ServerInfo Server1 = { 0,3,100,42 };
	ServerInfo Server2 = { 0,100,100,52 };
	ServerInfo Server3 = { 1,100,100,34 };
	ServerInfo Server4 = { 1,13,100,72 };
	ServerInfo Server5 = { 2,0,100,53 };



	while (!TeleLoop)
	{
		cout << "Would you like to:" << endl;
		cout << "1) Get Volume" << endl;
		cout << "2) Get Channel" << endl;
		cout << "3) Raise Volume" << endl;
		cout << "4) Lower Volume" << endl;
		cout << "5) Raise Channel" << endl;
		cout << "6) Lower Channel\n" << endl;
		cout << "7) Power down" << endl;
		cin >> UserInput;

		switch (UserInput)
		{
		case 1:
			system("CLS");
			cout << "Channel: " << Television.channel() << endl;
			break;
		case 2:
			system("CLS");
			cout << "Channel: " << Television.volume() << endl;
			break;
		case 3:
			Television.increaseVolume();
			break;
		case 4:
			Television.decreaseVolume();
			break;
		case 5:
			Television.increaseChannel();
			break;
		case 6:
			Television.decreaseChannel();
			break;
		case 7:
			TeleLoop = true;
			break;
		default:
			continue;
			break;
		}

	}
	while (!PiggyLoop)
	{
		system("CLS");
		cout << "Welcome to the Piggy Bank. What action would you like to do?" << endl;
		cout << "1) Get Balance" << endl;
		cout << "2) Deposit" << endl;
		cout << "3) Withdrawl all" << endl;
		cin >> UserInput;

		switch (UserInput)
		{
		case 1:
			Bank.balance();
			break;
		case 2:
			system("PAUSE");
			cout << "Deposit Amount: ";
			cin >> UserInput;
			Bank.deposit((float)UserInput);
			break;
		case 3:
			cout << "You have withdrawed: $" << Bank.withdraw() << endl;
		default:
			break;
		}
	}
	while (!ServerLoop)
	{
		MainServer.registerServer(Server1);
		MainServer.registerServer(Server2);
		MainServer.registerServer(Server3);
		MainServer.registerServer(Server4);
		MainServer.registerServer(Server5);

		//MainServer.printServers();
		int temp = MainServer.getServers(LocalServers, 50, 50, 50, 0, true, true);
		printLocalServers(LocalServers, temp);
		system("PAUSE");
	}


	return 0;
}