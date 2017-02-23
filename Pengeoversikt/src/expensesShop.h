/*
 * expensesShop.h
 *
 *  Created on: 22. feb. 2017
 *      Author: fschjerven
 */

#ifndef EXPENSESSHOP_H_
#define EXPENSESSHOP_H_
#include <tuple>
#include <vector>

namespace std {

class expensesShop{
private:
	double sumExpenses = 0;
	int numTransactions = 0;
	vector< tuple<string,string,double> > transactions;

public:
	expensesShop();
	virtual ~expensesShop();

	void setExpenses(double& value);
	void setDateOfPurchase(string& date);
	void setExpensesLoc(string& location);
	void getExpenses();
	void getExpensesStats();
	void


};

} /* namespace std */

#endif /* EXPENSESSHOP_H_ */
