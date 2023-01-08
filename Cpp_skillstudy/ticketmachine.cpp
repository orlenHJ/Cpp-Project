#include "ticketmachine.h"
#include <iostream>
using namespace std;


ticketmachine::ticketmachine(): PRICE(0) {


}

ticketmachine::~ticketmachine() {


}


void ticketmachine::showPrompt()
{
	cout << "something" << endl;


}

void ticketmachine::insertMoney(int money)
{
	balance += money;


}

void ticketmachine::showBalance()
{
	cout << "balance" << endl;

}









