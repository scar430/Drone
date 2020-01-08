// BossBuster.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This was supposed to be Terraria but being repurposed for Minecraft (12/26/2019)

#include <iostream>
#include <string>
#include <tchar.h>
#include "windows.h"

int main()
{
    std::cout << "Ready!\n";

	// Command loop
	while (1 == 1) {

		// A E S T H E T I C
		// Help break up big blocks of text.
		std::cout << "\n--------------------\n";

		// Help message in case they're a n00b
		std::cout << "\nEnter 'help' for a list of commands.\n";
		// Let them know we're waiting for input.
		std::cout << "Waiting for input ...\n";
		std::cout << "\n";

		// Get the user's input.
		std::string input;
		std::cin >> input;
		
		// Handle the entered command...

		// List commands.
		if (input == "help") {
			std::cout << "\nList of commands :\n'fight' - puts the bot into fight mode.\n";
		}
		
		// Make the bot fight enemies.
		else if (input == "fight") {
			std::cout << "\nYou're seeing this because I haven't finished this.\n";
		}

		else if (input == "debug") {
			std::cout << "\nAttempting debug action...\n";
			try
			{
				/*
				// Find the Terraria window.
				HWND terraria = FindWindow(_T("Terraria: Terrestrial Trouble"), NULL);
				// Set Terraria to be the active window (Please be smart enough to have it running, it wont work otherwise).
				SetForegroundWindow(terraria);
				// Lock Terraria window.
				LockSetForegroundWindow(1);
				*/

				INPUT ip;

				Sleep(5000);

				// Set up a generic keyboard event.
				ip.type = INPUT_KEYBOARD;
				ip.ki.wScan = 0; // hardware scan code for key
				ip.ki.time = 0;
				ip.ki.dwExtraInfo = 0;

				// Press the "A" key
				ip.ki.wVk = 0x41; // virtual-key code for the "a" key
				ip.ki.dwFlags = 0; // 0 for key press
				while (1 == 1) {
					Sleep(1000);
					SendInput(1, &ip, sizeof(INPUT));
				}

				// Release the "A" key
				ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
				SendInput(1, &ip, sizeof(INPUT));

				// This should be last.
				std::cout << "\nSuccessfully completed debug action.\n";
			}
			catch(...){
				std::cout << "\nFailed debug action.\n";
			}
		}

		// Error message.
		else
		{
			std::cout << "\nCould not find that command. Enter 'help' for a list of commands.\n";
		}
	}
}