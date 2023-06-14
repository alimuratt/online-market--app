#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

struct customerinfo {
	string name;                        //   We take user information
	string surname;
	int age;
};

class Market {                         // Main Class

protected:
	string productName;
	int remainder;
	double Fee = 0;
	int piece = 0;
	int stock;
	double totalFee;

public:

	void setproductName(string productName) {
		this->productName = productName;
	}
	string getproductName() {
		return productName;
	}
	void setstock(int stock) {
		this->stock = stock;
	}
	int getStock() {
		return stock;
	}
	void setPiece(int piece) {
		this->piece = piece;
	}
	int getPiece() {
		return piece;
	}
	void setFee(double Fee) {
		this->Fee = Fee;
	}
	double getFee() {
		return Fee;

	}
	double totalCost() {
		double tc = 0;
		tc = piece * Fee;
		return tc;


	}
	void receipt() {

		cout << piece << productName << " received: " << piece * Fee << "$";

	}
	void lastPiece() {


		cout << "***  How many will you get?  ***" << endl;
		cin >> piece;

		remainder = getStock() - piece;
		if (remainder > 0 || remainder == 0) {
			cout << "     Remaining quantity = " << remainder;
			cout << endl;

			totalFee = getFee() * getPiece();
			cout << "     Total price of cake = " << totalFee << "$";
			cout << endl;


		}
		else
			cout << "Not enough products can be found!" << endl;
	}
};

class cake :public Market {                    // Derrived Class 

protected:
	int type;
public:

	cake()
	{

	}
	void cake1() {
		cout << "*****    What kind of want cake?    *****" << endl << endl;
		cout << "*** If you want  banana    cake you should press 1  *** " << endl;
		cout << "*** If you want  chocalate cake you should press 2  *** " << endl;
		cin >> type;
	}
	void  feeFunc() {

		srand(time(0));
		int s;
		s = 1 + rand() % 100;

		if (type == 1) {
			cout << "     It's fee=      ";
			setproductName(" Banana Cake ");
			setFee(4.5);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "     Stock number of the product : " << getStock() << endl << endl;

		}
		else if (type == 2) {
			cout << "     It's fee= ";
			setproductName(" Chocalate cake ");
			setFee(5.5);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "    Stock number of the product: " << getStock() << endl << endl;
		}

		else {
			cout << "Wrong press button. Please again..." << endl;

		}

	}
};

class  drink :public Market {

protected:
	int type;
public:

	drink()
	{

	}

	void drink1() {
		cout << "*****  What kind of want drink?  *****" << endl;
		cout << "***  If you want cola  you should press 1  *** " << endl;
		cout << "***  If you want water you should press 2  *** " << endl;
		cin >> type;
	}


	void  feeFunc() {
		srand(time(0));
		int s;
		s = 1 + rand() % 100;


		if (type == 1) {
			cout << "     It's fee= ";
			setproductName(" Cola ");
			setFee(12);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "     Stock number of the product : " << getStock() << endl << endl;

		}
		else if (type == 2) {
			cout << "     It's fee= ";
			setproductName(" Water ");
			setFee(4);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "     Stock number of the product : " << getStock() << endl << endl;
		}
	}
};

class fruits :public Market {

protected:
	int type;
public:
	fruits()
	{

	}
	void fruits1() {
		cout << "*****    What kind of want fruits?    *****" << endl;
		cout << "***  If you want apple      you should press 1  *** " << endl;
		cout << "***  If you want strawberry you should press 2  *** " << endl;
		cin >> type;
	}
	void  feeFunc() {
		srand(time(0));
		int s;
		s = 1 + rand() % 100;


		if (type == 1) {
			cout << "     It's fee= ";
			setproductName(" Apple ");
			setFee(6);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "     Stock number of the product : " << getStock() << endl << endl;

		}
		else  if (type == 2) {
			cout << "     It's fee= ";
			setproductName(" Strawberry ");
			setFee(3.5);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "     Stock number of the product : " << getStock() << endl << endl;
		}
	}
};

class  chips :public Market {

protected:
	int type;
public:
	chips()
	{

	}
	void chips1() {
		cout << "*****     What kind of want chips?     *****" << endl;
		cout << "***  If you want potato  chips  you should press 1  *** " << endl;
		cout << "***  If you want ketchup chips  you should press 2  *** " << endl;
		cin >> type;
	}
	void  feeFunc() {
		srand(time(0));
		int s;
		s = 1 + rand() % 100;


		if (type == 1) {
			cout << "     It's fee= ";
			setproductName(" Potato chips ");
			setFee(9.5);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "     Stock number of the product : " << getStock() << endl << endl;

		}
		else  if (type == 2) {
			cout << "     It's fee= ";
			setproductName(" Ketchup chips ");
			setFee(11.25);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "     Stock number of the product : " << getStock() << endl << endl;
		}
	}

};

class pasta :public Market {

protected:
	int type;
public:
	pasta()
	{

	}
	void pasta1() {
		cout << "*****    What kind of want pasta?    *****" << endl;
		cout << "***  If you want spaghetti    you should press 1  *** " << endl;
		cout << "***  If you want round pasta  you should press 2  *** " << endl;
		cin >> type;
	}
	void  feeFunc() {
		srand(time(0));
		int s;
		s = 1 + rand() % 100;


		if (type == 1) {
			cout << "     It's fee= ";
			setproductName(" Spaghetti pasta ");
			setFee(7.5);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "     Stock number of the product : " << getStock() << endl << endl;

		}
		else  if (type == 2) {
			cout << "     It's fee= ";
			setproductName(" Round pasta ");
			setFee(11);
			cout << getFee();
			cout << endl;
			setstock(s);
			cout << "     Stock number of the product : " << getStock() << endl << endl;
		}
	}
};
void turn() {

	cake cake;
	drink drink;
	fruits fruits;
	chips chips;
	pasta pasta;

	int number;
	cout << "*****  Please enter the number of the product you want to buy;  ***** " << endl;
	cout << "***  For cake   press 1  *** " << endl;
	cout << "***  For drink  press 2  ***" << endl;
	cout << "***  For fruits press 3  ***" << endl;
	cout << "***  For chips  press 4  ***" << endl;
	cout << "***  For pasta  press 5  ***" << endl;
	cin >> number;

	int choose;
	if (number == 1) {
		cake.cake1();
		cake.feeFunc();
		cake.lastPiece();
		cake.totalCost();
		cout << endl;
	}
	else if (number == 2) {
		drink.drink1();
		drink.feeFunc();
		drink.lastPiece();
		drink.totalCost();
		cout << endl;
	}
	else if (number == 3) {
		fruits.fruits1();
		fruits.feeFunc();
		fruits.lastPiece();
		fruits.totalCost();
		cout << endl;
	}
	else if (number == 4) {
		chips.chips1();
		chips.feeFunc();
		chips.lastPiece();
		chips.totalCost();
		cout << endl;
	}
	else if (number == 5) {
		pasta.pasta1();
		pasta.feeFunc();
		pasta.lastPiece();
		pasta.totalCost();
		cout << endl;
	}

}
int dontTurn() {

	return 0;
}


int main() {

	customerinfo customer;
	cake cake;
	drink drink;
	fruits fruits;
	chips chips;
	pasta pasta;
	cout << "                         ******            WELCOME TO ONLINE MARKET APP          *****" << endl << endl;
	cout << "Please can you enter your name    :";
	cin >> customer.name;

	cout << "Please can you enter your surname :";
	cin >> customer.surname;

	cout << "Please can you enter your age     :";
	cin >> customer.age;
	cout << endl;

	cout << "*****   Welcome " << " " << customer.name << " " << customer.surname << "   *****" << endl;

	cout << "*****   Let's start shopping :)   *****" << endl;
	cout << endl;



	int totalshop;
	cout << "How many different products do you want to buy? " << endl;
	cin >> totalshop;
	for (int i = 0; i < totalshop; i++) {


		int number;
		cout << "*****  Please enter the number of the product you want to buy;  ***** " << endl;
		cout << "***  For cake   press 1  *** " << endl;
		cout << "***  For drink  press 2  ***" << endl;
		cout << "***  For fruits press 3  ***" << endl;
		cout << "***  For chips  press 4  ***" << endl;
		cout << "***  For pasta  press 5  ***" << endl;
		cin >> number;

		int choose;
		if (number == 1) {
			cake.cake1();
			cake.feeFunc();
			cake.lastPiece();
			cake.totalCost();
			cout << endl;
		}
		else if (number == 2) {
			drink.drink1();
			drink.feeFunc();
			drink.lastPiece();
			drink.totalCost();
			cout << endl;
		}
		else if (number == 3) {
			fruits.fruits1();
			fruits.feeFunc();
			fruits.lastPiece();
			fruits.totalCost();
			cout << endl;
		}
		else if (number == 4) {
			chips.chips1();
			chips.feeFunc();
			chips.lastPiece();
			chips.totalCost();
			cout << endl;
		}
		else if (number == 5) {
			pasta.pasta1();
			pasta.feeFunc();
			pasta.lastPiece();
			pasta.totalCost();
			cout << endl;
		}
		else {
			cout << "Wrong press button. Please again...If you want to contunie you will press 1, If you want to exit you will press 0." << endl;
			//turn();
			int rpead;
			cin >> rpead;
			if (rpead == 1) {
				turn();
			}
			else {
				dontTurn();
			}

		}

	}
	cout << endl << endl << endl;


	cake.receipt();
	cout << endl;
	drink.receipt();
	cout << endl;
	fruits.receipt();
	cout << endl;
	chips.receipt();
	cout << endl;
	pasta.receipt();
	cout << endl;
	cout << endl;

	cout << "Total shopping amount is : " << cake.totalCost() + drink.totalCost() + fruits.totalCost() + chips.totalCost() + pasta.totalCost() << "$" 
		<< endl;
	cout << endl;

	cout << "Thanks for prefer us" << customer.name << " " << customer.surname << endl;
	cout << "-.-" << "Good bye." << "-.-" << endl;


	system("pause");
	return 0;
}
