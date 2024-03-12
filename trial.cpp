#include<iostream>
#include<fstream>
#include<iomanip>                                 // for floating point value


using namespace std;
void mainMenu();                                  //global declaration
class Management {
	public:
		Management() {                            //Constructor to call main menu
			mainMenu();                           //main menu to display on screen
		}
};
class Details {
	public:
		static string name,gender;
		int age;
		string add;
		static int cId;
		char arr[100];
		void information() {
			cout<<"\n Enter the customer ID:";
			cin>>cId;
			cout<<"\nEnter the name:";
			cin>>name;
			cout<<"\nEnter the age:";
			cin>>age;
			cout<<"\n Address:";
			cin>>add;
			cout<<"\n Gender:";
			cin>>gender;
			cout<<"Your details are saved with us\n"<<endl;
		}
		void savedinfo() {

			ofstream outf("saved.txt",ios::app);

			{


				outf<<"Customer ID:"<<Details::cId<<endl;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;

			}


		}
		void dispinfo() {
			ifstream ifs("saved.txt");
			{
				if(!ifs) {
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof()) {
					ifs.read((char*)&arr,sizeof(arr));
					cout<<arr<<endl;

				}

			}
			ifs.close();
		}
		void showhist() {
			{
				//history
				ifstream ifs("history.txt");               //read from file
				{
					if(!ifs) {                             //if it does not exist
						cout<<"File error!"<<endl;
					}
					while(!ifs.eof()) {                      //check every content of file
						ifs.getline(arr,70);                //to read content from the file
						cout<<arr<<endl;

					}

				}
				ifs.close();
			}
		}
};
int Details::cId;                          //Static data members
string Details::name;
string Details::gender;

class registration {
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		void flights() {
			string flightN[]= {"Dubai","Canada","UK","USA","Australia","Europe"};
			for(int a=0; a<6; a++) {
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;                      // 1. flight to dubai
			}
			cout<<"\n Welcome to the Airlines!"<<endl;
			cout<<"Press the number of the country of which you want to book the flight:";
			cin>>choice;
			switch(choice) {
				case 1: {
					cout<<"_________________________________Welcome to Dubai Emirates______________________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					cout<<"1. DUB - 498"<<endl;
					cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
					cout<<"2. DUB - 658"<<endl;
					cout<<"\t9-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
					cout<<"3. DUB - 508"<<endl;
					cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;
					cout<<"\n Select the flight you want to book:";
					cin>>choice1;
					if(choice1==1) {
						charges=14000;
						cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==2) {
						charges=10000;
						cout<<"\n You have successfuly booked the flight DUB - 658"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==3) {
						charges=9000;
						cout<<"\n You have successfuly booked the flight DUB - 508"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else {
						cout<<"Invalid input,shifting to the previous menu"<<endl;
						flights();

					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					if(back==1) {
						mainMenu();
					} else {
						mainMenu();
					}
				}
				case 2: {
					cout<<"_________________________________Welcome to Canadian Airlines______________________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					cout<<"1. CA - 198"<<endl;
					cout<<"\t09-01-2022 2:00PM 20hrs Rs. 34000"<<endl;
					cout<<"2. CA - 158"<<endl;
					cout<<"\t11-01-2022 6:00AM 23hrs Rs. 29000"<<endl;
					cout<<"3. CA - 208"<<endl;
					cout<<"\t14-01-2022 12:00AM 21hrs Rs. 40000"<<endl;
					cout<<"\n Select the flight you want to book:";
					cin>>choice1;
					if(choice1==1) {
						charges=34000;
						cout<<"\nYou have successfully booked the flight CA - 198"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==2) {
						charges=10000;
						cout<<"\n You have successfuly booked the flight CA - 158"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==3) {
						charges=9000;
						cout<<"\n You have successfuly booked the flight CA - 208"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else {
						cout<<"Invalid input,shifting to the previous menu"<<endl;
						flights();

					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					if(back==1) {
						mainMenu();
					} else {
						mainMenu();
					}


				}
				case 3: {
					cout<<"_________________________________Welcome to UK Airways______________________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					cout<<"1. UK - 798"<<endl;
					cout<<"\t12-01-2022 10:00AM 14hrs Rs. 44000"<<endl;

					cout<<"\n Select the flight you want to book:";
					cin>>choice1;
					if(choice1==1) {
						charges=44000;
						cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					}

					else {
						cout<<"Invalid input,shifting to the previous menu"<<endl;
						flights();

					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					if(back==1) {
						mainMenu();
					} else {
						mainMenu();
					}

				}
				case 4: {

					cout<<"_________________________________Welcome to US Airways______________________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					cout<<"1. US - 567"<<endl;
					cout<<"\t10-01-2022 9:00AM 23hrs Rs. 37000"<<endl;
					cout<<"2. US - 658"<<endl;
					cout<<"\t9-01-2022 6:00AM 22hrs Rs. 39000"<<endl;
					cout<<"3. US - 508"<<endl;
					cout<<"\t12-01-2022 10:00AM 23hrs Rs. 42000"<<endl;
					cout<<"\n Select the flight you want to book:";
					cin>>choice1;
					if(choice1==1) {
						charges=37000;
						cout<<"\nYou have successfully booked the flight US - 567"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==2) {
						charges=10000;
						cout<<"\n You have successfuly booked the flight US - 658"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==3) {
						charges=9000;
						cout<<"\n You have successfuly booked the flight US - 508"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else {
						cout<<"Invalid input,shifting to the previous menu"<<endl;
						flights();

					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					if(back==1) {
						mainMenu();
					} else {
						mainMenu();
					}
				}
				case 5: {
					cout<<"_________________________________Welcome to Australian Airlines______________________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					cout<<"1. AS - 698"<<endl;
					cout<<"\t018-01-2022 9:00AM 10hrs Rs. 44000"<<endl;
					cout<<"2. AS - 158"<<endl;
					cout<<"\t19-01-2022 4:00AM 12hrs Rs. 34000"<<endl;
					cout<<"3. AS - 708"<<endl;
					cout<<"\t17-01-2022 10:00AM 11hrs Rs. 42000"<<endl;
					cout<<"\n Select the flight you want to book:";
					cin>>choice1;
					if(choice1==1) {
						charges=44000;
						cout<<"\nYou have successfully booked the flight AS - 698"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==2) {
						charges=34000;
						cout<<"\n You have successfuly booked the flight AS - 158"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==3) {
						charges=42000;
						cout<<"\n You have successfuly booked the flight AS - 708"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else {
						cout<<"Invalid input,shifting to the previous menu"<<endl;
						flights();

					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					if(back==1) {
						mainMenu();
					} else {
						mainMenu();
					}
				}
				case 6: {
					cout<<"_________________________________Welcome to European Airlines______________________________\n"<<endl;
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
					cout<<"Following are the flights\n"<<endl;
					cout<<"1. EU - 898"<<endl;
					cout<<"\t02-01-2022 2:00AM 10hrs Rs. 36000"<<endl;
					cout<<"2. EU - 958"<<endl;
					cout<<"\t03-01-2022 6:00AM 12hrs Rs. 37000"<<endl;
					cout<<"3. EU - 698"<<endl;
					cout<<"\t12-01-2022 10:00AM 11hrs Rs. 31000"<<endl;
					cout<<"\n Select the flight you want to book:";
					cin>>choice1;
					if(choice1==1) {
						charges=36000;
						cout<<"\nYou have successfully booked the flight EU - 898"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==2) {
						charges=37000;
						cout<<"\n You have successfuly booked the flight EU - 958"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else if(choice1==3) {
						charges=31000;
						cout<<"\n You have successfuly booked the flight EU - 698"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;

					} else {
						cout<<"Invalid input,shifting to the previous menu"<<endl;
						flights();

					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
					if(back==1) {
						mainMenu();
					} else {
						mainMenu();
					}
				}
				default: {
					cout<<"Invalid input, Shifting you to the main menu !"<<endl;
					mainMenu();
					break;

				}



			}


		}

};


float registration::charges;
int registration::choice;


class ticket : public registration, Details {                           //multiple inheritance= 2 base classes and 1 derived class
	public:
		void Bill() {
			string destination="";
			ofstream outf("records.txt");                                  //writing in the file

			{
				outf<<"\n\nCustomer ID:"<<Details::cId<<endl;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;
				outf<<"Description\n\n"<<endl;





				if(registration::choice==1) {                  // using registration class deciding country
					destination="Dubai";
				} else if(registration::choice==2) {
					destination="Canada";
				} else if(registration::choice==3) {
					destination="UK";
				} else if(registration::choice==4) {
					destination="USA";
				} else if(registration::choice==5) {
					destination="Australia";
				} else if(registration::choice==6) {
					destination="Europe";
				}

				outf<<"Destination\t"<<destination<<endl;
				outf<<"Flight cost:\t"<<registration::charges<<endl;

			}
			outf.close();

			ifstream inf("records.txt");
			ofstream outff("history.txt",ios::app|ios::in);

			do {
				inf.read((char*) &arr, sizeof(arr));
				outff.write((char*) &arr, sizeof(arr));
			} while(!inf.eof());
			outff.close();
			inf.close();

		}

		void dispBill() {                              //display bill
			ifstream ifs("records.txt");               //read from file
			{
				if(!ifs) {                             //if it does not exist
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof()) {                      //check every content of file
					ifs.getline(arr,100);                //to read content from the file
					cout<<arr<<endl;

				}

			}
			ifs.close();
		}


};
void mainMenu() {
	int lchoice;
	int schoice;
	int back;
	cout<<"\t          	THE AIRLINES \n"<<endl;
	cout<<"\t_____________________Main Menu___________________"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t Press 1 to add the Customer Details     \t"<<endl;
	cout<<"\t\t Press 2 Our Customers                    \t"<<endl;
	cout<<"\t\t Press 3 for Flight Registration         \t"<<endl;
	cout<<"\t\t Press 4 for Ticket and Charges          \t"<<endl;
	cout<<"\t\t Press 5 Show History                    \t"<<endl;
	cout<<"\t\t Press 6 to Exit                         \t"<<endl;

	cout<<"\n\n\t\tEnter the choice:";
	cin>>lchoice;
	Details d;                                    //classes for details,ticket
	registration r;
	ticket t;
	do {
		system("cls");
		switch(lchoice) {
			case 1: {
				cout<<"_____Customers______\n"<<endl;
				d.information();
				cout<<"Press any key to go back to Main menu";
				cin>>back;
				if(back==1) {
					mainMenu();
				} else {
					mainMenu();
				}
				break;
			}
			case 2: {
				cout<<"____customer data___\n"<<endl;
				d.savedinfo();
				cout<<"Details of our customer\n"<<endl;
				cout<<"Press1 to display details\n";
				cin>>back;
				if(back==1) {
					d.dispinfo();
					cout<<"Press any key to go back to main menu:";
					cin>>back;
					if(back==1) {
						mainMenu();

					} else {
						mainMenu();
					}
				} else {
					mainMenu();
				}
				break;
			}

			case 3: {
				cout<<"_____Book a flight using this system_____\n"<<endl;

				r.flights();
				break;
			}
			case 4: {
				cout<<"____GET YOUR TICKET___\n"<<endl;
				t.Bill();
				cout<<"Your ticket is printed,you can collect it\n"<<endl;
				cout<<"Press1 to display your ticket";
				cin>>back;
				if(back==1) {
					t.dispBill();
					cout<<"Press any key to go back to main menu:";
					cin>>back;
					if(back==1) {
						mainMenu();

					} else {
						mainMenu();
					}
				} else {
					mainMenu();
				}
				break;
			}

			case 5: {
				cout<<"_____Showing History______\n"<<endl;
				d.showhist();
				cout<<"Press any key to go back to Main menu";
				cin>>back;
				if(back==1) {
					mainMenu();
				} else {
					mainMenu();
				}
				break;
			}

			case 6: {
				cout<<"\n\n\t_________Thank-you__________"<<endl;
				return;
				break;

			}
			default: {
				cout<<"Invalid input,Please try again!\n"<<endl;
				mainMenu();
				break;

			}
		}
	} while(lchoice!=6);

}

int main() {
	Management Mobj;
	return 0;
}