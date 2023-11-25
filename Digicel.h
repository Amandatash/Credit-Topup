/*
 * Digicel.h
 *
 *  Created on: 31 Oct 2021
 *      
 */

#ifndef DIGICEL_H_
#define DIGICEL_H_

#include "Administration.h"

class Digicel:public Administration{
private:
	int NoBranch;
public:
	Digicel(){
		NoBranch=0;
	}
	Digicel(int NoBranch){
		this->NoBranch=NoBranch;
	}

	int getNoBranch() {
		return NoBranch;
	}

	void setNoBranch(int noBranch) {
		NoBranch = noBranch;
	}
	void Display(){
		Digicel::displayCompanyInfo();
		cout<<"NoBranch: " << NoBranch << endl;
	}
};


#endif /* DIGICEL_H_ */
