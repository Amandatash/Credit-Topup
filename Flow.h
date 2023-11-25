/*
 * Flow.h
 *
 *  Created on: 31 Oct 2021
 *      Author: johns
 */

#include "Administration.h"

class Flow:public Administration{
private:
	string ParentCompanyName;
public:
	Flow(){
		ParentCompanyName="";
	}
	Flow(int ParentCompanyName){
		this->ParentCompanyName=ParentCompanyName;
	}
	void setParentCompanyName(string parentCompanyName) {
			ParentCompanyName = parentCompanyName;
		}
    string getParentCompanyName(){
		return ParentCompanyName;
	}

	void Display(){
		Flow::displayCompanyInfo();
		cout<<"Parent Company Name: " << ParentCompanyName << endl;
	}
};



