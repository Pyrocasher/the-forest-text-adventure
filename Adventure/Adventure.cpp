// Adventure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "string"
#include "windows.h"
#pragma comment(lib, "winmm.lib")
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



using namespace std;

string choice;
void hillTop();
void forestn();
void tower();
void towers();
void towersw();
void towerd();
void towerf();
void towerr();
void win();
void towerwd();
void forests();
void riverw();
void riverd();
void foreste();
void town();
void townf();
void townw();
void river();
void riverk();
void forestsw();
void forestw();
void forestwd();
void forestd();
void forestsec();
bool fight(string type, int num, int weapon, int attack, int health1, int delay);
void attack();
void timee(int t);
int m = 3;
bool key = false;
int weapon = 0;
bool winc = false;
int health = 100;
double untilNow;
double timeTaken;
int d = 1;
int d1 = 1;
int t = 0;
int start = 1;

int main()
{
	if (start == 1)
	{
		srand(time(NULL));
		start = 0;
		cout << " _____  _              ___                   _   " << endl;
		cout << "/__   \| |__   ___    / __\\__  _ __ ___  ___| |_ " << endl;
		cout << " / /\\/ | '_ \ / _ \\  / _\\/ _ \\| '__/ _ \\/ __| __|" << endl;
		cout << "/ /    | | | |  __/ / / | (_) | | |  __/\\__ \\ |_ " << endl;
		cout << "\\      |_| |_|\___| \\/   \\___/|_|  \\___||___/\\__|" << endl;
		cout << "                                                " << endl;
		cout << "Press the spacebar to continue..." << endl;
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	}

	if (winc == true)
	{
		cout << "B" << endl;
		Sleep(500);
		cout << "Y" << endl;
		Sleep(500);
		cout << " " << endl;
		Sleep(500);
		cout << "J" << endl;
		Sleep(500);
		cout << "O" << endl;
		Sleep(500);
		cout << "S" << endl;
		Sleep(500);
		cout << "H" << endl;
		Sleep(500);
	}
	else
	{
		m = 3;
		key = false;
		weapon = 0;
		winc = false;
		health = 100;
		d = 1;
		d1 = 1;
		t = 0;
		system("cls");
		Sleep(1600);
		cout << "You awaken to find yourself atop a hill, surrounded on all sides by a forest." << endl;
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
		hillTop();
	}
}

bool fight(string type, int num, int weapon, int attack, int health1, int delay)
{
	t++;
	if (weapon == 1)
	{
		d = 4;
	}
	else if (weapon == 2)
	{
		d = 10;
	}

	if (num > 1)
	{
		cout << num << " " << type << "s approach!" << endl << endl;
	}
	else
	{
		cout << num << " " << type << " approaches!" << endl << endl;
	}
	while (!GetAsyncKeyState(VK_SPACE)) {} Sleep(250);
	cout << "Prepare ";
	Sleep(600);
	cout << "for ";
	Sleep(600);
	cout << "a ";
	Sleep(900);
	cout << "D-";
	Sleep(100);
	cout << "D-";
	Sleep(100);
	cout << "D-";
	Sleep(100);
	cout << "D-";
	Sleep(100);
	cout << "DA";
	cout << "A";
	Sleep(90);
	cout << "A";
	Sleep(90);
	cout << "A";
	Sleep(90);
	cout << "A";
	Sleep(90);
	cout << "NCE ";
	Sleep(600);
	cout << "BATTLE!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	Sleep(50);
	cout << "!";
	system("cls");

	while (1)
	{
		Sleep(delay);
		if (GetAsyncKeyState(VK_LEFT))
			cout << "left" << endl;
		if (GetAsyncKeyState(VK_RIGHT))
			cout << "right" << endl;
		if (GetAsyncKeyState(VK_UP))
			cout << "up" << endl;
		if (GetAsyncKeyState(VK_DOWN))
			cout << "down" << endl;
		cout << "You: " << endl;
		for (int count = health; count > 0; count -= 10)
		{
			cout << "[=]";
		}
		cout << endl;
		cout << type << ": " << endl;
		for (int count = health1; count > 0; count -= 10)
		{
			cout << "[=]";
		}
		cout << endl;
		int attack = rand() % 9;
		if (attack == 0)
		{
			cout << "  __         " << endl;
			cout << " / /____     " << endl;
			cout << "/ /_____|    " << endl;
			cout << "\\ \\_____|    " << endl;
			cout << " \\_\\         " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_LEFT)) {}
		}
		else if (attack == 1)
		{
			cout << "     __      " << endl;
			cout << " ____\\ \\     " << endl;
			cout << "|_____\\ \\    " << endl;
			cout << "|_____/ /    " << endl;
			cout << "     /_/     " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_RIGHT)) {}
		}
		else if (attack == 2)
		{
			cout << "    _____    " << endl;
			cout << "   / / \\ \\   " << endl;
			cout << "  / /| |\\ \\  " << endl;
			cout << " / / | | \\ \\ " << endl;
			cout << "/_/  | |  \\_\\ " << endl;
			cout << "     |_|     " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_UP))
			{
				if (GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(VK_SHIFT))
				{
						health1 -= health1 + 1;
				}
			}
		}
		else if (attack == 3)
		{
			cout << "       _       " << endl;
			cout << "      | |      " << endl;
			cout << " __   | |   __ " << endl;
			cout << " \\ \\  | |  / / " << endl;
			cout << "  \\ \\ | | / /  " << endl;
			cout << "   \\ \\| |/ /   " << endl;
			cout << "    \\_|_|_/    " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_DOWN)) {}
		}
		else if (attack == 4)
		{
			cout << "    _____    " << endl;
			cout << "   / / \\ \\   " << endl;
			cout << "  / /| |\\ \\  " << endl;
			cout << " / / | | \\ \\ " << endl;
			cout << "/_/  | |  \\_\\ " << endl;
			cout << "     |_|     " << endl;
			cout << "  __         " << endl;
			cout << " / /____     " << endl;
			cout << "/ /_____|    " << endl;
			cout << "\\ \\_____|    " << endl;
			cout << " \\_\\         " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_UP) && !GetAsyncKeyState(VK_LEFT)) {}
		}
		else if (attack == 5)
		{
			cout << "    _____    " << endl;
			cout << "   / / \\ \\   " << endl;
			cout << "  / /| |\\ \\  " << endl;
			cout << " / / | | \\ \\ " << endl;
			cout << "/_/  | |  \\_\\ " << endl;
			cout << "     |_|     " << endl;
			cout << "     __      " << endl;
			cout << " ____\\ \\     " << endl;
			cout << "|_____\\ \\    " << endl;
			cout << "|_____/ /    " << endl;
			cout << "     /_/     " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_UP) && !GetAsyncKeyState(VK_RIGHT)) {}
		}
		else if (attack == 6)
		{
			cout << "    _____    " << endl;
			cout << "   / / \\ \\   " << endl;
			cout << "  / /| |\\ \\  " << endl;
			cout << " / / | | \\ \\ " << endl;
			cout << "/_/  | |  \\_\\ " << endl;
			cout << "     |_|     " << endl;
			cout << "       _       " << endl;
			cout << "      | |      " << endl;
			cout << " __   | |   __ " << endl;
			cout << " \\ \\  | |  / / " << endl;
			cout << "  \\ \\ | | / /  " << endl;
			cout << "   \\ \\| |/ /   " << endl;
			cout << "    \\_|_|_/    " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_UP) && !GetAsyncKeyState(VK_DOWN)) {}
		}
		else if (attack == 7)
		{
			cout << "  __         " << endl;
			cout << " / /____     " << endl;
			cout << "/ /_____|    " << endl;
			cout << "\\ \\_____|    " << endl;
			cout << " \\_\\         " << endl;
			cout << "       _       " << endl;
			cout << "      | |      " << endl;
			cout << " __   | |   __ " << endl;
			cout << " \\ \\  | |  / / " << endl;
			cout << "  \\ \\ | | / /  " << endl;
			cout << "   \\ \\| |/ /   " << endl;
			cout << "    \\_|_|_/    " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_LEFT) && !GetAsyncKeyState(VK_DOWN)) {}
		}
		else if (attack == 8)
		{
			cout << "  __         " << endl;
			cout << " / /____     " << endl;
			cout << "/ /_____|    " << endl;
			cout << "\\ \\_____|    " << endl;
			cout << " \\_\\         " << endl;
			cout << "     __      " << endl;
			cout << " ____\\ \\     " << endl;
			cout << "|_____\\ \\    " << endl;
			cout << "|_____/ /    " << endl;
			cout << "     /_/     " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_LEFT) && !GetAsyncKeyState(VK_RIGHT)) {}
		}
		else if (attack == 9)
		{
			cout << "       _       " << endl;
			cout << "      | |      " << endl;
			cout << " __   | |   __ " << endl;
			cout << " \\ \\  | |  / / " << endl;
			cout << "  \\ \\ | | / /  " << endl;
			cout << "   \\ \\| |/ /   " << endl;
			cout << "    \\_|_|_/    " << endl;
			cout << "     __      " << endl;
			cout << " ____\\ \\     " << endl;
			cout << "|_____\\ \\    " << endl;
			cout << "|_____/ /    " << endl;
			cout << "     /_/     " << endl;
			untilNow = timeGetTime();
			while (!GetAsyncKeyState(VK_DOWN) && !GetAsyncKeyState(VK_RIGHT)) {}
		}

		timeTaken = timeGetTime() - untilNow;

		system("cls");
		if (timeTaken == 0)
		{
			if (GetAsyncKeyState(VK_LEFT) && GetAsyncKeyState(VK_RIGHT) && GetAsyncKeyState(VK_DOWN) && GetAsyncKeyState(VK_UP))
			{
				for (int count = 0; count < 10; count ++)
					cout << "DON'T CHEAT" << endl;
				if (health > 25)
				{
					health -= 25;
				}
				else
				{
					health = 1;
				}

			}
		}
		else if (timeTaken < 200)
		{
			health1 -= 5 * d;
		}
		else if (timeTaken < 300)
		{
			health1 -= 4 * d;
		}
		else if (timeTaken < 400)
		{
			health1 -= 2 * d;
		}
		else if (timeTaken < 500)
		{
			health1 -= 1 * d;
		}
		else if (timeTaken < 700)
		{
			health -= 1 * attack;
		}
		else if (timeTaken < 850)
		{
			health -= 2 * attack;
		}
		else if (timeTaken < 1000)
		{
			health -= 4 * attack;
		}
		else if (timeTaken >= 1200)
		{
			health -= 6 * attack;
		}

		if (health <= 0)
		{
			system("cls");
			cout << "You have been defeated." << endl;
			Sleep(800);
			cout << "You have be[W.]en killed." << endl;
			Sleep(50);
			cout << "You have been wrecked." << endl;
			Sleep(50);
			cout << "You have been defe[D.]ated." << endl;
			Sleep(50);
			cout << "You are dead." << endl;
			Sleep(50);
			cout << "You have been conquerd." << endl;
			Sleep(50);
			cout << "You have be[G]en killed." << endl;
			Sleep(50);
			cout << "You are no longer breathing." << endl;
			Sleep(50);
			cout << "Whatwhyhow are you?." << endl;
			Sleep(50);
			cout << "You bad at th[A]is." << endl;
			Sleep(50);
			cout << "Why are you ev[S]en reading this?" << endl;
			Sleep(50);
			cout << "Yep, y[T]our dead." << endl;
			Sleep(50);
			cout << "Seriously, don't you have." << endl;
			Sleep(50);
			cout << "Something bet[E]ter to do with." << endl;
			Sleep(50);
			cout << "Your time, your still dead." << endl;
			Sleep(50);
			cout << "Death death dea[R]th death, and dogo." << endl;
			Sleep(50);
			cout << "You have been defeated." << endl;
			Sleep(50);
			cout << "You have a problem." << endl;
			Sleep(50);
			cout << "What are you doing." << endl;
			Sleep(50);
			cout << "downUdownGOdown." << endl;
			Sleep(50);
			system("cls");
			main();
		}
		else if (health1 <= 0)
		{
			cout << "They run for fear of your epic dance moves." << endl;
			health = 150;
			return true;
		}
	}
}

void attack()
{
	cout << "   /+=====>                              <=====+\\ " << endl;
	cout << "  \\ O___                                  ___O /    " << endl;
	cout << "    |                                        |    " << endl;
	cout << "    |                                        |    " << endl;
	cout << "   / \\                                      / \\ " << endl;
	cout << "  /   \\                                    /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                             <=====+\\ " << endl;
	cout << "  \\ O___                                 ___O /    " << endl;
	cout << "    |                                       |    " << endl;
	cout << "    |                                       |    " << endl;
	cout << "   / \\                                     / \\ " << endl;
	cout << "  /   \\                                   /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                            <=====+\\ " << endl;
	cout << "  \\ O___                                ___O /    " << endl;
	cout << "    |                                      |    " << endl;
	cout << "    |                                      |    " << endl;
	cout << "   / \\                                    / \\ " << endl;
	cout << "  /   \\                                  /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                           <=====+\\ " << endl;
	cout << "  \\ O___                               ___O /    " << endl;
	cout << "    |                                     |    " << endl;
	cout << "    |                                     |    " << endl;
	cout << "   / \\                                   / \\ " << endl;
	cout << "  /   \\                                 /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                          <=====+\\ " << endl;
	cout << "  \\ O___                              ___O /    " << endl;
	cout << "    |                                    |    " << endl;
	cout << "    |                                    |    " << endl;
	cout << "   / \\                                  / \\ " << endl;
	cout << "  /   \\                                /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                         <=====+\\ " << endl;
	cout << "  \\ O___                             ___O /    " << endl;
	cout << "    |                                   |    " << endl;
	cout << "    |                                   |    " << endl;
	cout << "   / \\                                 / \\ " << endl;
	cout << "  /   \\                               /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                        <=====+\\ " << endl;
	cout << "  \\ O___                            ___O /    " << endl;
	cout << "    |                                  |    " << endl;
	cout << "    |                                  |    " << endl;
	cout << "   / \\                                / \\ " << endl;
	cout << "  /   \\                              /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                       <=====+\\ " << endl;
	cout << "  \\ O___                           ___O /    " << endl;
	cout << "    |                                 |    " << endl;
	cout << "    |                                 |    " << endl;
	cout << "   / \\                               / \\ " << endl;
	cout << "  /   \\                             /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                      <=====+\\ " << endl;
	cout << "  \\ O___                          ___O /    " << endl;
	cout << "    |                                |    " << endl;
	cout << "    |                                |    " << endl;
	cout << "   / \\                              / \\ " << endl;
	cout << "  /   \\                            /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                     <=====+\\ " << endl;
	cout << "  \\ O___                         ___O /    " << endl;
	cout << "    |                               |    " << endl;
	cout << "    |                               |    " << endl;
	cout << "   / \\                             / \\ " << endl;
	cout << "  /   \\                           /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                    <=====+\\ " << endl;
	cout << "  \\ O___                        ___O /    " << endl;
	cout << "    |                              |    " << endl;
	cout << "    |                              |    " << endl;
	cout << "   / \\                            / \\ " << endl;
	cout << "  /   \\                          /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                   <=====+\\ " << endl;
	cout << "  \\ O___                       ___O /    " << endl;
	cout << "    |                             |    " << endl;
	cout << "    |                             |    " << endl;
	cout << "   / \\                           / \\ " << endl;
	cout << "  /   \\                         /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                  <=====+\\ " << endl;
	cout << "  \\ O___                      ___O /    " << endl;
	cout << "    |                            |    " << endl;
	cout << "    |                            |    " << endl;
	cout << "   / \\                          / \\ " << endl;
	cout << "  /   \\                        /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                 <=====+\\ " << endl;
	cout << "  \\ O___                     ___O /    " << endl;
	cout << "    |                           |    " << endl;
	cout << "    |                           |    " << endl;
	cout << "   / \\                         / \\ " << endl;
	cout << "  /   \\                       /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>                <=====+\\ " << endl;
	cout << "  \\ O___                    ___O /    " << endl;
	cout << "    |                          |    " << endl;
	cout << "    |                          |    " << endl;
	cout << "   / \\                        / \\ " << endl;
	cout << "  /   \\                      /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>               <=====+\\ " << endl;
	cout << "  \\ O___                   ___O /    " << endl;
	cout << "    |                         |    " << endl;
	cout << "    |                         |    " << endl;
	cout << "   / \\                       / \\ " << endl;
	cout << "  /   \\                     /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>              <=====+\\ " << endl;
	cout << "  \\ O___                  ___O /    " << endl;
	cout << "    |                        |    " << endl;
	cout << "    |                        |    " << endl;
	cout << "   / \\                      / \\ " << endl;
	cout << "  /   \\                    /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>             <=====+\\ " << endl;
	cout << "  \\ O___                 ___O /    " << endl;
	cout << "    |                       |    " << endl;
	cout << "    |                       |    " << endl;
	cout << "   / \\                     / \\ " << endl;
	cout << "  /   \\                   /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>            <=====+\\ " << endl;
	cout << "  \\ O___                ___O /    " << endl;
	cout << "    |                      |    " << endl;
	cout << "    |                      |    " << endl;
	cout << "   / \\                    / \\ " << endl;
	cout << "  /   \\                  /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>           <=====+\\ " << endl;
	cout << "  \\ O___               ___O /    " << endl;
	cout << "    |                     |    " << endl;
	cout << "    |                     |    " << endl;
	cout << "   / \\                   / \\ " << endl;
	cout << "  /   \\                 /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>          <=====+\\ " << endl;
	cout << "  \\ O___              ___O /    " << endl;
	cout << "    |                    |    " << endl;
	cout << "    |                    |    " << endl;
	cout << "   / \\                  / \\ " << endl;
	cout << "  /   \\                /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>         <=====+\\ " << endl;
	cout << "  \\ O___             ___O /    " << endl;
	cout << "    |                   |    " << endl;
	cout << "    |                   |    " << endl;
	cout << "   / \\                 / \\ " << endl;
	cout << "  /   \\               /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>        <=====+\\ " << endl;
	cout << "  \\ O___            ___O /    " << endl;
	cout << "    |                  |    " << endl;
	cout << "    |                  |    " << endl;
	cout << "   / \\                / \\ " << endl;
	cout << "  /   \\              /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>       <=====+\\ " << endl;
	cout << "  \\ O___           ___O /    " << endl;
	cout << "    |                 |    " << endl;
	cout << "    |                 |    " << endl;
	cout << "   / \\               / \\ " << endl;
	cout << "  /   \\             /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>      <=====+\\ " << endl;
	cout << "  \\ O___          ___O /    " << endl;
	cout << "    |                |    " << endl;
	cout << "    |                |    " << endl;
	cout << "   / \\              / \\ " << endl;
	cout << "  /   \\            /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>     <=====+\\ " << endl;
	cout << "  \\ O___         ___O /    " << endl;
	cout << "    |               |    " << endl;
	cout << "    |               |    " << endl;
	cout << "   / \\             / \\ " << endl;
	cout << "  /   \\           /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>    <=====+\\ " << endl;
	cout << "  \\ O___        ___O /    " << endl;
	cout << "    |              |    " << endl;
	cout << "    |              |    " << endl;
	cout << "   / \\            / \\ " << endl;
	cout << "  /   \\          /   \\  " << endl << endl;
	Sleep(25);
	system("cls");
	cout << "   /+=====>   <=====+\\ " << endl;
	cout << "  \\ O___       ___O /    " << endl;
	cout << "    |             |    " << endl;
	cout << "    |             |    " << endl;
	cout << "   / \\           / \\ " << endl;
	cout << "  /   \\         /   \\  " << endl << endl;
	Sleep(25);
	system("cls");

}

void timee(int t)
{
	if (t == 5)
	{
		cout << "The sun is now at its highest point." << endl;
	}
	else if (t == 10)
	{
		cout << "The sun is falling below the horizon." << endl;
	}
	else if (t > 10)
	{
		cout << "Darkness has fallen." << endl;
		while (!GetAsyncKeyState(VK_SPACE)) {} Sleep(250);
		cout << "Everything attacks!" << endl;
		while (!GetAsyncKeyState(VK_SPACE)) {} Sleep(250);
		fight("of everything", 1, weapon, 10, 1000, 100);
		cout << "well";
		Sleep(500);
		cout << ", I don't know how you won so....." << endl;
		Sleep(2000);
		cout << "Just die. ";
		Sleep(500);
		cout << "Please." << endl;
		Sleep(500);
		main();
	}
	while (!GetAsyncKeyState(VK_SPACE)) {} Sleep(250);
}

void hillTop()
{
	t++;
	timee(t);
	system("cls");
	cout << "To the <north>, there is a tall tower in the distance." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "To the <south>, a raging river twistes into the distance." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "To the <east>, a spiral of smoke can be observed on the horizon." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "To the <west>, the forest stretches on as far as the eye can see." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "In which direction will you go?" << endl;

	cin >> choice;

	while (1)
	{
		if (choice == "north")
		{
			forestn();
		}
		else if (choice == "south")
		{
			forests();
		}
		else if (choice == "east")
		{
			foreste();
		}
		else if (choice == "west")
		{
			forestw();
		}
		else
		{
			cin >> choice;
		}
	}
}

void forestn()
{
	t++;
	timee(t);
	timee(t);
	system("cls");
	cout << "As the tower looms closer, a cobble path forms in front of you with stone statues of warriors on either side." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Keep going <forward> or turn <back> to the hill?" << endl;
	cin >> choice;

	while (1 == 1)
	{
		if (choice == "forward")
		{
			tower();
		}
		else if (choice == "back")
		{
			hillTop();
		}
		else
		{
			cin >> choice;
		}
	}
}

void forests()
{
	t++;
	timee(t);
	system("cls");
	cout << "As you walk along the river, you realise it begins to curve to the right." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Keep going <forward>, or turn <back>?" << endl;
	cin >> choice;
	while (1 == 1)
	{
		if (choice == "forward")
		{
			forestsw();
		}
		else if (choice == "back")
		{
			hillTop();
		}
		else
		{
			cin >> choice;
		}
	}
}

void forestsw()
{
	t++;
	timee(t);
	system("cls");
	cout << "As the river continues forward, you begin to smell burnt wood and flesh" << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Just as a clearing appears ahead, you feel to hands pushing you into the raging river followed by a string of spanish." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You are suddenly floating torwards the clearing at a much faster rate." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "As you enter the clearing you see a village in the middle, but you can't see much." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Just to the left of the river though, you see a large pile of loot." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "A single key lying close to the river catches your eye." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You snatch it as you fly past." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "As you float back into the forest, you are starting to shiver from the cold." << endl;
	while (!GetAsyncKeyState(VK_SPACE)) {} Sleep(250);
	key = true;
	towerr();
}

void foreste()
{
	t++;
	timee(t);
	system("cls");
	cout << "As the smoke comes closer, the smell of burnt wood and flesh comes to you." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You begin to approach a clearing in the forest." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You see a village, half burned to the ground, with a large pile of burning bodies in the center." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "There is a large group of what look like bandits throwing more bodies into the fire." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "A large pile of loot guarded by three of the bandits on the outskirts of the village." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Passing just a few feet from the loot is a raging river." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You want the treasure.... ALOT." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You probably have a problem." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Do you sneak through the <town>, through the <river>, or <fight>?" << endl;
	cin >> choice;
	while (1 == 1)
	{
		if (choice == "town")
		{
			town();
		}
		else if (choice == "river")
		{
			river();
		}
		else if (choice == "fight")
		{
			townf();
		}
		else
		{
			cin >> choice;
		}
	}
}

void townf()
{
	t++;
	timee(t);
		if (fight("bandit", 3, weapon, 5, 150, 1000))
		{
			cout << "The remaining bandits make a run for it." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "They grab most of the loot in their escape." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Searching the pile of loot by the river, the only thing you can find is a key." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "<take> the key, or <leave> it?" << endl;
			cin >> choice;
			while (1)
			{
				if (choice == "take")
				{
					cout << "You pick up the key off the ground" << endl;
					while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
					key = true;
					townw();
				}
				else if (choice == "leave")
				{
					cout << "You leave the key." << endl;
					while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
					townw();
				}
				else
				{
					cin >> choice;
				}
			}
		}
}

void townw()
{
	t++;
	timee(t);
	cout << "You suddenly hear a laugh with a strange accent from behind you." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Before you can turn around, you feel hands on your back pushing you into the water" << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You plunge into the frigid water, and you are carried away, back into the forest." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	towerr();
}

void town()
{
	t++;
	timee(t);
	system("cls");
	cout << "You begin to army crawl forward torward the town." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You have no cover but the grass, which is about a foot high." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You begin to realise this is a bad idea when you hear alarmed shouts from the town." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Keep <crawling>, or <run> away?" << endl;
	cin >> choice;
	system("cls");
	while (1)
	{
		if (choice == "crawling")
		{
			cout << "Ignoring the shouts, you keep crawling." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Ignoring the arrows wistling past your head, you keep crawling." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Ignoring the sound of pounding feet, you keep crawling." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Ignoring th~~" << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			main();
		}
		else if (choice == "run")
		{
			cout << "You scramble to you feet and break into a sprint torward the treeline." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "You hear the high piched wistle of the arrows flying past your head." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Suddenly your legs don't have the strength to hold you." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "There is a sudden pai~~" << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			main();
		}
		else
		{
			cin >> choice;
		}
	}
}

void river()
{
	t++;
	timee(t);
	cout << "You walk along the treeline torwards the river." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Approaching the river, do you <walk> along it towards the loot, or <float> down it?" << endl;
	cin >> choice;
	system("cls");
	while (1)
	{
		if (choice == "walk")
		{
			riverd();
		}
		else if (choice == "float")
		{
			riverk();
		}
	}
}

void riverk()
{
	t++;
	timee(t);
	system("cls");
	cout << "You jump into the river with a splash." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "The river sends you flying torwards the pile of loot." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "A single key lying close to the river catches your eye." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You snatch it as you fly past." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "As you float back into the forest, you are starting to shiver from the cold." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	key = true;
	towerr();
}

void riverd()
{
	t++;
	timee(t);
	system("cls");
	cout << "You begin to army crawl forward torward the loot." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You have no cover but the grass which is about a foot high." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You begin to realise this is a bad idea when you hear alarmed shouts from the town." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Keep <crawling>, or <run> away?" << endl;
	cin >> choice;
	system("cls");
	while (1)
	{
		if (choice == "crawling")
		{
			cout << "Ignoring the shouts, you keep crawling." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Ignoring the arrows wistling past your head, you keep crawling." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Ignoring the sound of pounding feet, you keep crawling." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Ignoring th~~" << endl;
			main();
		}
		else if (choice == "run")
		{
			cout << "You scramble to you feet and break into a sprint torward the treeline." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "You hear the high piched wistle of the arrows flying past your head." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Suddenly your legs don't have the strength to hold you." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "There is a sudden pai~~" << endl;
			main();
		}
		else
		{
			cin >> choice;
		}
	}
}

void forestw()
{
	t++;
	timee(t);
	system("cls");
	cout << "As you walk into the forest the trees around you get older and closer together." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "They seem to be emenating a strong feeling torward you, staring into your very soul." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Distracted by the trees, you trip over something metal." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You have tripped over a sword." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Do you <take> the sword, or <leave> it?" << endl;
	cin >> choice;
	system("cls");
	while (1)
	{
		if (choice == "take")
		{
			weapon = 1;
			cout << "You pick up the sword at your feet." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "It seems razor sharp." << endl;
			forestwd();
		}
		else if (choice == "leave")
		{
			cout << "You leave the sword where it is." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			forestwd();
		}
		else
		{
			cin >> choice;
		}
	}
}

void forestwd()
{
	t++;
	timee(t);
	system("cls");
	Sleep(2000);
	cout << "Keep going <deeper>, or turn <back>?" << endl;
	cin >> choice;
	while (1 == 1)
	{
		if (choice == "deeper")
		{
			forestd();
		}
		else if (choice == "back")
		{
			hillTop();
		}
		else
		{
			cin >> choice;
		}
	}
}

void forestd()
{
	for (int count = 0; count <= 8; count++)
	{
		if (count == 7)
		{
			cout << "You hear voices singing in the distance using a strange language." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Keep going <deeper>, or turn <back>?" << endl;
			cin >> choice;
		}
		else
		{
			cout << "The feeling of doom continues to grow." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Keep going <deeper>, or turn <back>?" << endl;
			cin >> choice;
		}

		if (choice == "back")
		{
			cout << "You turn around to go back, but the way is blocked." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "A solid wall of trees blocks where there was a path a second earlier." << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "You are completly surrounded" << endl;
			while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
			cout << "Do you <attack> the trees or just <stand> there?" << endl;
			cin >> choice;
			system("cls");
			while (1 == 1)
			{
				if (choice == "attack")
				{
					fight("tree", 10, weapon, 9, 1000, 200);
					weapon = 2;
					cout << "You have tamed the forest." << endl;
					cout << "They carry you back to the hilltop." << endl;
				}
				else if (choice == "stand")
				{
					cout << "They are closing in, closer and closer." << endl;
					while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
					cout << "There isn't enough room, you can't breath, you ca~" << endl;
					main();
				}
				else
				{
					cin >> choice;
				}
			}
		}
		else if (choice != "deeper")
		{
			cin >> choice;
		}
	}
	forestsec();
}

void forestsec()
{
	t++;
	timee(t);
	cout << "You have found the source of the voices." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "There is a circle of skeletons standing in a circle, singing a chorus that everyone knows." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Inside the circle there is a symbol." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << " _           __" << endl;
	Sleep(100);
	cout << "| |         / /" << endl;
	Sleep(100);
	cout << "| |_______ / / " << endl;
	Sleep(100);
	cout << "| |_______/ /" << endl;
	Sleep(100);
	cout << "| |      / /" << endl;
	Sleep(100);
	cout << "| |     / / " << endl;
	Sleep(100);
	cout << "|_|    /_/  " << endl;
	Sleep(2000);
	cout << "You hear a menecing voice wisper in your ear." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "\"W";
	Sleep(100);
	cout << "h";
	Sleep(100);
	cout << "o";
	Sleep(100);
	cout << " ";
	Sleep(100);
	cout << "w";
	Sleep(100);
	cout << "r";
	Sleep(100);
	cout << "o";
	Sleep(100);
	cout << "t";
	Sleep(100);
	cout << "e";
	Sleep(100);
	cout << " ";
	Sleep(100);
	cout << "t";
	Sleep(100);
	cout << "h";
	Sleep(100);
	cout << "i";
	Sleep(100);
	cout << "s";
	Sleep(100);
	cout << " ";
	Sleep(100);
	cout << "s";
	Sleep(100);
	cout << "o";
	Sleep(100);
	cout << "n";
	Sleep(100);
	cout << "g";
	Sleep(100);
	cout << "?\"" << endl;

	cin >> choice;

	if (choice == "nobody")
	{
		weapon = 2;
		cout << "The power of the forest is now yours." << endl;
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
		cout << "The trees carry you back to the hill." << endl;
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
		system("cls");
		hillTop();
	}
	else
	{
		cout << "\"WWRROONNGG\", the voice screams." << endl;
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
		cout << "The forest attacks!" << endl;
		Sleep(1500);
		fight("tree", 10, weapon, 9, 1000, 200);
		cout << "You turn to run but, you find you are surrounded" << endl;
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
		cout << "They are closing in, closer and closer." << endl;
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
		cout << "There isn't enough room, you can't breath, you ca~" << endl;
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
		main();
	}
}

void towerr()
{
	system("cls");
	cout << "Climbing out of the river, you find yourself next to the tower you originally saw." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Approach the <tower>, or go back to the <hill>?" << endl;
	cin >> choice;
	while (1 == 1)
	{
		if (choice == "tower")
		{
			tower();
		}
		else if (choice == "hill")
		{
			hillTop();
		}
		else
		{
			cin >> choice;
		}
	}
}
void tower()
{
	t++;
	timee(t);
	system("cls");
	cout << "As you approach the tower you notice a locked door embedded in the wall." << endl;
	if (key == true)
	{
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
		cout << "Do you <force> open the door, use your <key>, or go <back>?" << endl;

		while (1 == 1)
		{
			cin >> choice;
			if (choice == "force")
			{
				towersw();
			}
			else if (choice == "key")
			{
				towers();
			}
			else if (choice == "back")
			{
				forestn();
			}
			else
			{
				cin >> choice;
			}
		}
	}
	else
	{
		while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
		cout << "Do you <force> open the door or go <back>?" << endl;
		cin >> choice;
		while (1 == 1)
		{
			if (choice == "force")
			{
				towersw();
			}
			else if (choice == "back")
			{
				forestn();
			}
			else
			{
				cin >> choice;
			}
		}
	}
}

void towers()
{
	t++;
	timee(t);
	system("cls");
	cout << "Walking through the open door, you observe a spiral staircase leading up the tower." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Walk up the <staircase> or go <back>?" << endl;
	cin >> choice;
	while (1 == 1)
	{
		if (choice == "staircase")
		{
			towerd();
		}
		else if (choice == "back")
		{
			tower();
		}
		else
		{
			cin >> choice;
		}
	}
}

void towersw()
{
	system("cls");
	cout << "You slam your shoulder three times into the door before it caves inward." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Walking through the broken door, you observe a spiral staircase behind a man in blue robes blocking your path." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "He screams in german and reaches his hand torward you menacingly." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You see a flash of blue, and everything turns black." << endl;
	while (!GetAsyncKeyState(VK_SPACE)) {} Sleep(250);
	main();
}

void towerd()
{
	system("cls");
	cout << "The staircase ends at a wooden door engraved with Japanese symbols." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Open the <door> or turn <back>?" << endl;
	cin >> choice;
	while (1 == 1)
	{
		if (choice == "door")
		{
			towerf();
		}
		else if (choice == "back")
		{
			towers();
		}
	}
}

void towerf()
{
	system("cls");
	cout << "Through the door, you see a man in blue robes and a blue hat doing the \"Harlem Shake\"." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "He seems to be a dance MAAAAAAAAASTER." << endl;
	while (!GetAsyncKeyState(VK_SPACE)) {} Sleep(250);
	cout << "<fight> him or go <back>?" << endl;
	cin >> choice;
	while (1 == 1)
	{
		if (choice == "fight")
		{
			if (fight("wizard", 1, weapon, 10, 250, 800))
			{
				win();
			}
		}
		else if (choice == "back")
		{
			towerd();
		}
		else
		{
			cin >> choice;
		}
	}
}

void towerwd()
{
	system("cls");
	cout << "The man turns around, screaming in portuguese, and reaches his hand torward you menacingly." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You see a flash of blue, and everything turns black." << endl;
	while (!GetAsyncKeyState(VK_SPACE)) {} Sleep(250);
	main();
}

void win()
{
	system("cls");
	cout << "The mans legs are tired, wobbling like jelly." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "He slowly melts into jelly";
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << ", and so does your dream." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "a";
	Sleep(20);
	cout << "n";
	Sleep(20);
	cout << "d";
	Sleep(20);
	cout << " ";
	Sleep(20);
	cout << "e";
	Sleep(20);
	cout << "v";
	Sleep(20);
	cout << "e";
	Sleep(20);
	cout << "r";
	Sleep(20);
	cout << "y";
	Sleep(20);
	cout << "t";
	Sleep(20);
	cout << "h";
	Sleep(20);
	cout << "i";
	Sleep(20);
	cout << "n";
	Sleep(20);
	cout << "g";
	Sleep(20);
	cout << " ";
	Sleep(20);
	cout << "w";
	Sleep(20);
	cout << "e";
	Sleep(20);
	cout << "n";
	Sleep(20);
	cout << "t";
	Sleep(20);
	cout << " ";
	Sleep(20);
	cout << "b";
	Sleep(20);
	cout << "l";
	Sleep(20);
	cout << "a";
	Sleep(20);
	cout << "c";
	Sleep(20);
	cout << "k";
	Sleep(20);
	cout << ".";
	Sleep(60);
	system("cls");
	Sleep(8000);
	cout << "You awaken in your bed, staring at the cot above you, where your brother sleeps." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Your clock reads 5:30, almost time to get up." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "Everything is already packed, you're moving in the morning." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	cout << "You're not sad, you only hope that moving far away will make the nightmares stop." << endl;
	while (!GetAsyncKeyState(VK_SPACE)){} Sleep(250);
	winc = true;
	system("cls");
	main();
}
























































































































































































































































































































































//cout << hex << "67-65-65-65-74-74-74-74-74-74-74-20-64-75-6E-6B-65-64-20-6F-6E-21-21-21" << endl;





























































































































































































































































































































































































































































































































































































































//cout << hex << "75-6E-64-65-72-74-61-6C-65-20-48-59-50-45" << endl;






































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































//cout << hex << "53-61-6E-73-3A" << endl;
//cout << hex << "4D-65-67-61-6C-6F-76-61-6E-69-61" << endl;




















































































































































































































































































































































































































































































//Hey! What are you doing snooping around!
//You might find something you'll regret.
