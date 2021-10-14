#include <stdio.h>
#include <Windows.h>

//Start of Soundboard Application

////////////////////////////////////////
//									  //
//	    Author: Austin Ritchie		  //
//		   Class: ITT-310			  //
//		   Date: 10/12/2021			  //
//                                    //
//                                    //
///////////////////////////////////////
	
int main(void)
{
	printf("                                      Welcome to Austin's Soundboard!\n");       ///////////////////////////////////////////////////////
	printf("                                       1.) Windows XP Startup Sound\n");         //                                                   //
	printf("                                    2.) Windows XP Critical Stop Sound\n");      //       Welcome Menu for users and displays         //
	printf("                                         3.) Windows XP Tada Sound\n");          //        the list of sounds to choose from          //
	printf("                                     4.) Windows XP Notification Sound\n");      //  (The Spacing is to center the text in console)   //
	printf("                                       5.) Windows XP Chimes Sounds\n\n");       //                                                   //
																							 ///////////////////////////////////////////////////////
	sound(NULL);
}

int sound(void)
{
	int soundChoice; // integer used to store a number 1-5 for the song choice 
	int playAgain = 1;    // integer used to set the value to play another sound when prompted  

	do //this is the start of the loop if a user decides to play another song it will start back here
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
		printf("Do you want to play another sound? (1 = Yes/ 2 = No): ");       //        Prompts the user if they would like to play another sound          //
			scanf_s("%d", &playAgain);                                          // If the user inputs a 1 it will go back to the beginning of the 'do' loop  // 
																				//   If the user inputs anything else the program will stopand terminate     //
	} while(playAgain == 1);                                                    //                                                                           //                                                                                                                                                 //
 }                                                                              ///////////////////////////////////////////////////////////////////////////////