/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, checkWinner)
{
	TicTacToeBoard T;	
	bool check;
	if(T.getWinner() == X || T.getWinner() == O)
	{
		check = true;
	}
	ASSERT_FALSE(check);
}

TEST(TicTacToeBoardTest, toggleTurnOTest)
{
	TicTacToeBoard T;
	ASSERT_TRUE(O == T.toggleTurn());
}

TEST(TicTacToeBoardTest, toggleTurnXTest)
{
	TicTacToeBoard T;
	T.toggleTurn();
	ASSERT_TRUE(X == T.toggleTurn());
}
