/*
Zachary Stockman
COP2000 6:35-9:00pm
10-17-17
Description: HW3A
A program that outputs a menu about a gym's member fees and when you choose your member type then you are shown the compounded interest of the member type for 10 years (shows 1-10).
*/

#include <iostream>																						 //main library
#include <iomanip>																						 //library needed for fixed point notation thats used in the program
#include <cstdio>																						 //library needed for exit(0); thats used in the program

using namespace std;                                                                                     //required

int main()																								 //main function
{
	while (true)																				         //this is here because for continue to work it must be inside a loop
	{
		static double YearlyCharges = 1200;                                                              //static so it can remember what was calculated and set it to the variable to be used to compound interest
		const double GoldMemberFee = .01,															     //gold member fee constant (used in compound interest math)
			SilverMemberFee = .02,                                                                       //silver member fee const (math)
			BronzeMemberFee = .04,                                                                       //bronze member fee const (math)
			YearsMIN = 1,                                                                                //used to set the minumum for the loop when choosing which member type you want (constant)
			YearsMAX = 10;                                                                               //used to set the maximum for the loop when choosing which member type you want (constant)
		int First_menu_input,																			 //integer for switch b/c it needs intergers only for the experession (used to hold the input of which menu item is chosen)
			NumberofYearsOutput = YearsMIN;                                                              //sets NumberofYearsOutput to 1 so the loop starts at 1
		bool input_numberCheck;																			 //bool variable to hold the info thats held in variable as true or false and is set by line 37

		cout << endl                                                                                     //spacing
			<< "Welcome to Rondas Strikeforce Gym!!" << endl										     //the menu 
			<< "X---------------------------------X " << endl
			<< "1. Gold Member" << endl                                                                  //Choice One (when input is 1 it'll redirect to case 1)
			<< "2. Silver Member" << endl                                                                //Choice Two (when input is 2 it'll redirect to case 2)
			<< "3. Bronze Member" << endl                                                                //Choice Three (when input is 3 it'll redirect to case 3)
			<< "4. Quit" << endl                                                                         //Choice Four (when input is 4 it'll redirect to case 4)
			<< endl << "Please enter your membership level(1-3  Enter 4 to Quit) > ";                    //Question so it can trigger a person to input a choice
		cin >> First_menu_input;																		 //menu item input
		cout << endl << endl;																		     //spacing

		input_numberCheck = cin.fail();																     //checks to see if cin fails aka types in a letter then the variable is set to true and when the variable is true it redirects to 41 if false its ignored 

		if (input_numberCheck == true)																	 //tests if variable input_numberCheck true or not if so it executes statements inside brackets
		{
			cout << "Letters are not allowed to be entered, please try again. " << endl << endl;		 //outputs try again w/ spacing
			system("pause");																			 //pauses and waits for a users keypress
			exit(0);																					 //exits program after the pause
		}

		else																							 //if the menu choice isnt a letter and is a number then it continues on with the program
		{

			switch (First_menu_input)																	 //switch statement inside the brackets of this statement holds all of the 
			{

			case 1:																						 //menu item 1
			{
				while (NumberofYearsOutput <= YearsMAX)                                                  //while statement used for loops (puts out NumberofYearsOutput which is 1 till it is less than or equal to yearsmax which is 10 then it ends computing this and continues(aka restarts program.)
				{

					cout << "Year" << "\t" << NumberofYearsOutput << "\t" << "$";                        //outputs the Year ->table format-> NumberofYearsOutput variable ->table format -> $ so it looks like for the first year w/ gold member "Year 1(NumberofYearsOutput) $1212(Calculated compound interest)"  or Year 1 $1212 (but outputs with table format b/c \t)

					cout << setprecision(2) << fixed                                                     //makes any number outputted on the next line have a fixed two decimal places to the right whether it be just double zero or actually have something in it. Makes it look nice
						<< (YearlyCharges = (YearlyCharges + (YearlyCharges * GoldMemberFee))) << endl;  //outputs the calculated math problem basically what happens is this is repeated with line 60, 10 times with Yearlycharges remembering what it outputted each time so it can compound it correctly.
					NumberofYearsOutput++;                                                               //increments NumberofYearsOutput up one(aka adds one to NumberofYearsOutput) after each go around allowing this while to keep going till it reaches 10 which is YearsMAX
				}
				YearlyCharges = 1200;																	 //reset the static variable back to what it was set to at the beginning of the program
				continue;																				 //repeats the program will start over creating the outputted menu (basically restarting program without removing what was previously outputted.)
			}

			case 2:																						 //menu item 2
			{
				while (NumberofYearsOutput <= YearsMAX)                                                  //while statement used for loops (puts out NumberofYearsOutput which is 1 till it is less than or equal to yearsmax which is 10 then it ends computing this and continues(aka restarts program.)
				{

					cout << "Year" << "\t" << NumberofYearsOutput << "\t" << "$";                        //outputs the Year ->table format-> NumberofYearsOutput variable ->table format -> $ so it looks like for the first year w/ silver member "Year 1(NumberofYearsOutput) $1224(Calculated compound interest)"  or Year 1 $1224 (but outputs with table format b/c \t)                                                                         

					cout << setprecision(2) << fixed                                                     //makes any number outputted on the next line have a fixed two decimal places to the right whether it be just double zero or actually have something in it. Makes it look nice
						<< (YearlyCharges = (YearlyCharges + (YearlyCharges * SilverMemberFee))) << endl;//outputs the calculated math problem basically what happens is this is repeated with line 74, 10 times with Yearlycharges remembering what it outputted each time so it can compound it correctly.
					NumberofYearsOutput++;                                                               //increments NumberofYearsOutput up one(aka adds one to NumberofYearsOutput) after each go around allowing this while to keep going till it reaches 10 which is YearsMAX
				}
				YearlyCharges = 1200;                                                                    //reset the static variable back to what it was set to at the beginning of the program
				continue;																				 //repeats the program will start over creating the outputted menu (basically restarting program without removing what was previously outputted.)
			}

			case 3:																						 //menu item 3
			{
				while (NumberofYearsOutput <= YearsMAX)                                                  //while statement used for loops (puts out NumberofYearsOutput which is 1 till it is less than or equal to yearsmax which is 10 then it ends computing this and continues(aka restarts program.)
				{

					cout << "Year" << "\t" << NumberofYearsOutput << "\t" << "$";                        //outputs the Year ->table format-> NumberofYearsOutput variable ->table format -> $ so it looks like for the first year w/ silver member "Year 1(NumberofYearsOutput) $1236(Calculated compound interest)"  or Year 1 $1236 (but outputs with table format b/c \t)          

					cout << setprecision(2) << fixed                                                     //makes any number outputted on the next line have a fixed two decimal places to the right whether it be just double zero or actually have something in it. Makes it look nice
						<< (YearlyCharges = (YearlyCharges + (YearlyCharges * BronzeMemberFee))) << endl;//outputs the calculated math problem basically what happens is this is repeated with line 88, 10 times with Yearlycharges remembering what it outputted each time so it can compound it correctly.
					NumberofYearsOutput++;                                                               //increments NumberofYearsOutput up one(aka adds one to NumberofYearsOutput) after each go around allowing this while to keep going till it reaches 10 which is YearsMAX
				}
				YearlyCharges = 1200;                                                                    //reset the static variable back to what it was set to at the beginning of the program
				continue;																				 //repeats the program will start over creating the outputted menu (basically restarting program without removing what was previously outputted.)

			}

			case 4:																						 //menu item 4
			{
				cout << "Thank you for using Rhondas Fee Calculator!" << endl << endl;					 //outputs the thank you for using program and adds spacing.
				system("pause");																		 //pauses so it doesnt close instantly and prompts the user to enter a keypress to continue.
				exit(0);																				 //then exits once the user has entered an input (cstdio library needed.)
				break;																					 //a break out of function.
			}
			default:																					 //if any thing else is entered (a catch all for invalid input that isnt a letter) then it redirects to here.
			{

				cout << "Invalid Choice please try again. " << endl << endl;							 //outputs try again.
				system("pause");																		 //pauses and waits for a keypress to continue with the program.
				continue;																				 //after the pause the program will start over creating the outputted menu (basically restarting program).
			}

			}
		}
		system("pause");																				 //pause so it dont end instantly and waits for a keypress.
		return 0;																						 //ends program when done and returns to int main with zero saying everything has worked well.
	}
}