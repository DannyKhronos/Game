#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int gameDiff;
const int humanLifeDiffOne = 500;
const int humanLifeDiffTwo = 300;
const int humanLifeDiffThree = 200;

struct entity
{
	string Name;
	int Life;
	int Defense;
	int Attack;
};

entity Human{ "Human", 0, 0, 0 };
entity Zombie{ "Zombie", 0, 0, 0 };
entity Goblin{ "Goblin", 0, 0, 0 };

void addAttack(entity name, int x){
	if (x > 0)
	{
		name.Attack += x;

		//HUMAN
		if (gameDiff == 1 && name.Name == "Human" && name.Attack > 50) //LVL 1
		{
			name.Attack = 50;
		}
		else if (gameDiff == 2 && name.Name == "Human" && name.Attack > 30) //LVL 2
		{
			name.Attack = 30;
		}
		else if (gameDiff == 3 && name.Name == "Human" && name.Attack > 20) //LVL 3
		{
			name.Attack = 20;
		}


		//GOBLIN
		if (gameDiff == 1 && name.Name == "Goblin" && name.Attack > 10) //LVL 1
		{
			name.Attack = 00;
		}
		else if (gameDiff == 2 && name.Name == "Goblin" && name.Attack > 15) //LVL 2
		{
			name.Attack = 15;
		}
		else if (gameDiff == 3 && name.Name == "Goblin" && name.Attack > 25) //LVL 3
		{
			name.Attack = 25;
		}

		//ZOMBIE
		if (gameDiff == 1 && name.Name == "Zombie" && name.Attack > 10) //LVL 1
		{
			name.Attack = 10;
		}
		else if (gameDiff == 2 && name.Name == "Zombie" && name.Attack > 20) //LVL 2
		{
			name.Attack = 20;
		}
		else if (gameDiff == 3 && name.Name == "Zombie" && name.Attack > 30) //LVL 3
		{
			name.Attack = 30;
		}
		cout << "\n[!] Attack of " << name.Name << " is now " << name.Attack << ". (+" << x << " Attack.)";
	}
	else
	{
		system("color a");
		system("cls");
		cout << "ERR_WRONG_VAL_01\n\n\n[!] Wrong value of x.";
		Sleep(3000);
	}
}
void getAttacked(entity name, int x){
	if (x > 0)
	{
		name.Life -= x;
		if (name.Life >= 0)
		{
			cout << "\n\n" << name.Name << " is dead.";
		}
		else
		{
			cout << "\n[!] Life of " << name.Name << " is now " << name.Life << ". (-" << x << " life.)";
		}
	}
	else
	{
		system("color a");
		system("cls");
		cout << "ERR_WRONG_VAL_01\n\n\n[!] Wrong value of x.";
		Sleep(3000);
	}
}
void addDefense(entity name, int x){
	if (x > 0)
	{
		name.Defense += x;

		//HUMAN
		if (gameDiff == 1 && name.Name == "Human" && name.Defense > 50) //LVL 1
		{
			name.Defense = 50;
		}
		else if (gameDiff == 2 && name.Name == "Human" && name.Defense > 30) //LVL 2
		{
			name.Defense = 30;
		}
		else if (gameDiff == 3 && name.Name == "Human" && name.Defense > 20) //LVL 3
		{
			name.Defense = 20;
		}


		//GOBLIN
		if (gameDiff == 1 && name.Name == "Goblin" && name.Defense > 5) //LVL 1
		{
			name.Defense = 5;
		}
		else if (gameDiff == 2 && name.Name == "Goblin" && name.Defense > 10) //LVL 2
		{
			name.Defense = 10;
		}
		else if (gameDiff == 3 && name.Name == "Goblin" && name.Defense > 15) //LVL 3
		{
			name.Defense = 15;
		}

		//ZOMBIE
		if (gameDiff == 1 && name.Name == "Zombie" && name.Defense > 10) //LVL 1
		{
			name.Defense = 10;
		}
		else if (gameDiff == 2 && name.Name == "Zombie" && name.Defense > 20) //LVL 2
		{
			name.Defense = 20;
		}
		else if (gameDiff == 3 && name.Name == "Zombie" && name.Defense > 30) //LVL 3
		{
			name.Defense = 30;
		}
		cout << "\n[!] Defense of " << name.Name << " is now " << name.Defense << ". (+" << x << " Defense.)";
	}
	else
	{
		system("color a");
		system("cls");
		cout << "ERR_WRONG_VAL_01\n\n\n[!] Wrong value of x.";
		Sleep(3000);
	}
}
void addLife(entity name, int x){
	if (x > 0)
	{
		name.Life += x;

		//HUMAN
		if (gameDiff == 1 && name.Name == "Human" && name.Life > 500) //LVL 1
		{
			name.Life = 500;
		}
		else if (gameDiff == 2 && name.Name == "Human" && name.Life > 300) //LVL 2
		{
			name.Life = 300;
		}
		else if (gameDiff == 3 && name.Name == "Human" && name.Life > 200) //LVL 3
		{
			name.Life = 200;
		}

		//GOBLIN
		if (gameDiff == 1 && name.Name == "Goblin" && name.Life > 60) //LVL 1
		{
			name.Life = 60;
		}
		else if (gameDiff == 2 && name.Name == "Goblin" && name.Life > 75) //LVL 2
		{
			name.Life = 75;
		}
		else if (gameDiff == 3 && name.Name == "Goblin" && name.Life > 90) //LVL 3
		{
			name.Life = 90;
		}

		//ZOMBIE
		if (gameDiff == 1 && name.Name == "Zombie" && name.Life > 100) //LVL 1
		{
			name.Life = 100;
		}
		else if (gameDiff == 2 && name.Name == "Zombie" && name.Life > 120) //LVL 2
		{
			name.Life = 120;
		}
		else if (gameDiff == 3 && name.Name == "Zombie" && name.Life > 150) //LVL 3
		{
			name.Life = 150;
		}
		cout << "\n[!] Life of " << name.Name << " is now " << name.Life << ". (+" << x << " Life.)";
	}
	else
	{
		system("color a");
		system("cls");
		cout << "ERR_WRONG_VAL_01\n\n\n[!] Wrong value of x.";
		Sleep(3000);
	}
}

void tryEscapeTwo(int x)
{
	int numberEscape = rand() % 1 + 3;
	cout << "\n\nYou have 1/3 chance to escape.";
	if (numberEscape == x)
	{
		cout << "\n\nRolling the dice...";
		cout << "\n\nYou escaped from the monster!\n\you are now walking in the forest...";
		int chooseFunc = rand() % 1 + 2;
		if (chooseFunc == 1)
		{
			cout << "\n\nEnd of program.";
			Sleep(10000);
		}
		else if (chooseFunc == 2)
		{
			cout << "\n\nEnd of program.";
			Sleep(10000);
		}
		else
		{
			cout << "\n\nEnd of program.";
			Sleep(10000);
		}
	}
	else
	{
		cout << "\n\nEnd of program.";
		Sleep(10000);
	}
}

void fightMonsterFour()
{
	cout << "\n\n[!] A wild Zombie appeared! What do you want to do?\n\n\tAttack / atk\n\tTry to escape / esc\n\tSee the stats / stats\n\n>> ";
	string whatToDo;
	cin >> whatToDo;
	if (whatToDo == "atk")
	{
		cout << "\n\nWIP";
		Sleep(10000);
	}
	else if (whatToDo == "esc")
	{
		cout << "\n\nChoose a number between 1 and 3 to escape.\n\n>> ";
		int escNumber;
		cin >> escNumber;
		tryEscapeTwo(escNumber);
	}
	else if (whatToDo == "stats")
	{
		cout << "\n\t[STATS]\n\n You\n Life: " << Human.Life << "\n Attack: " << Human.Attack << "\n Defense: " << Human.Defense << "\n\n Zombie\n Life: " << Zombie.Life << "\n Attack: " << Zombie.Attack << "\n Defense: " << Zombie.Defense << "\n\nType \"esc\" or \"atk\".\n\n>> ";
		string whatToDoTwo;
		cin >> whatToDoTwo;
		if (whatToDoTwo == "esc")
		{
			cout << "\n\nChoose a number between 1 and 3 to escape.\n\n>> ";
			int escNumber;
			cin >> escNumber;
			tryEscapeTwo(escNumber);
		}
		else if (whatToDoTwo == "atk")
		{
			cout << "\n\nWIP";
			Sleep(10000);
		}
		else
		{
			cout << "\n\nWrong values.";
		}
		Sleep(10000);
	}
}
void fightMonsterThree()
{
	cout << "\n\n[!] A wild Zombie appeared! What do you want to do?\n\n\tAttack / atk\n\tTry to escape / esc\n\tSee the stats / stats\n\n>> ";
	string whatToDo;
	cin >> whatToDo;
	if (whatToDo == "atk")
	{
		cout << "\n\nWIP";
		Sleep(10000);
	}
	else if (whatToDo == "esc")
	{
		cout << "\n\nChoose a number between 1 and 3 to escape.\n\n>> ";
		int escNumber;
		cin >> escNumber;
		tryEscapeTwo(escNumber);
	}
	else if (whatToDo == "stats")
	{
		cout << "\n\t[STATS]\n\n You\n Life: " << Human.Life << "\n Attack: " << Human.Attack << "\n Defense: " << Human.Defense << "\n\n Zombie\n Life: " << Zombie.Life << "\n Attack: " << Zombie.Attack << "\n Defense: " << Zombie.Defense << "\n\nType \"esc\" or \"atk\".\n\n>> ";
		string whatToDoTwo;
		cin >> whatToDoTwo;
		if (whatToDoTwo == "esc")
		{
			cout << "\n\nChoose a number between 1 and 3 to escape.\n\n>> ";
			int escNumber;
			cin >> escNumber;
			tryEscapeTwo(escNumber);
		}
		else if (whatToDoTwo == "atk")
		{
			cout << "\n\nWIP";
			Sleep(10000);
		}
		else
		{
			cout << "\n\nWrong values.";
		}
		Sleep(10000);
	}
}

void tryEscape(int x){
	int numberEscape = rand() % 1 + 3;
	cout << "\n\nYou have 1/3 chance to escape.";
	if (numberEscape == x)
	{
		cout << "\n\nRolling the dice...";
		cout << "\n\nYou escaped from the monster!\n\you are now walking in the forest...";
		int chooseFunc = rand() % 1 + 2;
		if (chooseFunc == 1)
		{
			fightMonsterThree();
		}
		else if (chooseFunc == 2)
		{
			fightMonsterFour();
		}
		else
		{
			cout << "\n\n[!] Wrong values.";
		}
	}
	else
	{
		cout << "\n\nRolling the dice...";
		Sleep(1000);
		cout << "\n\nYou didn't escaped... You're gonna need to fight the monster!";
		cout << "\n\nWIP";
		Sleep(10000);
	}
}

void fightMonsterOne()
{
	cout << "\n\n[!] A wild Zombie appeared! What do you want to do?\n\n\tAttack / atk\n\tTry to escape / esc\n\tSee the stats / stats\n\n>> ";
	string whatToDo;
	cin >> whatToDo;
	if (whatToDo == "atk")
	{
		cout << "\n\nWIP";
		Sleep(10000);
	}
	else if (whatToDo == "esc")
	{
		cout << "\n\nChoose a number between 1 and 3 to escape.\n\n>> ";
		int escNumber;
		cin >> escNumber;
		tryEscape(escNumber);
	}
	else if (whatToDo == "stats")
	{ 
		cout << "\n\t[STATS]\n\n You\n Life: " << Human.Life << "\n Attack: " << Human.Attack << "\n Defense: " << Human.Defense << "\n\n Zombie\n Life: " << Zombie.Life << "\n Attack: " << Zombie.Attack << "\n Defense: " << Zombie.Defense << "\n\nType \"esc\" or \"atk\".\n\n>> ";
		string whatToDoTwo;
		cin >> whatToDoTwo;
		if (whatToDoTwo == "esc")
		{
			cout << "\n\nChoose a number between 1 and 3 to escape.\n\n>> ";
			int escNumber;
			cin >> escNumber;
			tryEscape(escNumber);
		}
		else if (whatToDoTwo == "atk")
		{
			cout << "\n\nWIP";
			Sleep(10000);
		}
		else
		{
			cout << "\n\nWrong values.";
		}
		Sleep(10000);
	}
}
void fightMonsterTwo()
{
	cout << "\n\n[!] A wild Goblin appeared! What do you want to do?\n\n\tAttack / atk\n\tTry to escape / esc\n\tSee the stats / stats\n\n>> ";
	string whatToDo;
	cin >> whatToDo;
	if (whatToDo == "atk")
	{
		cout << "\n\nWIP";
		Sleep(10000);
	}
	else if (whatToDo == "esc")
	{
		cout << "\n\nChoose a number between 1 and 3 to escape.\n\n>> ";
		int escNumber;
		cin >> escNumber;
		tryEscape(escNumber);
	}
	else if (whatToDo == "stats")
	{
		cout << "\n\t[STATS]\n\n You\n Life: " << Human.Life << "\n Attack: " << Human.Attack << "\n Defense: " << Human.Defense << "\n\n Zombie\n Life: " << Goblin.Life << "\n Attack: " << Goblin.Attack << "\n Defense: " << Goblin.Defense << "\n\nType \"esc\" or \"atk\".\n\n>> ";
		string whatToDoTwo;
		cin >> whatToDoTwo;
		if (whatToDoTwo == "esc")
		{
			cout << "\n\nChoose a number between 1 and 3 to escape.\n\n>> ";
			int escNumber;
			cin >> escNumber;
			tryEscape(escNumber);
		}
		else if (whatToDoTwo == "atk")
		{
			cout << "\n\nWIP";
			Sleep(10000);
		}
		else
		{
			cout << "\n\nWrong values.";
			Sleep(1000);
		}
		Sleep(10000);
	}
}

void beginFight()
{
	system("cls");
	system("color c");
	system("title Fighting monsters...");
	cout << "\n\nWelcome to the battle!";
	Sleep(500);
	cout << "\n\nJust type \"help\" for help.\n\n";
	Sleep(1000);
	srand((int)time(0));
	int monsterOne = rand() % 1 + 2;
	if (monsterOne == 1)
	{
		fightMonsterOne();
	}
	else if (monsterOne == 2)
	{
		fightMonsterTwo();
	}
}

void fight()
{
	system("cls");
	cout << "\n\n\t\t\t [Fight]\n\n\tWelcome to the fight console. First, type your name.\n\n[FC]>> ";
	string playerName;
	cin >> playerName;
	cout << "\n\tNow, choose the difficulty.\n\n\t\tEasy // 1\n\t\tMedium // 2\n\t\tHard // 3\n\n[FC]>> ";
	int difficulty;
	cin >> difficulty;
	if (difficulty == 1)
	{
		srand((int)time(0));
		Human.Life = rand() % 100 + 400;
		Human.Defense = rand() % 10 + 40;
		Human.Attack = rand() % 10 + 40;
		Zombie.Life = rand() % 20 + 80;
		Zombie.Defense = rand() % 5 + 5;
		Zombie.Attack = rand() % 5 + 5;
		Goblin.Life = rand() % 15 + 45;
		Goblin.Defense = rand() % 2 + 3;
		Goblin.Attack = rand() % 5 + 5;
		cout << "\n\n[!] Difficulty set to easy.";
		difficulty = gameDiff;
		Sleep(1500);
		beginFight();
	}
	else if (difficulty == 2)
	{
		srand((int)time(0));
		Human.Life = rand() % 50 + 250;
		Human.Defense = rand() % 10 + 20;
		Human.Attack = rand() % 10 + 20;
		Zombie.Life = rand() % 20 + 100;
		Zombie.Defense = rand() % 10 + 10;
		Zombie.Attack = rand() % 10 + 10;
		Goblin.Life = rand() % 25 + 50;
		Goblin.Defense = rand() % 5 + 5;
		Goblin.Attack = rand() % 5 + 10;
		cout << "\n\n[!] Difficulty set to medium.";
		difficulty = gameDiff;
		Sleep(1500);
		beginFight();
	}
	else if (difficulty == 3)
	{
		srand((int)time(0));
		Human.Life = rand() % 50 + 150;
		Human.Defense = rand() % 10 + 10;
		Human.Attack = rand() % 10 + 10;
		Zombie.Life = rand() % 30 + 120;
		Zombie.Defense = rand() % 10 + 20;
		Zombie.Attack = rand() % 10 + 20;
		Goblin.Life = rand() % 30 + 60;
		Goblin.Defense = rand() % 5 + 10;
		Goblin.Attack = rand() % 10 + 15;
		cout << "\n\n[!] Difficulty set to Hard.";
		difficulty = gameDiff;
		Sleep(1500);
		beginFight();
	}
	else
	{
		system("color a");
		system("cls");
		cout << "ERR_WRONG_VAL_02\n\n\n[!] Wrong value of difficulty.";
		Sleep(3000);
	}
}


int main()
{
	system("title Danny's game");
	cout << " Welcome to the Danny's game! Here you can fight goblins, zombies... Press \"c\" to continue.\n\n[MC]>> ";
	string begin;
	cin >> begin;
	if (begin == "c")
	{
		fight();
	}
	else
	{
		cout << "\nQuitting...";
		system("COLOR a");
		Sleep(1500);
	}
    return 0;
}
