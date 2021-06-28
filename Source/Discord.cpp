#include "stdafx.h"
#include "discord.h"
#include "include/discord_rpc.h"
#include "include/discord_register.h"
#pragma comment(lib, "discord-rpc.lib")

DiscordRichPresence discordPresence;

void UpdatePresence()
{
	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.state = "We are all clowns";
	discordPresence.details = "Using Joker Menu";
	discordPresence.startTimestamp = time(0);
	discordPresence.largeImageKey = "large";
	discordPresence.largeImageText = "mod-menus.com";
	Discord_UpdatePresence(&discordPresence);
}

void Initialize()
{
	DiscordEventHandlers handlers;
	memset(&handlers, 0, sizeof(handlers));
	Discord_Initialize("791383318461415475", &handlers, TRUE, nullptr);
}

void Shutdown()
{
	Discord_Shutdown();
}

void DiscordMain()
{
	Initialize();
	UpdatePresence();
}

DWORD GetProcessId(HANDLE Process)
{
	return 0;
}

