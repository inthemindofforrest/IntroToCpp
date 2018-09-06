#pragma once
#include <iostream>
using namespace std;
struct ServerInfo
{
	int regionID = 0;             // region
	int currentPlayerCount = 0;   // current player count
	int maxPlayers = 0;           // max player count
	int ping = 0;                 // ping
};


class ServerBrowserService
{
private:
	// An array of all servers registered with the system.
	ServerInfo servers[50]; // note: this is hard-coded for 50 servers

							// A count of all servers currently registered.
	int serverCount = 0;
public:
	// Registers a server with the service
	bool registerServer(ServerInfo newServer);

	// Copies server entries into the given array.
	// Returns the total number of servers provided to the array.
	int getServers(ServerInfo * dstArray, size_t dstSize, int MaxResults,
		int PingLimit, int RegionSpecifier, bool AllowEmpty, bool AllowFull);

	void printServers();

};
