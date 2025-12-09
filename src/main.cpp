#include <iostream>

int main()
{
	int c,r,moves=0;
	bool endGame;
	char player = 'X';
	char board[3][3] =
	{
		' ', ' ', ' ',
		' ', ' ', ' ',
		' ', ' ', ' '
	};
	while (endGame == false)
	{
		for(int i = 0; i < 3; i++)
		{
			std::cout << std::endl;
			for(int j = 0; j < 3; j++)
			{
				std::cout << " | " << board[i][j];
			}
			std::cout << " | "<< std::endl;
			
		}
		if(moves >= 9)
		{
			endGame = true;
			break;
		}
		std::cout << "Current player is player" << player << std::endl;
		std::cout << "Enter your move" << std::endl;
		std::cin >> r >> c;
		if(board[r][c] != ' ' || r < 0 || r > 2 || c < 0 || c > 2)
		{
			std::cout << "Invalid move!" << std::endl;
			continue;
		}
		else
		{
			board[r][c] = player;
		}
		for(int r = 0; r < 3; r++)
		{
			if(board[r][0] != ' ' && board[r][0] == board[r][1] && board[r][1] == board[r][2])
			{
				std::cout << "Congrats Player " << player << " wins" << std::endl;
				moves = 10;
			}
		}
		for(int c = 0; c < 3; c++)
		{
			if(board[0][c] != ' ' && board[0][c] == board[1][c] && board[1][c] == board[2][c])
			{
				std::cout << "Congrats Player " << player << " wins" << std::endl;
				moves = 10;
			}
		}
		if(board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
		{
			std::cout << "Congrats Player " << player << " wins" << std::endl;
			moves = 10;
		}
		if(board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
		{
			std::cout << "Congrats Player " << player << " wins" << std::endl;
			moves = 10;
		}
		player = (player == 'X') ? 'O' : 'X';
		
		moves++;
	}
	return 0;
}
