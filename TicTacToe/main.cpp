#include<iostream>
#include<array>
#include<string>
using namespace std;

array<char, 10> board{'0','1','2','3','4','5','6','7','8','9'};
char inputX = 'X';
char inputO = 'O';

void runGame();
void initializeBoard();
void ifInvalid();
void cellOccupied();
int checkWin();

int main()
{
	runGame();

	return 0;
}

void initializeBoard()
{
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << endl;
	cout << "     |     |     " << endl << endl;
}

void runGame()
{
	int j;
	int k;
	initializeBoard();
	int i = 1;
	do
	{
	label:
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9)
		{
			cout << "X's turn" << endl;
			cout << "Choose a number: ";
			cin >> j;
			if (j >= 10)
			{
				ifInvalid();
				goto label;
			}
			else if (j < 1)
			{
				ifInvalid();
				goto label;
			}
			else if (j == 1 && board[1] == '1')
				board[1] = inputX;
			else if (j == 2 && board[2] == '2')
				board[2] = inputX;
			else if (j == 3 && board[3] == '3')
				board[3] = inputX;
			else if (j == 4 && board[4] == '4')
				board[4] = inputX;
			else if (j == 5 && board[5] == '5')
				board[5] = inputX;
			else if (j == 6 && board[6] == '6')
				board[6] = inputX;
			else if (j == 7 && board[7] == '7')
				board[7] = inputX;
			else if (j == 8 && board[8] == '8')
				board[8] = inputX;
			else if (j == 9 && board[9] == '9')
				board[9] = inputX;
			else if (board[j] == 'X')
			{
				cellOccupied();
				goto label;
			}
			else if (board[j] == 'O')
			{
				cellOccupied();
				goto label;
			}
		}
		else if (i == 2 || i == 4 || i == 6 || i == 8)
		{
			cout << "O's turn" << endl;
			cout << "Choose a number: ";
			cin >> j;
			if (j >= 10)
			{
				ifInvalid();
				goto label;
			}
			else if (j < 1)
			{
				ifInvalid();
				goto label;
			}
			else if (j == 1 && board[1] == '1')
				board[1] = inputO;
			else if (j == 2 && board[2] == '2')
				board[2] = inputO;
			else if (j == 3 && board[3] == '3')
				board[3] = inputO;
			else if (j == 4 && board[4] == '4')
				board[4] = inputO;
			else if (j == 5 && board[5] == '5')
				board[5] = inputO;
			else if (j == 6 && board[6] == '6')
				board[6] = inputO;
			else if (j == 7 && board[7] == '7')
				board[7] = inputO;
			else if (j == 8 && board[8] == '8')
				board[8] = inputO;
			else if (j == 9 && board[9] == '9')
				board[9] = inputO;
			else if (board[j] == 'X')
			{
				cellOccupied();
				goto label;
			}
			else if (board[j] == 'O')
			{
				cellOccupied();
				goto label;
			}
		}
		initializeBoard();
		i++;
	    k = checkWin();
		if (k != -1)
		{
			break;
		}
	}while (i < 10);

	if (i == 9 && k == -1)
	{
		cout << "It is a tie" << endl;
	}
}

void ifInvalid()
{
	cout << endl;
	cout << "Invalid number" << endl;
	cout << endl;
}

void cellOccupied()
{
	cout << endl;
	cout << "Cell occupied" << endl;
	cout << endl;
}

int checkWin()
{
	if (board[1] == board[2] && board[2] == board[3])
	{
		if (board[1] == 'X')
		{
			cout << "X won" << endl;
			return 0;
		}
		else if (board[1] == 'O')
		{
			cout << "O won" << endl;
			return 0;
		}
	}
	else if (board[4] == board[5] && board[5] == board[6])
	{
		if (board[4] == 'X')
		{
			cout << "X won" << endl;
			return 0;
		}
		else if (board[4] == 'O')
		{
			cout << "O won" << endl;
			return 0;
		}
	}
	else if (board[7] == board[8] && board[8] == board[9])
	{
		if (board[7] == 'X')
		{
			cout << "X won" << endl;
			return 0;
		}
		else if (board[7] == 'O')
		{
			cout << "O won" << endl;
			return 0;
		}
	}
	else if (board[1] == board[4] && board[4] == board[7])
	{
		if (board[1] == 'X')
		{
			cout << "X won" << endl;
			return 0;
		}
		else if (board[1] == 'O')
		{
			cout << "O won" << endl;
			return 0;
		}
	}
	else if (board[2] == board[5] && board[5] == board[8])
	{
		if (board[2] == 'X')
		{
			cout << "X won" << endl;
			return 0;
		}
		else if (board[2] == 'O')
		{
			cout << "O won" << endl;
			return 0;
		}
	}
	else if (board[3] == board[6] && board[6] == board[9])
	{
		if (board[3] == 'X')
		{
			cout << "X won" << endl;
			return 0;
		}
		else if (board[3] == 'O')
		{
			cout << "O won" << endl;
			return 0;
		}
	}
	else if (board[1] == board[5] && board[5] == board[9])
	{
		if (board[1] == 'X')
		{
			cout << "X won" << endl;
			return 0;
		}
		else if (board[1] == 'O')
		{
			cout << "O won" << endl;
			return 0;
		}
	}
	else if (board[3] == board[5] && board[5] == board[7])
	{
		if (board[3] == 'X')
		{
			cout << "X won" << endl;
			return 0;
		}
		else if (board[3] == 'O')
		{
			cout << "O won" << endl;
			return 0;
		}
	}
	else
	{
		return -1;
	}
}