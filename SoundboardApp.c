#include <stdio.h>
#include <Windows.h>
#include <math.h>

//Start of Austin's Application

////////////////////////////////////////
//									  //
//	    Author: Austin Ritchie		  //
//		   Class: ITT-310			  //
//		   Date: 10/12/2021			  //
//                                    //
//                                    //
///////////////////////////////////////


int soundChoice; // integer used to store a number 1-5 for the song choice 
int playSoundAgain = 1;    // integer used to set the value to play another sound when prompted
int playCalcAgain = 1;    // integer used to set the value to calculate another problem when prompted
int programChoice;		  // integer used to set the value for which program the user wants to use
int firstNum;		  // integer used to store the first number inputted by the user for Calculator
int secondNum;		  // integer used to store the second number inputted by the user for Calculator
int equationChoice; // Integer used to set the value for which equation choice
float answer; // float to store the answer to the equation given

int mainMenu(void)
{
	do
	{
		printf("                        *******************************************************************\n");
		printf("                                              Welcome to Austin's Program!\n ");
		printf("                                                 Current Version: 1.2\n");
		printf("                                  At the moment there are 2 programs that can be used!\n");           //Welcome Menu for Main Menu
		printf("                                               1.) Austin's Soundboard\n");
		printf("                                               2.) Austin's Calculator\n");
		printf("                        *******************************************************************\n\n");
		printf("Which program would you like to use?(1-2)(3 to Exit Program): ");
		scanf_s("%d", &programChoice);

		if (programChoice == 1) // If user inputs a '1' it will go to soundBoardMenu function      
			soundBoardMenu();  
		                            
		if (programChoice == 2) // If user inputs a '2' it will go to calculatorMenu function    
			calculatorMenu();

		if (programChoice == 3) // If user inputs a '3' it will exit the program 
			return 0;


	} while (playSoundAgain == 2 || playCalcAgain == 2); // If a user inputs a '2' in either application it will return them to the main menu
}

int main(void) 
{
	mainMenu(); // When program is opened, call function mainMenu
}
	
int soundBoardMenu(void)
{
	printf("                        *******************************************************************\n");
	printf("                                          Welcome to Austin's Soundboard!\n");						 ///////////////////////////////////////////////////////
	printf("                                          1.) Windows XP Startup Sound\n");						    //                                                   //
	printf("                                       2.) Windows XP Critical Stop Sound\n");						//           Welcome Menu for Soundboard             //
	printf("                                            3.) Windows XP Tada Sound\n");							//        the list of sounds to choose from          //
	printf("                                        4.) Windows XP Notification Sound\n");						//  (The Spacing is to center the text in console)   //
	printf("                                          5.) Windows XP Chimes Sounds\n");						    //                                                   //
	printf("                       *******************************************************************\n\n");	///////////////////////////////////////////////////////
	sound();
}

int sound(void)
{
	do //this is the start of the loop for the Soundboard. if a user decides to play another song it will start back here
	{
		printf("What sound effect would you like to hear? (1-5): "); //Prompts the user to pick a sound with the associated number

		scanf_s("%d", &soundChoice); //scans the number the user chose
																							   ////////////////////////////////////////////////////////////////////////////////////////
		while (soundChoice < 1)                                                                //                                                                                    //
		{                                                                                      //  This 'while' statement detects if the number entered in was less than 1.          //
			printf("That is not a valid sound option. Please enter again! (1-5): ");           //  If the number was less than 1 it will repromt the user asking for a valid number  //
			scanf_s("%d", &soundChoice);                                                       //                                                                                    //
		}                                                                                      ////////////////////////////////////////////////////////////////////////////////////////

		while (soundChoice > 5)                                                                //////////////////////////////////////////////////////////////////////////////////////////
		{                                                                                      //                                                                                      //
			printf("That is not a valid sound option. Please enter again! (1-5): ");           //  This 'while' statement detects if the number entered in was greater than 5.         //
			scanf_s("%d", &soundChoice);                                                       //  If the number was greater than 5 it will repromt the user asking for a valid number //
		}                                                                                      //                                                                                      //
																							   //////////////////////////////////////////////////////////////////////////////////////////
		if (soundChoice == 1)
			PlaySound(TEXT("startup.wav"), NULL, SND_FILENAME | SND_SYNC);  //if the number inputted was '1' it will play this sound which is associated with 1.


		if (soundChoice == 2)
			PlaySound(TEXT("critical.wav"), NULL, SND_FILENAME | SND_SYNC); //if the number inputted was '2' it will play this sound which is associated with 2.


		if (soundChoice == 3)
			PlaySound(TEXT("tada.wav"), NULL, SND_FILENAME | SND_SYNC); //if the number inputted was '3' it will play this sound which is associated with 3.


		if (soundChoice == 4)
			PlaySound(TEXT("notify.wav"), NULL, SND_FILENAME | SND_SYNC); //if the number inputted was '4' it will play this sound which is associated with 4.


		if (soundChoice == 5)
			PlaySound(TEXT("chimes.wav"), NULL, SND_FILENAME | SND_SYNC); //if the number inputted was '5' it will play this sound which is associated with 5.


																						///////////////////////////////////////////////////////////////////////////////
		               																	//                                                                           //
		printf("Do you want to play another sound? (1 = Yes/ 2 = Back to Main Menu): ");//        Prompts the user if they would like to play another sound          //
		scanf_s("%d", &playSoundAgain);													//	If the user inputs a 1 it will go back to the beginning of the 'do' loop // 
																						//			If the user inputs a 2 it will go back to the main menu			 //
	} while (playSoundAgain == 1);														///////////////////////////////////////////////////////////////////////////////
}
int calculatorMenu(void)
{
	printf("                        *******************************************************************\n");        ///////////////////////////////////////////////////////
	printf("                                      Welcome to Austin's Quick Calculator!\n");						//				Welcome Menu for Calculator          //
	printf("                              This program is very simple. First choose the equation\n");				//			And the simple instructions for use      //
	printf("                       type you are wanting to calculate than follow the prompts from there!\n");       ///////////////////////////////////////////////////////
	calculatorOperation();
}
int calculatorOperation(void)
{
	do //this is the start of the loop for the calculator. if a user decides to do another calculation it will start back here
	{
		printf("                        *******************************************************************\n");    ////////////////////////////////////////////////////////////////
		printf("                        *                         Calculation Types                       *\n");    //                                                            //
		printf("                        *           [1] Addition                    [2] Subtraction       *\n");    //            Calculation Types Menu for Calculator           //
		printf("                        *           [3] Multiplication              [4] Division          *\n");    //          Each Type is assigned a number between 1-6        //
		printf("                        *           [5] Square Root                 [6] Squared           *\n");    //                                                            //
		printf("                        *                                                                 *\n");    ///////////////////////////////////////////////////////////////
		printf("                        *******************************************************************\n");    

		printf("Which Calculation Type would you like to use? (1-6): "); // Prompts the user for an input between (1-6)
		scanf_s("%d", &equationChoice); //scans the equation the user chose

																							   ////////////////////////////////////////////////////////////////////////////////////////
		while (equationChoice < 1)                                                             //                                                                                    //
		{                                                                                      //  This 'while' statement detects if the number entered in was less than 1.          //
			printf("That is not a valid calculation option. Please enter again! (1-6): ");     //  If the number was less than 1 it will repromt the user asking for a valid number  //
			scanf_s("%d", &equationChoice);                                                    //                                                                                    //
		}                                                                                      ////////////////////////////////////////////////////////////////////////////////////////

		while (equationChoice > 5)                                                             //////////////////////////////////////////////////////////////////////////////////////////
		{                                                                                      //                                                                                      //
			printf("That is not a valid calculation option. Please enter again! (1-6): ");     //  This 'while' statement detects if the number entered in was greater than 5.         //
			scanf_s("%d", &equationChoice);                                                    //  If the number was greater than 5 it will repromt the user asking for a valid number //
		}                                                                                      //                                                                                      //
																							   //////////////////////////////////////////////////////////////////////////////////////////


		if (equationChoice == 1)
		{
			printf("What is your first number?: "); // Prompts User for an integer
			scanf_s("%d", &firstNum); //scans for the first number the user inputted
			printf("What is your second number?: ");
			scanf_s("%d", &secondNum); //scans for the second number the user inputted
			answer = firstNum + secondNum; // answer is set to this operation
			printf("Answer: %d + %d = %.1f\n", firstNum, secondNum, answer); // Prints the Answer of the calculation
			playCalc(NULL); // call the playCalc Function
		}

		else if (equationChoice == 2)
		{
			printf("What is your first number?: "); // Prompts User for an integer
			scanf_s("%d", &firstNum); //scans for the first number the user inputted
			printf("What is your second number?: "); // Prompts User for an integer
			scanf_s("%d", &secondNum); //scans for the second number the user inputted
			answer = firstNum - secondNum; // answer is set to this operation
			printf("Answer: %d - %d = %.1f\n", firstNum, secondNum, answer); // Prints the Answer of the calculation
			playCalc(NULL); // call the playCalc Function
		}

		else if (equationChoice == 3)
		{
			printf("What is your first number?: "); // Prompts User for an integer
			scanf_s("%d", &firstNum); //scans for the first number the user inputted
			printf("What is your second number?: "); // Prompts User for an integer
			scanf_s("%d", &secondNum); //scans for the second number the user inputted
			answer = firstNum * secondNum; // answer is set to this operation
			printf("Answer: %d * %d = %.1f\n", firstNum, secondNum, answer); // Prints the Answer of the calculation
			playCalc(NULL); // call the playCalc Function
		}

		else if (equationChoice == 4)
		{
			printf("What is your first number?: "); // Prompts User for an integer
			scanf_s("%d", &firstNum); //scans for the first number the user inputted
			printf("What is your second number?: "); // Prompts User for an integer
			scanf_s("%d", &secondNum); //scans for the second number the user inputted
			answer = (float)firstNum / (float)secondNum; // answer is set to this operation
			printf("Answer: %d / %d = %.1f\n", firstNum, secondNum, answer); // Prints the Answer of the calculation
			playCalc(NULL); // call the playCalc Function
		}

		else if (equationChoice == 5)
		{
			printf("What is the number you want to find the square root of?: "); // Prompts User for an integer
			scanf_s("%d", &firstNum); //scans for the first number the user inputted
			answer = sqrt(firstNum); // answer is set to this operation
			printf("Answer: Square root of %d = %.1f\n", firstNum, answer); // Prints the Answer of the calculation
			playCalc(NULL); // call the playCalc Function
		}

		else if (equationChoice == 6)
		{
			printf("What is the number you would like to square?: "); // Prompts User for an integer
			scanf_s("%d", &firstNum); //scans for the first number the user inputted
			answer = firstNum * firstNum; // answer is set to this operation
			printf("Answer: %d Squared = %.1f\n", firstNum, answer); // Prints the Answer of the calculation
			playCalc(NULL); // call the playCalc Function
		}
				
	} while (playCalcAgain == 1); // If a user inputs '1' it will start this do while loop again.
}
		int playCalc(void)
		{
			printf("Would you like to do another calculation? (1 = Yes / 2 = Back to Main Menu): "); // Prompts the user if they would like to do another calculation
			scanf_s("%d", &playCalcAgain); //Scans the user input if they would like to do another calculation or go back to main menu
		}

