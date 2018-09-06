#include "ServerBrowserService.h"



// Registers a server with the service
bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	if (serverCount <= 50)
	{
		servers[serverCount] = newServer;
		serverCount++;
		return true;
	}
	else
		return false;
}

// Copies server entries into the given array.
// Returns the total number of servers provided to the array.
int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize, int MaxResults, 
	int PingLimit, int RegionSpecifier, bool AllowEmpty, bool AllowFull)
{
	int i = 0;
	for (; (i < dstSize && i < MaxResults); i++)
	{
		if (servers[i].ping < PingLimit && servers[i].regionID == RegionSpecifier)
		{
			if(AllowEmpty && servers[i].currentPlayerCount < servers[i].maxPlayers)
				dstArray[i] = servers[i];
			if(AllowFull && servers[i].currentPlayerCount >= servers[i].maxPlayers)
				dstArray[i] = servers[i];
		}
			
	}
	return i;
}
void ServerBrowserService::printServers()
{
	for (int i = 0; i < 50; i++)
	{
		cout << "Server: " << i + 1 << endl;
		cout << "Players: " << servers[i].currentPlayerCount << "/" << servers[i].maxPlayers << endl;
		cout << "Region: " << servers[i].regionID << endl;
		cout << "Ping: " << servers[i].ping << endl;
		cout << endl;
	}
}