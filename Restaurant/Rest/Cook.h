#pragma once

#include "..\Defs.h"
#include <ctime>
#include <cstdlib>
#pragma once
class Cook
{
	int ID;
	int BO;//the number of orders a cook must prepare before taking a break
	int BN;//break duration
	float InjProp;//The probability a busy cook gets injured 
	int RstPrd;// the rest period 
	float R; 
	ORD_TYPE type;	        //for each order type there is a corresponding type (VIP, Normal, Vegan)
	int speed;	        	//dishes it can prepare in one clock tick (in one timestep)
	COOK_STATUS status;     //for each cook there is a corresponding type (VIP, Normal, Vegan)
	static int NumAvCook; //number of available cooks
	static int NumAvNCook; //number of available normal cooks
	static int NumAvVegCook; //number of available vegan cooks
	static int NumAvVIPCook; //number of available vip cooks
	int numberofFinishedOrders;
	int change;

public:
    Cook();
	Cook(int ID,ORD_TYPE type,int speed,int BO,int BN,float InjProp,int RstPrd,COOK_STATUS status=AVAILABLE);
	virtual ~Cook();
	int GetID() const;
	int getBO() const;
	int getBN() const;
	float getInjProp() const;
	int getRstPrd() const;
	int getSpeed() const;
	int getnumberofFinishedOrders() const;
	int incnumberofFinishedOrders();
	int decnumberofFinishedOrders();
	void setChange(int);
	int getChange();
	float GetR();
	void setR(float);

	ORD_TYPE GetType() const;
	void setID(int);
	void setBO(int);
	void setSpeed(float);
	void setBN(int);
	void setInjProp(float);
	void setRstPrd(int);
	void setType(ORD_TYPE) ;
	void setStatus(COOK_STATUS);
	COOK_STATUS getStatus();
	static int getNumAvCook(); 
	static int getNumAvNCook();
	static int getNumAvVegCook();
	static int getNumAvVIPCook();
	static int incNumAvCook(); 
	static int incNumAvNCook();
	static int incNumAvVegCook();
	static int incNumAvVIPCook();
	static int decNumAvCook(); 
	static int decNumAvNCook();
	static int decNumAvVegCook();
	static int decNumAvVIPCook();
	static void setNumAvCook(int);
	static void setNumAvNCook(int);
	static void setNumAvVegCook(int);
	static void setNumAvVIPCook(int);
};

