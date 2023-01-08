#pragma once
#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_



class ticketmachine
{
public:
	ticketmachine();
	virtual ~ticketmachine();
	void showPrompt();
	void insertMoney(int money);
	void showBalance();
	void printTicket();
	void showTotal();
	
private:
	const int PRICE;
	int balance;
	int total;

};














#endif
