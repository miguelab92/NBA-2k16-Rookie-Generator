// 2k16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

enum Playertype {Athletic, Scorer, Defender, Playmaker, Postup, Rebounder, All, Twoway};

class Player
{
	// personal info variables
	Playertype playstyle; 
	string hand;
	string dunkhand;
	string position;
	string positiontwo;
	string plays;
	string initiate = "No";
	int positionmain;
	int birthmonth;
	int birthday;
	int age;
	int peakstart;
	int peakend;
	int number;
	int winner;

	// body info variables
	int height;
	int weight;
	int wingspan;
	int shoulder;
	int bodylength;
	int athleticism;

	// offense rating variables
	int standing;
	int layup;
	int fade;
	int hook;
	int posto;
	int drawfoul;
	int moving;
	int standclose;
	int moveclose;
	int standmed;
	int movemed;
	int standthree;
	int movethree;
	int freethrow;
	int handle;
	int vision;
	int passiq;
	int accuracy;
	int oreb;
	int standdunk;
	int drivedunk;
	int contdunk;
	int shotiq;
	int hands;

	// defense rating variables
	int dreb;
	int block;
	int contest;
	int steal;
	int onball;
	int postd;
	int react;

	// athleticism rating variables
	int boxout;
	int quickness;
	int speed;
	int acceleration;
	int vertical;
	int strength;
	int stamina;
	int hustle;
	int durability;
	int passperception;
	int defconsistency;
	int offconsistency;
	int picknrolld;
	int helpd;
	int emotion;
	int potential;

	// shooting tendencies
	int stepthrough;
	int underbasket;
	int close;
	int closeleft;
	int closemid;
	int closeright;
	int mid;
	int midleft;
	int midleftcenter;
	int midcenter;
	int midrightcenter;
	int midright;
	int three;
	int threeleft;
	int threeleftcent;
	int threecent;
	int threerightcent;
	int threeright;
	int contested;
	int stepbackshot;
	int spinshot;
	int pullup;
	int useglass;

	// layup/dunk tendencies
	int standlayup;
	int drivelayup;
	int dunkstand;
	int dunkdrive;
	int flashdunk;
	int oop;
	int putback;
	int crash;
	int spinlayup;
	int hopstep;
	int euro;
	int floater;

	// triple threat tendencies
	int pumpfake;
	int jabstep;
	int idle;
	int ttshoot;
	int setsizeup;
	int sethesi;
	int nodribble;

	// driving tendencies
	int drive;
	int driveright;
	int crossover;
	int spin;
	int stepback;
	int halfspin;
	int doublecross;
	int behindback;
	int hesitate;
	int innout;
	int nomove;
	int attack;

	// passing tendencies
	int dish;
	int flashypass;
	int ooppass;

	// post tendencies
	int postup;
	int shimmy;
	int faceup;
	int backdown;
	int aggresivebackdown;
	int postshot;
	int hookleft;
	int hookright;
	int fadeleft;
	int faderight;
	int upnunder;
	int hopshot;
	int poststepback;
	int postdrive;
	int postspin;
	int dropstep;
	int posthopstep;

	// freelance tendencies
	int shot;
	int touches;
	int rollvpop;

	// defense tendencies
	int intercept;
	int charge;
	int onballsteal;
	int contestshot;
	int blockshot;
	int foul;
	int hardfoul;
	
	// personality badge qualifiers
	string personalitybadges;
	int starpower;
	int competitor;
	int swag;
	int desire;
	int ego;
	int coachable;
	int expression;

	// sig style
	string sigdunks[15];
	string siglayup;
	string sigfade;
	string sighook;
	string sighop;
	string sigshimmy;
	string sigprotect;
	string posture;
	string sigcrossover;
	string sigbehindback;
	string sigspin;
	string sighesitation;
	string sigsizeup;
	int sizenum;


	// remaining badges
	string insidebadges;
	string outsidebadges;
	string playmakingbadges;
	string defendingbadges;
	string athleticismbadges;
	string reboundingbadges;
	

public:
	// personal info gen
	void setplaystyle(Player player);
	void setpositionmain(Player player);
	void setpositiongen(Player player);
	void sethandgen(Player player);
	void setdunkhandgen(Player player);
	void setbirthmonth(Player player)
	{
		birthmonth = rand() % 12 + 1;
	}
	void setbirthday(Player player)
	{
		birthday = rand() % 30 + 1;
	}
	void setage(Player player)
	{
		age = rand() % 4 + 19;
	}
	void setpeakstart(Player player)
	{
		peakstart = rand() % 5 + 25;
	}
	void setpeakend(Player player)
	{
		peakend = rand() % 7 + 31;
	}
	void setnumber(Player player)
	{
		number = rand() % 99;
	}
	void setwinner(Player player)
	{
		winner = rand() % 100;
	}
	void setplays(Player player);
	void setplayinitiator()
	{
		if (vision >= 60 && handle >= 60) { initiate = "yes"; }
	}

	// body info gen
	void setheightgen(Player player);
	void setweightgen(Player player);
	void setwingspan(Player player)
	{
		wingspan = rand() % 30 + 40;
	}
	void setbodylength(Player player)
	{
		bodylength = rand() % 30 + 40;
	}
	void setshoulder(Player player)
	{
		shoulder = rand() % 30 + 40;
	}
	void setathleticism()
	{
		athleticism = rand() % 3;
		if (height <= 72) {
			athleticism = 0;
		}
	}

	// offense rating gen
	void setstanding(Player player)
	{
		standing = rand() % 30 + 60;
	}
	void setlayup(Player player);
	void setfade(Player player);
	void sethookgen(Player player);
	void setposto(Player player);
	void setdrawfoul(Player player);
	void setmoving(Player player);
	void setstandclose(Player player);
	void setstandmedgen(Player player);
	void setstandthreegen(Player player);
	void setmoveclosegen(Player player);
	void setmovemedgen(Player player);
	void setmovethreegen(Player player);
	void setfreethrowgen(Player player);
	void sethandlegen(Player player);
	void setvisiongen(Player player);
	void setpassiq(Player player)
	{
		passiq = vision;
	}
	void setaccuracy(Player player)
	{
		accuracy = rand() % 20 + 70;
	}
	void setorebgen(Player player);
	void setstanddunkgen(Player player);
	void setdrivedunkgen(Player player);
	void setcontdunkgen(Player player);
	void setshotiq(Player player)
	{
		shotiq = rand() % 55 + 25;
	}
	void sethands(Player player)
	{
		hands = rand() % 40 + 55;
	}


	// defense rating gen
	void setdrebgen(Player player);
	void setcontest(Player player);
	void setblockgen(Player player);
	void setsteal(Player player);
	void setonballgen(Player player);
	void setpostdgen(Player player);
	void setreactgen(Player player);


	// athletic rating gen
	void setboxout(Player player)
	{
		boxout = dreb;
	}
	void setquicknessgen(Player player);
	void setspeedgen(Player player);
	void setaccelgen(Player player);
	void setvertgen(Player player);
	void setstrengthgen(Player player);
	void setstamgen(Player player);
	void sethustle(Player player)
	{
		hustle = rand() % 65 + 25;
	}
	void setdurability(Player player)
	{
		durability = rand() % 24 + 75;
	}

	// mental rating gen
	void setpasspercepgen(Player player);
	void setdefconsistency(Player player)
	{
		defconsistency = (onball + postd + picknrolld) / 3;
	}
	void setoffconsistency(Player player)
	{
		offconsistency = rand() % 55 + 25;
	}
	void setpicknrolld(Player player);
	void sethelpd(Player player);
	void setemotion(Player player)
	{
		emotion = rand() % 74 + 25;
	}
	void setpotential(Player player)
	{
		potential = rand() % 17 + 3;
	}

	// shooting tendencies gen
	void setstepthrough()
	{
		stepthrough = rand() % 50;
	}
	void setunderbasketgen(Player player);
	void setclose(Player player);
	void setmid(Player player);
	void setthree(Player player);
	void setcontested(Player player);
	void setmoveshottype(Player player);
	void setuseglass()
	{
		useglass = rand() % 30;
	}
	
	// layup/dunk tendency gen
	void setstandlayup(Player player);
	void setdrivelayup(Player player);
	void setdunkdrive(Player player);
	void setdunkstand(Player player);
	void setflashdunk(Player player);
	void setoop(Player player);
	void setputback()
	{
		putback = rand() % underbasket;
	}
	void setcrash(Player player);
	void setlayuptypes(Player player);

	// triple threat tendency gen
	void settripletypes(Player player);
	void setsizeuptypes(Player player);

	// driving tendency gen
	void setdrive(Player player);
	void setdriveright()
	{
		driveright = rand() % 40 + 30;
	}
	void setdribbles(Player player);
	void setattack(Player player);

	// passing tendency gen
	void setdish()
	{
		dish = vision;
	}
	void setflashypass(Player player);
	void setooppass(Player player);

	// post tendency gen
	void setpostup(Player player);
	void setshimmy(Player player);
	void setfaceup(Player player);
	void setbackdown()
	{
		backdown = rand() % strength;
	}
	void setaggresivebackdown()
	{
		aggresivebackdown = rand() % (strength / 2);
	}
	void setpostshottypes(Player player);

	// freelance tendency gen
	void setshot(Player player);
	void settouches(Player player);
	void setrollvpop(Player player);

	// defense tendency gen
	void setsteals(Player player);
	void setcharge()
	{
		charge = rand() % 70;
	}
	void setcontestshot()
	{
		contestshot = rand() % 70 + 30;
	}
	void setblockshot()
	{
		blockshot = block;
	}
	void setfoul()
	{
		foul = rand() % 80 + 20;
	}
	void sethardfoul(Player player);

	// signature style gen
	void setsiglayup(Player player);
	void setsigdunks(Player player);
	void setsigpostgame(Player player);
	void setsigdribbles(Player player);

	// badges gen
	void setpersonalitybadges(Player player);
	void setinsidebadges(Player player);
	void setoutsidebadges(Player player);
	void setplaymakingbadges(Player player);
	void setdefendingbadges(Player player);
	void setathleticismbadges(Player player);
	void setreboundingbadges(Player player);

	// 2nd position
	void setpositiontwogen(Player player);

	int getpositionmain()
	{
		return positionmain;
	}
	string getposition()
	{
		return position;
	}
	string getpositiontwo()
	{
		return positiontwo;
	}
	string getplays()
	{
		return plays;
	}
	string getpersonalitybadge()
	{
		return personalitybadges;
	}
	string getinsidebages()
	{
		return insidebadges;
	}
	string getoutsidebadges()
	{
		return outsidebadges;
	}
	string getplaymakingbadges()
	{
		return playmakingbadges;
	}
	string getdefendingbadges()
	{
		return defendingbadges;
	}
	string getathleticismbadges()
	{
		return athleticismbadges;
	}
	string getreboundingbadges()
	{ 
		return reboundingbadges; 
	}
	string getsiglayup()
	{ 
		return siglayup; 
	}
	string getsigdunks(int i)
	{
		return sigdunks[i];
	}
	string getsigfade()
	{ return sigfade; }
	string getsighook()
	{ return sighook; }
	string getsighop()
	{ return sighop; }
	string getsigshimmy()
	{ return sigshimmy; }
	string getsigprotect()
	{ return sigprotect; }
	string getposture()
	{ return posture; }
	string getsigcross()
	{
		return sigcrossover;
	}
	string getsigbehindback()
	{
		return sigbehindback;
	}
	string getsigspin()
	{
		return sigspin;
	}
	string getsighesitate()
	{
		return sighesitation;
	}
	string getplayinitiator()
	{
		return initiate;
	}
	int getbirthmonth()
	{
		return birthmonth;
	}
	int getbirthday()
	{
		return birthday;
	}
	int getage()
	{
		return age;
	}
	int getnumber()
	{
		return number;
	}
	string gethand()
	{	
		return hand;
	}
	string getdunkhand()
	{
		return dunkhand;
	}
	int getpeakstart()
	{
		return peakstart;
	}
	int getpeakend()
	{
		return peakend;
	}
	int getwinner()
	{
		return winner;
	}
	int getheight()
	{
		return height;
	}
	int getweight()
	{
		return weight;
	}
	int getwingspan()
	{
		return wingspan;
	}
	int getshoulder()
	{
		return shoulder;
	}
	int getbodylength()
	{
		return bodylength;
	}
	int getstanding()
	{
		return standing;
	}
	int getlayup()
	{
		return layup;
	}
	int getfade()
	{
		return fade;
	}
	int gethook()
	{
		return hook;
	}
	int getposto()
	{
		return posto;
	}
	int getdrawfoul()
	{
		return drawfoul;
	}
	int getmoveclose()
	{
		return moveclose;
	}
	int getstandclose()
	{
		return standclose;
	}
	int getmovemed()
	{
		return movemed;
	}
	int getstandmed()
	{
		return standmed;
	}
	int getmovethree()
	{
		return movethree;
	}
	int getstandthree()
	{
		return standthree;
	}
	int getfreethrow()
	{
		return freethrow;
	}
	int gethandle()
	{
		return handle;
	}
	int getvision()
	{
		return vision;
	}
	int getpassiq()
	{
		return passiq;
	}
	int getaccuracy()
	{
		return accuracy;
	}
	int getoreb()
	{
		return oreb;
	}
	int getstanddunk()
	{
		return standdunk;
	}
	int getdrivedunk()
	{
		return drivedunk;
	}
	int getcontdunk()
	{
		return contdunk;
	}
	int getshotiq()
	{
		return shotiq;
	}
	int gethands()
	{
		return hands;
	}
	int getdreb()
	{
		return dreb;
	}
	int getblock()
	{
		return block;
	}
	int getcontest()
	{
		return contest;
	}
	int getsteal()
	{
		return steal;
	}
	int getonball()
	{
		return onball;
	}
	int getpostd()
	{
		return postd;
	}
	int getreact()
	{
		return react;
	}
	int getboxout()
	{
		return boxout;
	}
	int getquickness()
	{
		return quickness;
	}
	int getspeed()
	{
		return speed;
	}
	int getacceleration()
	{
		return acceleration;
	}
	int getvertical()
	{
		return vertical;
	}
	int getstrength()
	{
		return strength;
	}
	int getstamina()
	{
		return stamina;
	}
	int gethustle()
	{
		return hustle;
	}
	int getdurability()
	{
		return durability;
	}
	int getpassperception()
	{
		return passperception;
	}
	int getdefconsistency()
	{
		return defconsistency;
	}
	int getpicknrolld()
	{
		return picknrolld;
	}
	int gethelpd()
	{
		return helpd;
	}
	int getoffconsistency()
	{
		return offconsistency;
	}
	int getemotion()
	{
		return emotion;
	}
	int getpotential()
	{
		return potential;
	}
	int getstepthrough()
	{
		return stepthrough;
	}
	int getunderbasket()
	{
		return underbasket;
	}
	int getclose()
	{
		return close;
	}
	int getcloseleft()
	{
		return closeleft;
	}
	int getclosemid()
	{
		return closemid;
	}
	int getcloseright()
	{
		return closeright;
	}
	int getmid()
	{
		return mid;
	}
	int getmidleft()
	{
		return midleft;
	}
	int getmidleftcent()
	{
		return midleftcenter;
	}
	int getmidcenter()
	{
		return midcenter;
	}
	int getmidrightcent()
	{
		return midrightcenter;
	}
	int getmidright()
	{
		return midright;
	}
	int getthree()
	{
		return three;
	}
	int getthreeleft()
	{
		return threeleft;
	}
	int getthreeleftcent()
	{
		return threeleftcent;
	}
	int getthreecenter()
	{
		return threecent;
	}
	int getthreerightcent()
	{
		return threerightcent;
	}
	int getthreeright()
	{
		return threeright;
	}
	int getcontested()
	{
		return contested;
	}
	int getstepbackshot()
	{
		return stepbackshot;
	}
	int getspinshot()
	{
		return spinshot;
	}
	int getpullup()
	{
		return pullup;
	}
	int getuseglass()
	{
		return useglass;
	}
	int getstandlayup()
	{
		return standlayup;
	}
	int getdrivelayup()
	{
		return drivelayup;
	}
	int getdunkstanding()
	{
		return dunkstand;
	}
	int getdunkdrive()
	{
		return dunkdrive;
	}
	int getflashdunk()
	{
		return flashdunk;
	}
	int getoop()
	{
		return oop;
	}
	int getputback()
	{
		return putback;
	}
	int getcrash()
	{
		return crash;
	}
	int getspinlayup()
	{
		return spinlayup;
	}
	int gethopstep()
	{
		return hopstep;
	}
	int geteuro()
	{
		return euro;
	}
	int getfloater()
	{
		return floater;
	}
	int getpumpfake()
	{
		return pumpfake;
	}
	int getjabstep()
	{
		return jabstep;
	}
	int getidle()
	{
		return idle;
	}
	int getttshot()
	{
		return ttshoot;
	}
	int getsetsizeup()
	{
		return setsizeup;
	}
	int getsethesi()
	{
		return sethesi;
	}
	int getnodribble()
	{
		return nodribble;
	}
	int getdrive()
	{
		return drive;
	}
	int getdriveright()
	{
		return driveright;
	}
	int getcrossover()
	{
		return crossover;
	}
	int getspin()
	{
		return spin;
	}
	int getstepback()
	{
		return stepback;
	}
	int gethalfspin()
	{
		return halfspin;
	}
	int getdoublecross()
	{
		return doublecross;
	}
	int getbehindback()
	{
		return behindback;
	}
	int gethesitate()
	{
		return hesitate;
	}
	int getinnout()
	{
		return innout;
	}
	int getnomove()
	{
		return nomove;
	}
	int getattack()
	{
		return attack;
	}
	int getdish()
	{
		return dish;
	}
	int getflashypass()
	{
		return flashypass;
	}
	int getooppass()
	{
		return ooppass;
	}
	int getpostup()
	{
		return postup;
	}
	int getshimmy()
	{
		return shimmy;
	}
	int getfaceup()
	{
		return faceup;
	}
	int getbackdown()
	{
		return backdown;
	}
	int getaggresivebackdown()
	{
		return aggresivebackdown;
	}
	int getpostshot()
	{
		return postshot;
	}
	int gethookleft()
	{
		return hookleft;
	}
	int gethookright()
	{
		return hookright;
	}
	int getfadeleft()
	{
		return fadeleft;
	}
	int getfaderight()
	{
		return faderight;
	}
	int getupnunder()
	{
		return upnunder;
	}
	int gethopshot()
	{
		return hopshot;
	}
	int getpoststepback()
	{
		return poststepback;
	}
	int getpostdrive()
	{
		return postdrive;
	}
	int getpostspin()
	{
		return postspin;
	}
	int getdropstep()
	{
		return dropstep;
	}
	int getposthopstep()
	{
		return posthopstep;
	}
	int getshot()
	{
		return shot;
	}
	int gettouches()
	{
		return touches;
	}
	int getrollvpop()
	{
		return rollvpop;
	}
	int getintercept()
	{
		return intercept;
	}
	int getcharge()
	{
		return charge;
	}
	int getonballsteal()
	{
		return onballsteal;
	}
	int getcontestshot()
	{
		return contestshot;
	}
	int getblockshot()
	{
		return blockshot;
	}
	int getfoul()
	{
		return foul;
	}
	int gethardfoul()
	{
		return hardfoul;
	}
	int getsizenum()
	{
		return sizenum;
	}

};


// output function
void output(Player player, const int SPACER, string emptytest);



int main()
{
	srand((unsigned int)time(NULL));

	const int SPACER = 25; // output formatter
	char again = 'y'; // determine if generator runs again
	Player player; // custom player object
	string emptytest = "None"; // checks if strings are "None"


	while (again == 'y') // run generator loop 
	{
		// personal info gen
		player.setplaystyle(player);
		player.setpositionmain(player);
		player.setpositiongen(player);
		player.sethandgen(player);
		player.setdunkhandgen(player);
		player.setbirthmonth(player);
		player.setbirthday(player);
		player.setage(player);
		player.setpeakstart(player);
		player.setpeakend(player);
		player.setnumber(player);
		player.setwinner(player);

		// body info gen
		player.setheightgen(player);
		player.setweightgen(player);
		player.setwingspan(player);
		player.setbodylength(player);
		player.setshoulder(player);
		player.setathleticism();

		// needed athleticism ratings before offense
		player.setspeedgen(player);
		player.setvertgen(player);

		// offense rating gen
		player.setstanding(player);
		player.setlayup(player);
		player.setfade(player);
		player.sethookgen(player);
		player.setposto(player);
		player.setdrawfoul(player);
		player.setmoving(player);
		player.setstandclose(player);
		player.setstandmedgen(player);
		player.setstandthreegen(player);
		player.setmoveclosegen(player);
		player.setmovemedgen(player);
		player.setmovethreegen(player);
		player.setfreethrowgen(player);
		player.sethandlegen(player);
		player.setvisiongen(player);
		player.setpassiq(player);
		player.setaccuracy(player);
		player.setorebgen(player);
		player.setstanddunkgen(player);
		player.setdrivedunkgen(player);
		player.setcontdunkgen(player);
		player.setshotiq(player);
		player.sethands(player);

		// defense rating gen
		player.setdrebgen(player);
		player.setcontest(player);
		player.setblockgen(player);
		player.setsteal(player);
		player.setonballgen(player);
		player.setpostdgen(player);
		player.setreactgen(player);

		// athleticism rating gen
		player.setboxout(player);
		player.setquicknessgen(player);
		player.setaccelgen(player);
		player.setstrengthgen(player);
		player.setstamgen(player);
		player.sethustle(player);
		player.setdurability(player);

		// mental rating gen
		player.setpasspercepgen(player);
		player.setoffconsistency(player);
		player.setpicknrolld(player);
		player.sethelpd(player);
		player.setdefconsistency(player);
		player.setemotion(player);
		player.setpotential(player);

		// shooting tendencies generation
		player.setstepthrough();
		player.setunderbasketgen(player);
		player.setclose(player);
		player.setmid(player);
		player.setthree(player);
		player.setcontested(player);
		player.setmoveshottype(player);
		player.setuseglass();

		// layup/dunk tendency gen
		player.setstandlayup(player);
		player.setdrivelayup(player);
		player.setdunkdrive(player);
		player.setdunkstand(player);
		player.setflashdunk(player);
		player.setoop(player);
		player.setputback();
		player.setcrash(player);
		player.setlayuptypes(player);


		// driving tendency gen
		player.setdrive(player);
		player.setdriveright();
		player.setdribbles(player);
		player.setattack(player);
		
		// triple threat tendency gen
		player.settripletypes(player);
		player.setsizeuptypes(player);

		// passing tendency gen
		player.setdish();
		player.setflashypass(player);
		player.setooppass(player);

		// post tendency gen
		player.setpostup(player);
		player.setshimmy(player);
		player.setfaceup(player);
		player.setbackdown();
		player.setaggresivebackdown();
		player.setpostshottypes(player);

		// freelance tendency gen
		player.setshot(player);
		player.settouches(player);
		player.setrollvpop(player);

		// defense tendency gen
		player.setsteals(player);
		player.setcharge();
		player.setcontestshot();
		player.setblockshot();
		player.setfoul();
		player.sethardfoul(player);

		// play type gen
		player.setplayinitiator();
		player.setplays(player);

		// 2nd position
		player.setpositiontwogen(player);

		// badge gen
		player.setpersonalitybadges(player);
		player.setinsidebadges(player);
		player.setoutsidebadges(player);
		player.setplaymakingbadges(player);
		player.setdefendingbadges(player);
		player.setathleticismbadges(player);
		player.setreboundingbadges(player);


		// signature style gen
		player.setsiglayup(player);
		player.setsigdunks(player);
		player.setsigdribbles(player);
		player.setsigpostgame(player);
		player.setsigdribbles(player);

		// output
		output(player, SPACER, emptytest);

		
		
		cout << "Generate Another? (y for yes, n for no)" << endl;
		cin >> again;
		
	}
	return 0;
}


// player info functions
void Player::setplaystyle(Player player)
{
	int temp; 
	
	temp = rand() % 8;

	switch (temp)
	{
	case 0: playstyle = Athletic; break;
	case 1: playstyle = Scorer; break;
	case 2: playstyle = Defender; break;
	case 3: playstyle = Playmaker; break;
	case 4: playstyle = Postup; break;
	case 5: playstyle = Rebounder; break;
	case 6: playstyle = All; break;
	case 7: playstyle = Twoway; break;
	}
}
void Player::setpositionmain(Player player)
{
	if (playstyle == Rebounder || playstyle == Postup)
	{
		positionmain = rand() % 3 + 2;
	}
	else if (playstyle == Playmaker)
	{
		positionmain = rand() % 3;
	}
	else
	{
		positionmain = rand() % 5;
	}
}
void Player::setpositiongen(Player player)
{
	switch (positionmain)
	{
	case 0: position = "Point Guard"; break;
	case 1: position = "Shooting Guard"; break;
	case 2: position = "Small Forward"; break;
	case 3: position = "Power Forward"; break;
	case 4: position = "Center"; break;
	}
}
void Player::sethandgen(Player player)
{
	int i;
	i = rand() % 50;

	if (i <= 15) { hand = "Left"; }
	else { hand = "Right"; }
}
void Player::setdunkhandgen(Player player)
{
	int i;
	i = rand() % 50;

	if (i < 20) { dunkhand = hand; }
	else { dunkhand = "Either"; }
}
void Player::setheightgen(Player player)
{
	switch (positionmain)
	{
	case 0: height = rand() % 7 + 70; break;
	case 1: height = rand() % 5 + 76; break;
	case 2: height = rand() % 5 + 77; break;
	case 3: height = rand() % 5 + 79; break;
	case 4: height = rand() % 5 + 81; break;
	}
}
void Player::setweightgen(Player player)
{
	if (height >= 84)
	{
		weight = rand() % 50 + 250;
	}
	else if (height >= 80)
	{
		weight = rand() % 50 + 230;
	}
	else if (height >= 74)
	{
		weight = rand() % 40 + 200;
	}
	else
	{
		weight = rand() % 50 + 170;
	}
}
void Player::setplays(Player player)
{
	string temp = "None";
	
	switch (positionmain)
	{
	case 0: if (movemed >= 75)
	{
		plays = "Pick n Roll Ballhandler";
	}
			else
			{
				plays = "Pick n Roll Point";
			}
			if (postup >= 5)
			{
				plays += ", Guard Postup";
			}
			if (standthree >= 80)
			{
				plays += ", Three";
			}
			if (standthree >= 75 && drive >= 70)
			{
				plays += ", Handoff";
			}break;
	case 1: if ( vision >= 60 && handle >= 60)
	{
		if ( movemed > vision)
		{
			plays = "Pick n Roll Wing";
		}
		else
		{
			plays = "Pick n Roll Ballhandler";
		}
	}
			else if (layup >= 70 && handle >= 65)
			{
				plays = "Pick n Roll Wing";
			}
			if (standthree >= 75 && standthree > standmed)
			{
				plays += ", Three";
			}
			if (postup >= 1)
			{
				plays += ", Guard Postup";
			}
			if (layup >= 80)
			{
				if (standthree > 75)
				{
					plays += ", Handoff";
				}
				else
				{
					plays += ", Cutter";
				}
			}
			else if (standthree >= 75 && standthree < standmed)
			{
				plays += ", Midrange";
			}
			else
			{
				plays = "None";
			}break;
	case 2: if (movemed > vision && handle >= 60)
	{
		if (vision < 60)
		{
			plays = "Pick n Roll Wing";
		}
		else
		{
			plays = "Pick n Roll Ballhandler";
		}
	}
			else if (layup >= 70 && handle >= 60)
			{
				plays = "Pick n Roll Wing";
			}
			if (standthree >= 75 && standthree > standmed)
			{
				plays += ", Three ";
			}
			if (postup >= 1)
			{
				plays += ", Postup Low";
			}
			if (layup >= 80)
			{
				if (standthree > 75)
				{
					plays += ", Handoff";
				}
				else
				{
					plays += ", Cutter";
				}
			}
			else if (standmed >= 75 && standthree <= standmed)
			{
				plays += ", Midrange";
			}
			else
			{
				if (height >= 80)
				{
					plays = "Pick n Roll Man";
				}
				else
				{
					plays = "None";
				}
			}break;
	case 3: if (postup >= 50)
	{
		if (standmed >= 75)
		{
			plays = "Post High, Post Low, Pick n Roll Man";
		}
		else
		{
			plays = "Post Low, Pick n Roll Man";
		}
	}
			else if (postup >= 1)
			{
				plays = "Pick n Roll Man, Post Low";
			}
			else
			{
				plays = "Pick n Roll Man";
			} break;
	case 4: if (postup >= 50)
	{
		if (standmed >= 75)
		{
			plays = "Post High, Post Low, Pick n Roll Man";
		}
		else
		{
			plays = "Post Low, Pick n Roll Man";
		}
	}
			else if (postup >= 1)
			{
				plays = "Pick n Roll Man, Post Low";
			}
			else
			{
				plays = "Pick n Roll Man";
			}break;
	}
	if (positionmain <= 3 && handle >= 70 && vision >= 50 && plays == temp)
	{
		plays = "Pick n Roll Wing";
	}
}

// rating functions
void Player::setlayup(Player player)
{
	switch (playstyle)
	{
	case Athletic:
	case Scorer:
	case All:
	case Twoway: layup = rand() % 20 + 75; break;
	default: layup = rand() % 30 + 50; break;
	}
}
void Player::setposto(Player player)
{
	switch (playstyle)
	{
	case Postup: posto = rand() % 30 + 50; break;
	default: posto = rand() % 45 + 25; break;
	}
}
void Player::sethookgen(Player player)
{
	switch (playstyle)
	{
	case Postup: hook = rand() % 35 + 50; break;
	default: hook = rand() % 50 + 25; break;
	}
}
void Player::setfade(Player player)
{
	if (hook <= 70)
	{
		switch (playstyle)
		{
		case Postup: fade = rand() % 10 + 70; break;
		default: fade = rand() % 45 + 25; break;
		}
	}
	else
	{
		switch (playstyle)
		{
		case  Postup:
		case Scorer: fade = rand() % 30 + 50; break;
		default: fade = rand() % 45 + 25; break;
		}
	}
}
void Player::setdrawfoul(Player player)
{
	switch (playstyle)
	{
	case Scorer:
	case Athletic:
	case All:
	case Twoway: drawfoul = rand() % 50 + 40; break;
	default: drawfoul = rand() % 55 + 25; break;
	}
}
void Player::setstandclose(Player player)
{
	switch (playstyle)
	{
	case Scorer:
	case Postup: standclose = rand() % 20 + 75; break;
	case Athletic:
	case All:
	case Twoway: standclose = rand() % 25 + 60; break;
	default: standclose = rand() % 25 + 50; break;
	}
}
void Player::setstandmedgen(Player playern)
{
	if (positionmain <= 2)
	{
		switch (playstyle)
		{
		case Scorer: standmed = rand() % 17 + 70; break;
		case All:
		case Twoway: standmed = rand() % 20 + 65; break;
		default: standmed = rand() % 25 + 55; break;
		}
	}
	else
	{
		switch (playstyle)
		{
		case Scorer:
		case All:
		case Twoway: standmed = rand() % 20 + 65; break;
		default: standmed = rand() % 50 + 25; break;
		}
	}
}
void Player::setstandthreegen(Player player)
{
	if (positionmain <= 2)
	{
		switch (playstyle)
		{
		case Scorer: standthree = rand() % 13 + 70; break;
		case All:
		case Twoway: standthree = rand() % 15 + 65; break;
		default: standthree = rand() % 20 + 55; break;
		}
	}
	else
	{
		standthree = rand() % 55 + 25;
	}
}
void Player::setmoving(Player player)
{
	switch (playstyle)
	{
	case Scorer: moving = rand() % 30 + 60; break;
	default: moving = rand() % 65 + 25; break;
	}
}
void Player::setmoveclosegen(Player player)
{
	if (positionmain <= 2)
	{
		if (standclose >= 70)
		{
			moveclose = (moving + standclose) / 2;
		}
		else 
		{
			moveclose = static_cast<int>((moving*.5 + standclose*1.5)) / 2;
		}
	}
	else 
	{
		if (standclose >= 70)
		{
			moveclose = static_cast<int>((moving* .7 + standclose * 1.3)) / 2;
		}
		else if (standclose >= 50)
		{
			moveclose = static_cast<int>((moving*.5 + standclose*1.5)) / 2;
		}
		else { moveclose = 25; }
	}
}
void Player::setmovemedgen(Player player)
{
	if (positionmain <= 2)
	{
		if (standmed >= 70)
		{
			movemed = (moving + standmed) / 2;
		}
		else
		{
			movemed = static_cast<int>((moving*.5 + standmed*1.5)) / 2;
		}
	}
	else
	{
		if (standmed >= 70)
		{
			movemed = static_cast<int>((moving* .7 + standmed * 1.3)) / 2;
		}
		else if (standmed >= 50)
		{
			movemed = static_cast<int>((moving*.5 + standmed*1.5)) / 2;
		}
		else { movemed = 25; }
	}
}
void Player::setmovethreegen(Player player)
{
	if (positionmain <= 2)
	{
		if (standthree >= 70)
		{
			movethree = (moving + standthree) / 2;
		}
		else 
		{
			movethree = static_cast<int>((moving*.5 + standthree*1.5)) / 2;
		}
	}
	else 
	{
		if (standthree >= 70)
		{
			movethree = static_cast<int>((moving* .7 + standthree * 1.3)) / 2;
		}
		else if (standthree >= 50)
		{
			movethree = static_cast<int>((moving*.5 + standthree*1.5)) / 2;
		}
		else { movethree = 25; }
	}
}
void Player::setfreethrowgen(Player player)
{
	freethrow = (standmed + standclose) / 2 + rand() % 10;
}
void Player::sethandlegen(Player player)
{
	switch (positionmain)
	{
	case 0: handle = rand() % 25 + 70; break;
	case 1: handle = rand() % 30 + 60; break;
	case 2: handle = rand() % 35 + 50; break;
	case 3: handle = rand() % 45 + 25; break;
	case 4: handle = rand() % 45 + 25; break;
	}
}
void Player::setvisiongen(Player player)
{
	switch (playstyle)
	{
	case Playmaker: vision = rand() % 20 + 70; break;
	case All:
	case Twoway: vision = rand() % 30 + 50; break;
	default: vision = rand() % 35 + 25; break;
	}
}
void Player::setorebgen(Player player)
{
	if (positionmain >= 2)
	{
		switch (playstyle)
		{
		case Rebounder: oreb = rand() % 25 + 70; break;
		default: oreb = rand() % 40 + 40; break;
		}
	}
	else
	{
		oreb = rand() % 35 + 25;
	}
}
void Player::setdrebgen(Player player)
{
	if (positionmain >= 2)
	{
		switch (playstyle)
		{
		case Rebounder: dreb = rand() % 25 + 70; break;
		default: dreb = rand() % 40 + 40; break;
		}
	}
	else
	{
		dreb = rand() % 35 + 25;
	}
}
void Player::setstanddunkgen(Player player)
{
	switch (positionmain)
	{
	case 0: standdunk = rand() % 25 + 25; break;
	case 1: standdunk = rand() % 40 + 25; break;
	case 2: standdunk = rand() % 50 + 35; break;
	case 3: standdunk = rand() % 45 + 45; break;
	case 4: standdunk = rand() % 45 + 45; break;
	}

}
void Player::setdrivedunkgen(Player player)
{
	if (athleticism == 0)
	{
		switch (playstyle)
		{
		case Athletic: drivedunk = rand() % 20 + 70; break;
		default: drivedunk = rand() % 20 + 60; break;
		}
	}
	else if (athleticism == 1)
	{
		switch (playstyle)
		{
		case Athletic: drivedunk = rand() % 25 + 65; break;
		default: drivedunk = rand() % 30 + 50; break;
		}
		}
	else if (height >= 76)
	{
		drivedunk = rand() % 30 + 50;
	}
	else
	{
		drivedunk = 25;
	}
}
void Player::setcontdunkgen(Player player)
{
	switch (positionmain)
	{
	case 0: if (drivedunk >= 70)
	{
		contdunk = rand() % 35 + 25;
	}
			else { contdunk = 25; } break;
	case 1: if (drivedunk >= 70)
	{
		contdunk = rand() % 50 + 25;
	}
			else { contdunk = 25; } break;
	case 2: if (drivedunk >= 70)
	{
		contdunk = rand() % 50 + 25;
	}
			else { contdunk = 25; } break;
	case 3: if (drivedunk >= 70 || standdunk >= 90)
	{
		contdunk = rand() % 60 + 25;
	}
			else { contdunk = 25; } break;
	case 4: if (drivedunk >= 70 || standdunk >= 90)
	{
		contdunk = rand() % 60 + 25;
	}
			else { contdunk = 25; } break;
	}
	if (contdunk < 25)
	{
		contdunk = 25;
	}

}
void Player::setcontest(Player player)
{
	switch (playstyle)
	{
	case Defender:
	case All:
	case Twoway: contest = rand() % 25 + 65; break;
	default: contest = rand() % 55 + 25; break;
	}
}
void Player::setpicknrolld(Player player)
{
	switch (playstyle)
	{
	case Defender:
	case Athletic:
	case All:
	case Twoway: picknrolld = rand() % 30 + 50; break;
	default: picknrolld = rand() % 50 + 25; break;
	}
}
void Player::sethelpd(Player player)
{
	switch (playstyle)
	{
	case Defender: helpd = rand() % 20 + 60; break;
	default: helpd = rand() % 50 + 25; break;
	}
}
void Player::setonballgen(Player player)
{
	if (positionmain <= 2)
	{
		switch (playstyle)
		{
		case Defender: onball = rand() % 23 + 60; break;
		case Twoway:
		case All:
		case Athletic: onball = rand() % 18 + 60; break;
		default: onball = rand() % 35 + 40; break;
		}
	}
	else
	{
		switch (playstyle)
		{
		case Defender: onball = rand() % 20 + 40; break;
		default: onball = rand() % 40 + 25; break;
		}			 
	}
}
void Player::setblockgen(Player player)
{
	if (positionmain >= 2)
	{
		switch (playstyle)
		{
		case Defender:
		case Athletic:
		case All:
		case Twoway: block = rand() % 35 + 60; break;
		default: block = rand() % 55 + 25; break;
		}
	}
	else
	{
		block = rand() % 40 + 25;
	}
}
void Player::setsteal(Player player)
{
	if (positionmain <= 2)
	{
		switch (playstyle)
		{
		case Defender: steal = rand() % 39 + 60; break;
		case Athletic:
		case Twoway:
		case All: steal = rand() % 45 + 50; break;
		default: steal = rand() % 20 + 50; break;
		}
	}
	else
	{
		switch (playstyle)
		{
		case Defender: steal = rand() % 35 + 60; break;
		case Athletic:
		case Twoway:
		case All: steal = rand() % 35 + 50; break;
		default: steal = rand() % 50 + 30; break;
		}
	}
}
void Player::setpostdgen(Player player)
{
	if (positionmain >= 2)
	{
		switch (playstyle)
		{
		case Defender: postd = rand() % 20 + 60; break;
		case All:
		case Twoway: postd = rand() % 20 + 55; break;
		default: postd = rand() % 35 + 35; break;
		}
	}
	else
	{
		postd = rand() % 35 + 25;
	}
}
void Player::setreactgen(Player player)
{
	switch (playstyle)
	{
	case Defender: react = rand() % 20 + 70; break;
	case All:
	case Twoway: react = rand() % 30 + 60; break;
	default: react = rand() % 35 + 35; break;
	}
}
void Player::setstamgen(Player player)
{
	switch (positionmain)
	{
	case 0: stamina = rand() % 14 + 85; break;
	case 1: stamina = rand() % 14 + 85;  break;
	case 2: stamina = rand() % 19 + 80; break;
	case 3: stamina = rand() % 30 + 60; break;
	case 4: stamina = rand() % 30 + 60; break;
	}
}
void Player::setquicknessgen(Player player)
{
	if (speed == 99)
	{
		quickness = speed - rand() % 9;
	}
	else if (speed >= 80)
	{
		quickness = speed + (rand() % (99 - speed)) - rand() % 10;
	}
	else
	{
		switch (positionmain)
		{
		case 0: quickness = rand() % 30 + 60; break;
		case 1: quickness = rand() % 30 + 60; break;
		case 2: quickness = rand() % 40 + 40; break;
		case 3: quickness = rand() % 35 + 25; break;
		case 4: quickness = rand() % 35 + 25; break;
		}
	}
}
void Player::setspeedgen(Player player)
{
	
	switch (athleticism)
	{
	case 0:
		switch (positionmain)
		{
		case 0: speed = rand() % 19 + 80; break;
		case 1: speed = rand() % 24 + 75; break;
		case 2: speed = rand() % 25 + 70; break;
		case 3: speed = rand() % 25 + 50; break;
		case 4: speed = rand() % 25 + 50; break;
		}break;
	case 1: switch (positionmain)
	{
	case 0: speed = rand() % 15 + 70; break;
	case 1: speed = rand() % 15 + 70;  break;
	case 2: speed = rand() % 20 + 60; break;
	case 3: speed = rand() % 25 + 25; break;
	case 4: speed = rand() % 25 + 25; break;
	}break;
	case 2: switch (positionmain)
	{
	case 0: speed = rand() % 10 + 65; break;
	case 1: speed = rand() % 15 + 60;  break;
	case 2: speed = rand() % 15 + 55; break;
	case 3: speed = rand() % 15 + 25; break;
	case 4: speed = rand() % 15 + 25; break;
	}break;
	}
	if (weight >= 270)
	{
		speed = rand() % 10 + 25;
	}
}
void Player::setaccelgen(Player player)
{
	if (speed == 99)
	{
		acceleration = speed - rand() % 9;
	}
	else if (speed >= 90)
	{
		acceleration = speed + (rand() % (99 - speed)) - (rand() % 10);
	}
	else 
	{
		acceleration = speed + (rand() % 10) - (rand() % 10);
	}
	if (acceleration < 25 )
	{
		acceleration = 25;
	}
}
void Player::setstrengthgen(Player player)
{
	if (weight >= 280)
	{
		strength = rand() % 19 + 80;
	}
	else if (weight >= 250)
	{
		strength = rand() % 29 + 70;
	}
	else if (weight >= 220)
	{
		strength = rand() % 45 + 40;
	}
	else if (weight >= 180)
	{
		strength = rand() % 35 + 25;
	}
	else
	{
		strength = rand() % 20 + 25;
	}
}
void Player::setvertgen(Player player)
{
	switch (positionmain)
	{
	case 0: if (athleticism == 0)
	{
		vertical = rand() % 19 + 80;
	}
			else if (athleticism == 1)
			{
				vertical = rand() % 20 + 70;
			}
			else
			{
				vertical = rand() % 30 + 50;
			}break;
	case 1: if (athleticism == 0)
	{
		vertical = rand() % 19 + 80;
	}
			else if (athleticism == 1)
			{
				vertical = rand() % 20 + 70;
			}
			else
			{
				vertical = rand() % 30 + 50;
			}break;
	case 2: if (athleticism == 0)
	{
		vertical = rand() % 19 + 80;
	}
			else if (athleticism == 1)
			{
				vertical = rand() % 20 + 70;
			}
			else
			{
				vertical = rand() % 30 + 50;
			}break;
	case 3: if (athleticism == 0)
	{
		vertical = rand() % 40 + 50;
	}
			else
			{
				vertical = rand() % 50 + 25;
			}break;
	case 4: if (athleticism == 0)
	{
		vertical = rand() % 40 + 50;
	}
			else
			{
				vertical = rand() % 50 + 25;
			}break;
	}
	if (vertical < 25)
	{
		vertical = 25;
	}
}
void Player::setpasspercepgen(Player player)
{
	if (steal >= 90)
	{
		passperception = rand() % 14 + 75;
	}
	else if (steal >= 80)
	{
		passperception = rand() % 39 + 60;
	}
	else if (steal >= 70)
	{
		passperception = rand() % 40 + 50;
	}
	else
	{
		passperception = rand() % 30 + 50;
	}
}

// functions for setting tendencies
void Player::setunderbasketgen(Player player)
{
	switch (positionmain)
	{
	case 0: if (standlayup >= 75)
	{
		underbasket = rand() % 40 + 20;
	}
			else {
				underbasket = rand() % 14 + 1;
			} break;
	case 1: if (standlayup >= 75)
	{
		underbasket = rand() % 50 + 20;
	}
			else {
				underbasket = rand() % 14 + 1;
			} break;
	case 2: if (standlayup >= 75)
	{
		underbasket = rand() % 50 + 30;
	}
			else {
				underbasket = rand() % 15 + 10;
			} break;
	case 3: if (standlayup >= 80)
	{
		underbasket = rand() % 70 + 30;
	}
			else {
				underbasket = rand() % 15 + 10;
			} break;
	case 4: if (standlayup >= 80)
	{
		underbasket = rand() % 70 + 30;
	}
			else {
				underbasket = rand() % 15 + 10;
			} break;
	}
}
void Player::setclose(Player player)
{
	// generate close
	if (standclose >= 80)
	{
		close = rand() % 70 + 30;
	}
	else if (standclose >= 70)
	{
		close = rand() % 35 + 20;
	}
	else if (standclose >= 60)
	{
		close = rand() % 15 + 5;
	}
	else
	{
		close = 0;
	}

	//generate close left/right/center

	if (close > 0)
	{
		closeleft = rand() % close;
		closeright = rand() % close;
		closemid = rand() % close;
	}
	else {
		closeleft = closeright = closemid = 0;
	}
}
void Player::setmid(Player player)
{
	// generate mid
	if (standmed >= 80)
	{
		mid = rand() % 70 + 30;
	}
	else if (standmed >= 65)
	{
		mid = rand() % 40 + 10;
	}
	else {
		mid = 0;
	}

	// generate mid left/right/centers
	if (mid > 0)
	{
		midleft = rand() % mid;
		midright = rand() % mid;
		midcenter = rand() % mid;
		midleftcenter = rand() % mid;
		midrightcenter = rand() % mid;
	}
	else {
		midleft = midright = midcenter = 0;
		midleftcenter = midrightcenter = 0;
	}
}
void Player::setthree(Player player)
{
	// generate three
	if (standthree >= 75)
	{
		three = rand() % 70 + 10;
	}
	else if (standthree >= 50)
	{
		three = rand() % 30 + 3;
	}
	else {
		three = 0;
	}

	// generate three left/right/mid
	if (three > 0)
	{
		threeleft = rand() % three;
		threeright = rand() % three;
		threecent = rand() % three;
		threeleftcent = rand() % three;
		threerightcent = rand() % three;
		threecent = rand() % three;
	}
	else {
		threeleft = threeright = threecent = 0;
		threeleftcent = threerightcent = threecent = 0;
	}
}
void Player::setcontested(Player player)
{
	if (standmed >= 70 || standthree >= 70 || standclose >= 80)
	{
		if (shotiq >= 90)
		{
			contested = rand() % 20;
		}
		else if (shotiq >= 70)
		{
			contested = rand() % 30;
		}
		else if (shotiq >= 60)
		{
			contested = rand() % 45;
		}
		else {
			contested = rand() % 100;
		}
	}
	else
	{
		contested = rand() % 30;
	}
}
void Player::setmoveshottype(Player player)
{
	switch (positionmain)
	{
	case 0: if (movemed >= 73)
	{
		stepbackshot = rand() % movemed;
		spinshot = rand() % 10;
		pullup = rand() % ((movemed + movethree) / 2);
	}
			else {
				stepbackshot = rand() % 5;
				spinshot = rand() % 2;
				pullup = rand() % 5;
			} break;
	case 1:if (movemed >= 73)
	{
		stepbackshot = rand() % movemed;
		spinshot = rand() % 10;
		pullup = rand() % ((movemed + movethree) / 2);
	}
		   else {
			   stepbackshot = rand() % 5;
			   spinshot = rand() % 2;
			   pullup = rand() % 5;
		   } break;
	case 2: if (movemed >= 73)
	{
		stepbackshot = rand() % movemed;
		spinshot = rand() % 10;
		pullup = rand() % ((movemed + movethree) / 2);
	}
			else {
				stepbackshot = rand() % 5;
				spinshot = rand() % 2;
				pullup = rand() % 5;
			} break;
	case 3: if (movemed >= 73)
	{
		stepbackshot = rand() % movemed;
		spinshot = rand() % 10;
		pullup = rand() % ((movemed + movethree) / 2);
	}
			else {
				stepbackshot = 0;
				spinshot = 0;
				pullup = 0;
			}break;
	case 4: if (movemed >= 73)
	{
		stepbackshot = rand() % movemed;
		spinshot = rand() % 10;
		pullup = rand() % ((movemed + movethree) / 2);
	}
			else {
				stepbackshot = 0;
				spinshot = 0;
				pullup = 0;
			}break;
	}
}
void Player::setstandlayup(Player player)
{
	switch (positionmain)
	{
	case 0: if (underbasket >= 75 || drivelayup >= 75)
	{
		standlayup = rand() % 50;
	}
			else {
				standlayup = rand() % 10;
			}break;
	case 1:  if (underbasket >= 75 || drivelayup >= 75)
	{
		standlayup = rand() % 50;
	}
			 else {
				 standlayup = rand() % 25;
			 }break;
	case 2:  if (underbasket >= 75 || drivelayup >= 75)
	{
		standlayup = rand() % 60 + 40;
	}
			 else {
				 standlayup = rand() % 30;
			 }break;
	case 3: if (underbasket >= 80)
	{
		standlayup = rand() % 40 + 60;
	}
			else {
				standlayup = rand() % 30 + 30;
			}break;
	case 4:  if (underbasket >= 80 )
	{
		standlayup = rand() % 40 + 60;
	}
			 else {
				 standlayup = rand() % 30 + 30;
			 }break;
	}
}
void Player::setdrivelayup(Player player)
{
	switch (positionmain)
	{
	case 0: drivelayup = rand() % 40 + 60; break;
	case 1: if (layup >= 77)
	{
		drivelayup = rand() % 60 + 40;
	}
			else {
				drivelayup = rand() % 40;
			}break;
	case 2: if (layup >= 77)
	{
		drivelayup = rand() % 60 + 40;
	}
			else {
				drivelayup = rand() % 40;
			}break;
	case 3: if (layup >= 75)
	{
		drivelayup = rand() % 40 + 5;
	}
			else {
				drivelayup = rand() % 10;
			}break;
	case 4: if (layup >= 75)
	{
		drivelayup = rand() % 40;
	}
			else {
				drivelayup = rand() % 10;
			}break;
	}
}
void Player::setdunkdrive(Player player)
{
		if (drivedunk >= 50)
		{
			switch (positionmain)
		{
		case 0: if (drivedunk >= 60 && strength >= 60)
		{
			dunkdrive = rand() % 15 + 5;
		}
				else
				{
					dunkdrive = rand() % 4 + 1;
				}break;
		case 1:  if (drivedunk >= 60 && strength >= 60)
		{
			dunkdrive = rand() % 20 + 5;
		}
				 else
				 {
					 dunkdrive = rand() % 14 + 1;
				 }break;
		case 2:  if (drivedunk >= 60 && strength >= 60)
		{
			dunkdrive = rand() % 25 + 5;
		}
				 else
				 {
					 dunkdrive = rand() % 14 + 1;
				 }break;
		case 3:  if (drivedunk >= 75 && vertical >= 70)
		{
			dunkdrive = rand() % 35 + 5;
		}
				 else
				 {
					 dunkdrive = rand() % 19 + 1;
				 }break;
		case 4:  if (drivedunk >= 75 && vertical >= 70)
		{
			dunkdrive = rand() % 35 + 5;
		}
				 else
				 {
					 dunkdrive = rand() % 24 + 1;
				 }break;
		}
	}
		else
		{
			dunkdrive = 0;
		}
}
void Player::setdunkstand(Player player)
{
	switch (positionmain)
	{
	case 0: if (height >= 74 && standdunk >= 50)
			{
				dunkstand = rand() % 15;
			}
			else
			{
				dunkstand = 0;
			} break;
	case 1: if (height >= 74 && standdunk >= 50)
			{
				dunkstand = rand() % 15;
			}
			else
			{
				dunkstand = 0;
			} break;
	case 2: if (standdunk >= 70)
			{
				dunkstand = rand() % 50 + 10;
			}
			else if (standdunk >= 50)
			{
				dunkstand = rand() % 25;
			}
			else
			{
				dunkstand = 0;
			} break;
	case 3: if (standdunk >= 80)
			{
				dunkstand = rand() % 70 + 30;
			}
			else if (standdunk >= 60)
			{
				dunkstand = rand() % 30 + 5;
			}
			else
			{
				dunkstand = 0;
			}break;
	case 4: if (standdunk >= 80)
			{
				dunkstand = rand() % 70 + 30;
			}
			else if (standdunk >= 60)
			{
				dunkstand = rand() % 30 + 5;
			} 
			else
			{
				dunkstand = 0;
			} break;
	}
}
void Player::setflashdunk(Player player)
{
	if (drivedunk >= 70)
	{
		switch (positionmain)
		{
		case 0: flashdunk = rand() % 70 + 30; break;
		case 1: flashdunk = rand() % 70 + 30; break;
		case 2: flashdunk = rand() % 70 + 30; break;
		case 3: flashdunk = rand() % 50; break;
		case 4: flashdunk = rand() % 50; break;
		}
	}
	else
	{
		flashdunk = 0;
	}
}
void Player::setoop(Player player)
{
	if (vertical >= 60 && (drivedunk >= 70 || standdunk >= 80))
	{
		switch (positionmain)
		{
		case 0: oop = rand() % 10 + 5; break;
		case 1: oop = rand() % 30 + 5; break;
		case 2: oop = rand() % 40 + 10; break;
		case 3: oop = rand() % 80 + 20; break;
		case 4: oop = rand() % 80 + 20; break;
		}
	}
	else
	{
		oop = 0;
	}
}
void Player::setcrash(Player player)
{
	switch (positionmain)
	{
	case 0: crash = rand() % 100; break;
	case 1: crash = rand() % 100; break;
	case 2: crash = rand() % 100; break;
	case 3: crash = rand() % 50; break;
	case 4: crash = rand() % 35; break;
	}
}
void Player::setlayuptypes(Player player)
{

	switch (positionmain)
	{
	case 0: spinlayup = rand() % 100;
		hopstep = rand() % 100;
		euro = rand() % 100;
		floater = rand() % 100; break;
	case 1: spinlayup = rand() % 100;
		hopstep = rand() % 100;
		euro = rand() % 100;
		floater = rand() % 100; break;
	case 2: spinlayup = rand() % 100;
		hopstep = rand() % 100;
		euro = rand() % 100;
		floater = rand() % 100; break;
	case 3: if (layup >= 75)
	{
		spinlayup = rand() % 25;
		hopstep = rand() % 25;
		euro = rand() % 25;
		floater = rand() % 10;
	}
			else
			{
				hopstep = spinlayup = euro = floater = 0;
			} break;
	case 4: if (layup >= 75)
	{
		spinlayup = rand() % 25;
		hopstep = rand() % 25;
		euro = rand() % 25;
		floater = rand() % 10;
	}
			else
			{
				hopstep = spinlayup = euro = floater = 0;
			} break;
	}
}
void Player::settripletypes(Player player)
{
	// set pumpfake
	if ((three >= 10 || mid >= 10) && drive >= 20)
	{
		switch (positionmain)
		{
		case 0: pumpfake = rand() % 50; break;
		case 1: pumpfake = rand() % 50; break;
		case 2: pumpfake = rand() % 50; break;
		case 3: pumpfake = rand() % 50; break;
		case 4: pumpfake = rand() % 50; break;
		}
	}
	else 
	{
		pumpfake = 0;
	}

	// set jabstep
	if ((three >= 30 || mid >= 20) && drive >= 40)
	{
		switch (positionmain)
		{
		case 0: jabstep = rand() % 25; break;
		case 1: jabstep = rand() % 100; break;
		case 2: jabstep = rand() % 100; break;
		case 3: jabstep = rand() % 20; break;
		case 4: jabstep = rand() % 20; break;
		}
	}
	else
	{
		jabstep = 0;
	}

	// set triple threat shoot
	if ((three >= 5 || mid >= 5) && (jabstep >= 2 || pumpfake >= 2))
	{
		switch (positionmain)
		{
		case 0: ttshoot = rand() % ((jabstep + pumpfake) / 2); break;
		case 1: ttshoot = rand() % ((jabstep + pumpfake) / 2); break;
		case 2: ttshoot = rand() % ((jabstep + pumpfake) / 2); break;
		case 3: ttshoot = rand() % ((jabstep + pumpfake) / 2); break;
		case 4: ttshoot = rand() % ((jabstep + pumpfake) / 2); break;
		}
	}
	else
	{
		ttshoot = 0;
	}

	// set idle
	if ((ttshoot + jabstep + pumpfake >= 100))
	{
		idle = rand() % 5;
	}
	else
	{
		idle = 100 - (ttshoot + jabstep + pumpfake);
	}

}
void Player::setsizeuptypes(Player player)
{
	// gen setup with sizeup
	if (drive >= 40)
	{
		switch (positionmain)
		{
		case 0: setsizeup = rand() % 100; break;
		case 1: setsizeup = rand() % 100; break;
		case 2: if (handle >= 60)
				{
					setsizeup = rand() % 100;
				}
				else
				{
					setsizeup = 0;
				}break;
		case 3: if (handle >= 50)
				{
					setsizeup = rand() % 10;
				}
				else
				{
					setsizeup = 0;
				}break;
		case 4: if (handle >= 50)
				{
				setsizeup = rand() % 10;
				}
				else
				{
					setsizeup = 0;
				}break;
		}
	}
	else
	{
		setsizeup = 0;
	}

	// set setup with hesitation 
	if (setsizeup < 100)
	{
		if (drive >= 40)
		{
			switch (positionmain)
			{
			case 0: sethesi = rand() % (100 - setsizeup); break;
			case 1: sethesi = rand() % (100 - setsizeup); break;
			case 2: if (handle >= 60)
			{
				sethesi = rand() % (100 - setsizeup);
			}
					else
					{
						sethesi = 0;
					}break;
			case 3: if (handle >= 50)
			{
				sethesi = rand() % 10;
			}
					else
					{
						sethesi = 0;
					}break;
			case 4: if (handle >= 50)
			{
				sethesi = rand() % 10;
			}
					else
					{
						sethesi = 0;
					}break;
			}
		}
		else
		{
			sethesi = 0;
		}
	}

	// set no dribble
	nodribble = 100 - sethesi - setsizeup;
}
void Player::setdrive(Player player)
{
	// set drive
	if (speed >= 80)
	{
		drive = rand() % 80 + 20;
	}
	else 
	{ 
		switch (positionmain)
		{
		case 0: drive = rand() % drivelayup; break;
		case 1: drive = rand() % drivelayup; break;
		case 2: drive = rand() % drivelayup; break;
		case 3: drive = rand() % drivelayup; break;
		case 4: drive = rand() % drivelayup; break;
		}
	}
}
void Player::setdribbles(Player player)
{
	int temp; // used for determining no dribble move vs dribble moves
	
	// set crossover
	if (handle >= 60)
	{
		switch (positionmain)
		{
		case 0: crossover = rand() % handle; break;
		case 1: crossover = rand() % handle; break;
		case 2: crossover = rand() % handle; break;
		case 3: crossover = rand() % 5; break;
		case 4: crossover = rand() % 5; break;
		}
	}
	else
	{
		crossover = 0;
	}

	// set spin
	if (handle >= 60)
	{
		switch (positionmain)
		{
		case 0: spin = rand() % 30; break;
		case 1: spin = rand() % 30; break;
		case 2: spin = rand() % 30; break;
		case 3: spin = rand() % 5; break;
		case 4: spin = rand() % 5; break;
		}
	}
	else
	{
		spin = 0;
	}

	// set stepback
	if (handle >= 60 && stepbackshot > 30)
	{
		switch (positionmain)
		{
		case 0: stepback = rand() % stepbackshot; break;
		case 1: stepback = rand() % stepbackshot; break;
		case 2: stepback = rand() % stepbackshot; break;
		case 3: stepback = rand() % 2; break;
		case 4: stepback = rand() % 2; break;
		}
	}
	else
	{
		stepback = 0;
	}

	// set halfspin
	if (handle >= 80)
	{
		switch (positionmain)
		{
		case 0: halfspin = rand() % 10; break;
		case 1: halfspin = rand() % 10; break;
		case 2: halfspin = rand() % 10; break;
		case 3: halfspin = rand() % 2; break;
		case 4: halfspin = rand() % 2; break;
		}
	}
	else
	{
		halfspin = 0;
	}

	// set doublecross
	if (handle >= 70 && crossover >= 5)
	{
		switch (positionmain)
		{
		case 0: doublecross = rand() % crossover; break;
		case 1: doublecross = rand() % crossover; break;
		case 2: doublecross = rand() % crossover; break;
		case 3: doublecross = rand() % crossover; break;
		case 4: doublecross = rand() % crossover; break;
		}
	}
	else
	{
		doublecross = 0;
	}

	// set behindback
	if (handle >= 60)
	{
		switch (positionmain)
		{
		case 0: behindback = rand() % 70; break;
		case 1: behindback = rand() % 70; break;
		case 2: behindback = rand() % 60; break;
		case 3: behindback = rand() % 10; break;
		case 4: behindback = rand() % 10; break;
		}
	}
	else
	{
		behindback = 0;
	}

	// set hesitate
	if (handle >= 60)
	{
		switch (positionmain)
		{
		case 0: hesitate = rand() % 70; break;
		case 1: hesitate = rand() % 70; break;
		case 2: hesitate = rand() % 70; break;
		case 3: hesitate = rand() % 10; break;
		case 4: hesitate = rand() % 10; break;
		}
	}
	else
	{
		hesitate = 0;
	}

	// set innout
	if (handle >= 75)
	{
		switch (positionmain)
		{
		case 0: innout = rand() % 50; break;
		case 1: innout = rand() % 40; break;
		case 2: innout = rand() % 30; break;
		case 3: innout = rand() % 2; break;
		case 4: innout = rand() % 2; break;
		}
	}
	else
	{
		innout = 0;
	}

	// set nomove
	temp = hesitate + crossover + spin + innout + behindback;

	if (handle < 60 || temp == 0)
	{
		nomove = 100;
	}
	else
	{
		switch (positionmain)
		{
		case 0: nomove = rand() % 49 + 50; break;
		case 1: nomove = rand() % 49 + 50; break;
		case 2: nomove = rand() % 19 + 80; break;
		case 3: nomove = 99; break;
		case 4: nomove = 99; break;
		}
	}
}
void Player::setattack(Player player)
{
	if (drivelayup >= 75)
	{
		attack = rand() % 30 + 70;
	}
	else
	{
		attack = rand() % 40 + 30;
	}
}
void Player::setflashypass(Player player)
{
	if (vision >= 80)
	{
		flashypass = rand() % 30;
	}
	else if (vision >= 70)
	{
		switch (positionmain)
		{
		case 0: flashypass = rand() % 10; break;
		case 1: flashypass = rand() % 10; break;
		case 2: flashypass = rand() % 10; break;
		case 3: flashypass = rand() % 3; break;
		case 4: flashypass = rand() % 3; break;
		}
	}
	else 
	{ 
		flashypass = 0; 
	}
}
void Player::setooppass(Player player)
{
	if (vision >= 70)
	{
		ooppass = rand() % 70 + 30;
	}
	else if (vision >= 50)
	{
		switch (positionmain)
		{
		case 0: ooppass = rand() % 30 + 30; break;
		case 1: ooppass = rand() % 30 + 30; break;
		case 2: ooppass = rand() % 20 + 30; break;
		case 3: ooppass = rand() % 20; break;
		case 4: ooppass = rand() % 20; break;
		}
	}
	else if (vision >= 40)
	{
		ooppass = rand() % 10;
	}
	else
	{
		ooppass = 0;
	}
}
void Player::setpostup(Player player)
{
	postup = 0;
	
	if (hook < 60 && fade < 60)
	{
		postup = 0;
	}
	else if (hook >= 65 || fade >= 65)
	{
		switch (positionmain)
		{
			case 1: postup = rand() % 10; break;
			case 2: postup = rand() % 20; break;
			case 3: postup = rand() % 65; break;
			case 4: postup = rand() % 100; break;
			case 5: postup = rand() % 100; break;
		}
	}
	else
	{
		switch (positionmain)
		{
			case 1: postup = rand() % 3; break;
			case 2: postup = rand() % 5; break;
			case 3: postup = rand() % 10; break;
			case 4: postup = rand() % 40; break;
			case 5: postup = rand() % 40; break;
		}
	}
}
void Player::setshimmy(Player player)
{
	 if (fade >= 70)
	{
		shimmy = rand() % 20;
	}
	else
	{
		shimmy = 0;
	}
}
void Player::setfaceup(Player player)
{
	if (drive > 5)
	{
		faceup = rand() % drive;
	}
	else
	{
		faceup = 0;
	}
}
void Player::setpostshottypes(Player player)
{
	// set post shot tendency
	
	if (postup > 1)
	{
		postshot = rand() % 95 + 5;
	}
	else
	{
		postshot = 0;
	}

	// set post fade
	if (fade >= 60)
	{
		fadeleft = rand() % (((postshot + fade) - 10) / 2) + 10;
		faderight = rand() % (((postshot + fade) - 10) / 2) + 10;
	}
	else
	{
		fadeleft = faderight = 0;
	}

	// set post hook
	if (hook >= 60)
	{
		hookleft = rand() % (((postshot + hook) / 2) - 10) + 10;
		hookright = rand() % (((postshot + hook) / 2) - 10) + 10;
	}
	else
	{
		hookright = hookleft = 0;
	}

	// set up and under
	{
		upnunder = rand() % 20;
	}

	// set hopshot
	if (fade >= 75)
		{
			hopshot = rand() % 20;
		}
	else
		{
			hopshot = 0;
		}


	// set post stepback
	if (fade >= 75)
	{
		poststepback = rand() % stepbackshot;
	}
	else
	{
		poststepback = 0;
	}

	// set post drive and spin
	if (posto >= 60)
	{
		postspin = rand() % (speed - 20);
		postdrive = rand() % (speed - 20);
	}
	else
	{
		postspin = rand() % 3;
		postdrive = rand() % 3;
	}

	// set dropstep
	if (postdrive > 1 && postspin > 1)
	{
		dropstep = rand() % ((postdrive + postspin) / 2);
	}
	else 
	{
		dropstep = rand() % 5;
	}

	// set post hopstep
	if (fade >= 50 && dropstep >= 10)
	{
		posthopstep = rand() % 10;
	}
	else
	{
		posthopstep = 0;
	}

	if (postup == 0) // fallthrough to set all post to 0 if postup is 0
	{
		posthopstep = 0;
		shimmy = 0;
		backdown = 0;
		aggresivebackdown = 0;
		fadeleft = 0;
		faderight = 0;
		hookleft = 0;
		hookright = 0;
		dropstep = 0;
		postshot = 0;
		poststepback = 0;
		faceup = 0;
		postspin = 0;
		postdrive = 0;
		upnunder = 0;
	}
}
void Player::setshot(Player player)
{
	if (standmed >= 75 || standthree >= 75 || standclose >= 75)
	{
		shot = rand() % 60 + 40;
	}
	else
	{
		shot = rand() % 20 + 40;
	}
}
void Player::settouches(Player player)
{
	if (shot >= 70)
	{
		switch (positionmain)
		{
		case 0: touches = rand() % 40 + 60; break;
		case 1: touches = rand() % 40 + 60; break;
		case 2: touches = rand() % 40 + 50; break;
		case 3: touches = rand() % 30 + 40; break;
		case 4: touches = rand() % 30 + 40; break;
		}
	}
	else
	{
		switch (positionmain)
		{
		case 0: touches = rand() % 30 + 50; break;
		case 1: touches = rand() % 30 + 50; break;
		case 2: touches = rand() % 30 + 30; break;
		case 3: touches = rand() % 25 + 25; break;
		case 4: touches = rand() % 25 + 25; break;
		}
	}
}
void Player::setrollvpop(Player player)
{
	if (standthree < 70 && standmed < 75)
	{
		rollvpop = 100;
	}
	else 
	{
		rollvpop = rand() % 100;
	}
}
void Player::setsteals(Player player)
{
	if (steal >= 90)
	{
		intercept = rand() % 30 + 70;
		onballsteal = rand() % 30 + 70;
	}
	else if (steal >= 80)
	{
		intercept = rand() % 20 + 70;
		onballsteal = rand() % 20 + 70;
	}
	else if (steal >= 60)
	{
		intercept = rand() % 30 + 30;
		onballsteal = rand() % 30 + 30;
	}
	else
	{
		intercept = rand() % 20 + 20;
		onballsteal = rand() % 20 + 20;
	}
}
void Player::sethardfoul(Player player)
{
	switch (positionmain)
	{
	case 0: hardfoul = rand() % 10; break;
	case 1: hardfoul = rand() % 10; break;
	case 2: hardfoul = rand() % 20; break;
	case 3: hardfoul = rand() % 20; break;
	case 4: hardfoul = rand() % 20; break;
	}
}
void Player::setpositiontwogen(Player player)
{
	switch (positionmain)
	{
	case 0: if (height >= 75 && standthree >= 70)
	{
		positiontwo = "Shooting Guard";
	}
			else
			{
				positiontwo = "None";
			} break;
	case 1: if (height <= 76 && vision >= 60 && handle >= 70)
	{
		positiontwo = "Point Guard";
	}
			else if (height >= 78)
			{
				positiontwo = "Small Forward";
			}
			else
			{
				positiontwo = "None";
			} break;
	case 2: if (height >= 81)
	{
		positiontwo = "Powerforward";
	}
			else if (height <= 79 && standthree >= 70)
			{
				positiontwo = "Shooting Guard";
			}
			else
			{
				positiontwo = "None";
			} break;
	case 3: if (height >= 82)
	{
		positiontwo = "Center";
	}
			else if (height <= 81 && speed >= 65 && standthree >= 70 && handle >= 50)
			{
				positiontwo = "Small Forward";
			}
			else
			{
				positiontwo = "None";
			} break;
	case 4: if (weight <= 270 && speed > 40)
	{
		positiontwo = "Power Forward";
	}
			else
			{
				positiontwo = "None";
			}break;
	}
}
void Player::setpersonalitybadges(Player player)
{
	starpower = rand() % 100;
	competitor = rand() % 100;
	swag = rand() % 100;
	desire = rand() % 100;
	ego = rand() % 100;
	coachable = rand() % 100;
	personalitybadges = "";

	if (starpower >= 90 && potential >= 80)
	{
		personalitybadges += "Beta Dog, Prime Time, ";
	}
	if (competitor >= 90)
	{
		personalitybadges += "Road Dog, Fierce Competitor, ";
	}
	else if (competitor >= 80)
	{
		personalitybadges += "Fierce Competitor, ";
	}
	if (offconsistency >= 75)
	{
		personalitybadges += "Cool and Collected, ";
	}
	if (offconsistency <= 40 && shot >= 60)
	{
		personalitybadges += "Wildcard, ";
	}
	if (shot>= 80 && shotiq <= 60)
	{
		personalitybadges += "Volume Shooter, ";
	}
	if (swag >= 80)
	{
		personalitybadges += "Swagger, ";
	}
	if (desire >= 95)
	{
		personalitybadges += "Gold Gym Rat, Legendary Work Ethic, ";
	}
	else if (desire >= 90)
	{
		personalitybadges += "Silver Gym Rat, High Work Ethic, ";
	}
	else if (desire >= 80)
	{
		personalitybadges += "Bronze Gym Rat, ";
	}
	if (ego <= 30)
	{
		personalitybadges += "Low Ego, ";
	}
	else if (ego >= 85)
	{
		personalitybadges += "All-Time Great, ";
	}
	if (coachable >= 80)
	{
		personalitybadges += "Keep It Real, ";
	}
	else if (coachable <= 40)
	{
		personalitybadges += "Pat My Back, ";
	}
	if (expression >= 90)
	{
		personalitybadges += "Expressive";
	}
	else if (expression == 50)
	{
		personalitybadges += "Unpredictable";
	}
	else if (expression <= 20)
	{
		personalitybadges += "Laid Back";
	}
	if (personalitybadges == "")
	{
		personalitybadges = "None";
	}
}
void Player::setinsidebadges(Player player)
{
	int acrobat;
	insidebadges = "";

	acrobat = rand() % 100;

	if (layup >= 80)
	{
		if (spinlayup >= 70)
		{
			insidebadges += "Silver Spin Layin, ";
		}
		else if (spinlayup >= 50)
		{
			insidebadges += "Bronze Spin Layin, ";
		}
		if (hopstep >= 70)
		{
			insidebadges += "Silver Hop-Stepper, ";
		}
		else if(hopstep >= 50)
		{
			insidebadges += "Bronze Hop-Stepper, ";
		}
		if (euro >= 70)
		{
			insidebadges += "Silver King of Euros, ";
		}
		else if(euro >= 50)
		{
			insidebadges += "Bronze King of Euros, ";
		}
		if (floater >= 70)
		{
			insidebadges += "Silver Tear Dropper, ";
		}
		else if(floater >= 50)
		{
			insidebadges += "Bronze Tear Dropper, ";
		}
		if (acrobat >= 95)
		{
			insidebadges += "Silver Acrobat, ";
		}
		else if (acrobat >= 80)
		{
			insidebadges += "Bronze Acrobat, ";
		}
	}
	
	if (putback >= 20 && hustle >= 85 && oreb >= 50)
	{
		insidebadges += "Silver Hustle Points, ";
	}
	else if (putback >= 20 && hustle >= 80 && oreb >= 50)
	{
		insidebadges += "Bronze Hustle Points, ";
	}
	if (useglass >= 30)
	{
		insidebadges += "Silver Bank is Open, ";
	}
	if ((positionmain == 3 || positionmain == 4) && standthree >= 75 && underbasket >= 90)
	{
		insidebadges += "Bronze Screen Outlet, ";
	}
	if (strength >= 60 && drivelayup >= 80)
	{
		insidebadges += "Bronze Relentless Finisher, ";
	}
	if (posto >= 70)
	{
		if (postspin >= 30)
		{
			insidebadges += "Bronze Post Spin Technician, ";
		}
		if (dropstep >= 40)
		{
			insidebadges += "Bronze Drop-Stepper, ";
		}
		if (poststepback >= 20)
		{
			insidebadges += "Post Stepback Pro, ";
		}
	}
	if (hook >= 75)
	{
		insidebadges += "Bronze Hook Specialist";
	}
	if (insidebadges == "")
	{
		insidebadges = "None";
	}
}
void Player::setoutsidebadges(Player player)
{
	int heatcheck = rand() % 100;
	int range = rand() % 100;
	int deadeye = rand() % 100;
	outsidebadges = "";

	if (heatcheck >= 80 && shot >= 70)
	{
		outsidebadges += "Silver Microwave, ";
	}
	else if (heatcheck >= 70 && shot >= 60)
	{
		outsidebadges += "Bronze Microwave, ";
	}
	if (heatcheck >= 90)
	{
		outsidebadges += "Bronze Unfazed, ";
	}
	if ((threeleft >= 10 || threeright >= 10) && standthree >= 77)
	{ 
		outsidebadges += "Silver Corner Specialist, ";
	}
	else if ((threeleft >= 8 || threeright >= 8) && standthree >= 75)
	{
		outsidebadges += "Bronze Corner Specialist, ";
	}
	if (height >= 81 && (standmed >= 75 || standthree >= 75))
	{
		outsidebadges += "Bronze Deadeye, ";
	}
	else if ((standmed >= 75 || standthree >= 75) && deadeye >= 70)
	{
		outsidebadges += "Bronze Deadeye, ";
	}
	if (range >= 90 && standthree >= 75)
	{
		outsidebadges += "Silver Limitless Range, ";
	}
	else if (range >= 70 && standthree >= 75)
	{
		outsidebadges += "Bronze Limitless Range, ";
	}
	if (fade >= 75)
	{
		outsidebadges += "Bronze Fade Ace, ";
	}
	if (movemed >= 75 && movethree >= 75)
	{
		outsidebadges += "Bronze Shot Creator";
	}
	if (outsidebadges == "")
	{
		outsidebadges = "None";
	}
}
void Player::setplaymakingbadges(Player player)
{
	int anklebreaker = rand() % 100;
	int outlet = rand() % vision;
	playmakingbadges = "";

	if (handle >= 80 && anklebreaker >= 70)
	{
		if (crossover >= 50)
		{
			playmakingbadges += "Bronze Killer Crossover, ";
		}
		if (spin >= 20)
		{
			playmakingbadges += "Bronze Spin Kingpin, ";
		}
		if (behindback >= 30)
		{
			playmakingbadges += "Bronze Behind The Back Pro, ";
		}
		if (hesitate >= 30)
		{
			playmakingbadges += "Bronze Hesitation Stunner, ";
		}
		if (innout >= 20)
		{
			playmakingbadges += "Bronze Master Of In And Out, ";
		}
		if (setsizeup >= 10)
		{
			playmakingbadges += "Bronze Pet Move Size-up, ";
		}
	}
	if (flashypass >= 15)
	{
		playmakingbadges += "Bronze Flashy Passer, ";
	}
	if (outlet >= 45)
	{
		playmakingbadges += "Bronze Break Starter, ";
	}
	if ( positionmain <= 2 && handle >= 60 && (vision >= 80 || movemed >= 75 || movethree >= 75))
	{
		playmakingbadges += "Bronze Pick & Roll Maestro, ";
	}
	if (ooppass >= 70)
	{
		playmakingbadges += "Silver Lob City Passer, ";
	}
	else if (ooppass >= 50)
	{
		playmakingbadges += "Bronze Lob City Passer, ";
	}
	if (vision >= 80)
	{
		playmakingbadges += "Bronze Dimer";
	}
	if (playmakingbadges == "")
	{
		playmakingbadges = "None";
	}
}
void Player::setdefendingbadges(Player player)
{
	int highlightreel = rand() % 100;
	defendingbadges = "";

	if (positionmain <= 2 && onball >= 70)
	{
		defendingbadges += "Bronze Perimiter Lockdown, ";
	}
	if (positionmain >= 2 && postd >= 70)
	{
		defendingbadges += "Bronze Post Lockdown, ";
	}
	if (charge >= 50)
	{
		defendingbadges += "Bronze Charge Card, ";
	}
	if (positionmain <= 2 && picknrolld >= 70)
	{
		defendingbadges += "Bronze Pick Dodger, ";
	}
	if (intercept >= 85)
	{
		defendingbadges += "Silver Interceptor, ";
	}
	else if (intercept >= 75)
	{
		defendingbadges += "Bronze Interceptor, ";
	}
	if (onballsteal >= 85)
	{
		defendingbadges += "Silver Pick Pocket, ";
	}
	else if (onballsteal >= 75)
	{
		defendingbadges += "Bronze Pick Pocket, ";
	}
	if (block >= 70)
	{
		if (highlightreel >= 90)
		{
			defendingbadges += "Gold Eraser";
		}
		else if (highlightreel >= 80)
		{
			defendingbadges += "Silver Eraser";
		}
		else if (highlightreel >= 50)
		{
			defendingbadges += "Bronze Eraser";
		}
	}
	if (defendingbadges == "")
	{
		defendingbadges = "None";
	}
}
void Player::setathleticismbadges(Player player)
{
	int screensetter = rand() % 100;
	int solobreak = rand() % 100;
	int transition = rand() % 100;
	athleticismbadges = "";
	
	if (oop >= 80)
	{
		athleticismbadges += "Silver Lob City Finisher, ";
	}
	else if (oop >= 50)
	{
		athleticismbadges += "Bronze Lob City Finisher, ";
	}
	if (contdunk >= 70)
	{
		athleticismbadges += "Bronze Posterizer, ";
	}
	if (strength >= 95)
	{
		athleticismbadges += "Gold Bruiser, ";
	}
	else if (strength >= 85)
	{
		athleticismbadges += "Silver Bruiser, ";
	}
	else if (strength >= 80)
	{
		athleticismbadges += "Bronze Bruiser, ";
	}
	if (positionmain >= 2 && screensetter >= 80)
	{
		athleticismbadges += "Silver Brick Wall, ";
	}
	else if (positionmain >= 2 && screensetter >= 60)
	{
		athleticismbadges += "Bronze Brick Wall, ";
	}
	if (handle >= 60 && speed >= 70 && solobreak >= 80)
	{
		athleticismbadges += "Silver One Man Fast Break, ";
	}
	else if (handle >= 60 && speed >= 70 && solobreak >= 50)
	{
		athleticismbadges += "Bronze One Man Fast Break, ";
	}
	if (drivelayup >= 70 && transition >= 80)
	{
		athleticismbadges += "Silver Transition Finisher";
	}
	else if (drivelayup >= 70 && transition >= 50)
	{
		athleticismbadges += "Bronze Transition Finisher";
	}
	if (athleticismbadges == "")
	{
		athleticismbadges = "None";
	}
}
void Player::setreboundingbadges(Player player)
{
	reboundingbadges = "";
	if (hustle >= 90)
	{
		reboundingbadges += "Silver Scrapper, ";
	}
	else if (hustle >= 80)
	{
		reboundingbadges += "Bronze Scrapper, ";
	}
	if (height > 78 && oreb >= 85)
	{
		reboundingbadges += "Silver Offensive Crasher, ";
	}
	else if (height > 78 && oreb >= 80)
	{
		reboundingbadges += "Bronze Offensive Crasher, ";
	}
	if (height > 78 && dreb >= 85)
	{
		reboundingbadges += "Silver Defensive Crasher, ";
	}
	else if (height > 78 && dreb >= 80)
	{
		reboundingbadges += "Bronze Defensive Crasher";
	}
	if (height <= 78 && oreb >= 70)
	{
		reboundingbadges += "Bronze Offensive Crasher, ";
	}
	if (height <= 78 && dreb >= 50)
	{
		reboundingbadges += "Bronze Defensive Crasher";
	}
	if (reboundingbadges == "")
	{
		reboundingbadges = "None";
	}
}

	// sig style functions
void Player::setsiglayup(Player player)
{
	int i = 0; // initialzed to "basic layup"

	if (positionmain <= 2)
	{
		if (layup >= 75)
		{
			i = rand() % 18;
		}
		else {
			i = rand() % 2;
		}
			switch (i)
			{
			case 0: siglayup = "Guard"; break;
			case 1: siglayup = "Swing"; break;
			case 2: siglayup = "Anthony"; break;
			case 3: siglayup = "Crawford"; break;
			case 4: siglayup = "Curry"; break;
			case 5: siglayup = "Durant"; break;
			case 6: siglayup = "Ellis"; break;
			case 7: siglayup = "Harden"; break;
			case 8: siglayup = "James"; break;
			case 9: siglayup = "Lawson"; break;
			case 10: siglayup = "Rose"; break;
			case 11: siglayup = "Parker"; break;
			case 12: siglayup = "Paul"; break;
			case 13: siglayup = "Rondo"; break;
			case 14: siglayup = "Wade"; break;
			case 15: siglayup = "Wall"; break;
			case 16: siglayup = "Westbrook"; break;
			case 17: siglayup = "Irving"; break;
			}
	}
	else 
	{
		i = rand() % 3;
		switch (i)
		{
		case 0: siglayup = "Big"; break;
		case 1: siglayup = "Duncan"; break;
		case 2: siglayup = "Griffin"; break;
		}
	}
}
void Player::setsigdunks(Player player)
{
	int temp[15] = { 0 };
	string dunkone = "Basic Onehanders off One";
	string dunktwo = "Basic Twohanders off One";
	string dunkthree = "Basic Twohanders off Two";
	string dunkfour = "Athletic Onehanders off One";
	string dunkfive = "Athletic Onehanders off Two";
	string dunksix = "Athletic Hangs off Two";
	string dunkseven = "Quickdrops off One";
	string dunkeight = "Quickdrops off Two";
	string dunknine = "Baseline Reverses off One";
	string dunkten = "Side Arm Tomahawks";
	string dunkeleven = "Straight Arm Tomahawks";
	string dunktwelve = "Cockback Tomahawks";
	string dunkthirteen = "Leaning Slams";
	string dunkfourteen = "Uber Athletic Tomahawks off One";
	string dunkfifteen = "Backscratchers off Two";
	string dunksixteen = "Backscratchers off One";
	string dunkseventeen = "Clutch Reverse off Two";
	string dunkeighteen = "Reverses off one";
	string dunknineteen = "Side Clutches off one";
	string dunktwenty = "Front Clutches";
	string dunktwentone = "Cradle Dunks";
	string dunktwenttwo = "Windmills off One";
	string dunktwentthree = "Side Windmills";
	string dunktwentfour = "Athletic 360";
	int holder; 


	
	// initialize all dunk types to none
	for (int i = 0; i < 15; i++)
	{
		sigdunks[i] = "None";
	}

	// set underbasket dunk type
	if (drivedunk >= 40 && height <= 79)
	{
		sigdunks[0] = "Under Basket Athletic";
	}
	else if (drivedunk >= 40 && height >= 80)
	{
		sigdunks[0] = "Under Basket Regular";
	}

	// set drive dunk types
	if (drivedunk >= 45 && flashdunk >= 40)
	{
		int numdunks = rand() % 13 + 2; // number of dunks player will have	
			switch (positionmain)
			{
			case 0: holder = rand() % 23 + 1; break;
			case 1: holder = rand() % 23 + 1; break;
			case 2: holder = rand() % 23 + 1; break;
			case 3: holder = rand() % 19 + 1; break;
			case 4: holder = rand() % 19 + 1; break;
			}
			for (int i = 1; i < numdunks; i++)
			{
				bool unique;				
				do
				{
					holder = rand() % 23 + 1;
					unique = true;
					for (int j = 1; j < i; j++)
					{
						if (holder == temp[j])
						{
							unique = false;
							break;
						}
					}
				} while (!unique);

				temp[i] = holder;
				switch (holder)
				{
				case 1: sigdunks[i] = dunkone; break;
				case 2: sigdunks[i] = dunktwo; break;
				case 3: sigdunks[i] = dunkthree; break;
				case 4: sigdunks[i] = dunkfour; break;
				case 5: sigdunks[i] = dunkfive; break;
				case 6: sigdunks[i] = dunksix; break;
				case 7: sigdunks[i] = dunkseven; break;
				case 8: sigdunks[i] = dunkeight; break;
				case 9: sigdunks[i] = dunknine; break;
				case 10: sigdunks[i] = dunkten; break;
				case 11: sigdunks[i] = dunkeleven; break;
				case 12: sigdunks[i] = dunktwelve; break;
				case 13: sigdunks[i] = dunkthirteen; break;
				case 14: sigdunks[i] = dunkfourteen; break;
				case 15: sigdunks[i] = dunkfifteen; break;
				case 16: sigdunks[i] = dunksixteen; break;
				case 17: sigdunks[i] = dunkseventeen; break;
				case 18: sigdunks[i] = dunkeighteen; break;
				case 19: sigdunks[i] = dunknineteen; break;
				case 20: sigdunks[i] = dunktwenty; break;
				case 21: sigdunks[i] = dunktwentone; break;
				case 22: sigdunks[i] = dunktwenttwo; break;
				case 23: sigdunks[i] = dunktwentthree; break;
				case 24: sigdunks[i] = dunktwentfour; break;
				}
			}
		}
	else if (drivedunk >= 40)
	{
		int numdunks = rand() % 11 + 2; // number of dunks player will have

		for (int i = 1; i < numdunks; i++)
		{
			bool unique;
			do
			{
				holder = rand() % 12 + 1;
				unique = true;
				for (int j = 1; j < i; j++)
				{
					if (holder == temp[j])
					{
						unique = false;
						break;
					}
				}
			} while (!unique);

			temp[i] = holder;
			switch (holder)
			{
			case 1: sigdunks[i] = dunkone; break;
			case 2: sigdunks[i] = dunktwo; break;
			case 3: sigdunks[i] = dunkthree; break;
			case 4: sigdunks[i] = dunkfour; break;
			case 5: sigdunks[i] = dunkfive; break;
			case 6: sigdunks[i] = dunksix; break;
			case 7: sigdunks[i] = dunkseven; break;
			case 8: sigdunks[i] = dunkeight; break;
			case 9: sigdunks[i] = dunknine; break;
			case 10: sigdunks[i] = dunkten; break;
			case 11: sigdunks[i] = dunkeleven; break;
			case 12: sigdunks[i] = dunktwelve; break;
			case 13: sigdunks[i] = dunkthirteen; break;
			}
		}
	}
}
void Player::setsigpostgame(Player player)
{
	if (positionmain <= 2)
	{
		int tempfade = rand() % 13;
		int temphook = rand() % 11;
		int temphop = rand() % 10;
		int tempshimmy = rand() % 3;
		int tempprotect = rand() % 3;

		switch (tempfade)
		{
		case 0: sigfade = "Fade 1"; break;
		case 1: sigfade = "Fade 2"; break;
		case 2: sigfade = "Fade 3"; break;
		case 3: sigfade = "Fade 4"; break;
		case 4: sigfade = "Fade 5"; break;
		case 5: sigfade = "Fade 6"; break;
		case 6: sigfade = "Fade 7"; break;
		case 7: sigfade = "Fade 8"; break;
		case 8: sigfade = "Barnes"; break;
		case 9: sigfade = "Johnson"; break;
		case 10: sigfade = "Jordan"; break;
		case 11: sigfade = "Malone"; break;
		case 12: sigfade = "Nowitzki"; break;
		}

		switch (temphook)
		{
		case 0: sighook = "Hook 1"; break;
		case 1: sighook = "Hook 2"; break;
		case 2: sighook = "Hook 3"; break;
		case 3: sighook = "Hook 4"; break;
		case 4: sighook = "Hook 5"; break;
		case 5: sighook = "Hook 6"; break;
		case 6: sighook = "Hook 7"; break;
		case 7: sighook = "Hook 8"; break;
		case 8: sighook = "Hook 9"; break;
		case 9: sighook = "Hook 10"; break;
		case 10: sighook = "Sky Hook"; break;
		}

		switch (temphop)
		{
		case 0: sighop = "Hop 1"; break;
		case 1: sighop = "Hop 2"; break;
		case 2: sighop = "Hop 3"; break;
		case 3: sighop = "Hop 4"; break;
		case 4: sighop = "Hop 5"; break;
		case 5: sighop = "Hop 6"; break;
		case 6: sighop = "Hop 7"; break;
		case 7: sighop = "Hop 8"; break;
		case 8: sighop = "Hop 9"; break;
		case 9: sighop = "Hop 10"; break;
		}

		switch (tempshimmy)
		{
		case 0: sigshimmy = "Shimmy 1"; break;
		case 1: sigshimmy = "Shimmy 2"; break;
		case 2: sigshimmy = "Shimmy 3"; break;
		}

		switch (tempprotect)
		{
		case 0: sigprotect = "Protect 1"; break;
		case 1: sigprotect = "Protect 2"; break;
		case 2: sigprotect = "Protect 3"; break;
		}
	}
	else
	{ 
		int tempfade = rand() % 16;
		int temphook = rand() % 15;
		int temphop = rand() % 10;
		int tempshimmy = rand() % 3;
		int tempprotect = rand() % 3;

		switch (tempfade)
		{
		case 0: sigfade = "Fade 1"; break;
		case 1: sigfade = "Fade 2"; break;
		case 2: sigfade = "Fade 3"; break;
		case 3: sigfade = "Fade 4"; break;
		case 4: sigfade = "Fade 5"; break;
		case 5: sigfade = "Fade 6"; break;
		case 6: sigfade = "Fade 7"; break;
		case 7: sigfade = "Fade 8"; break;
		case 8: sigfade = "Fade 9"; break;
		case 9: sigfade = "Fade 10"; break;
		case 10: sigfade = "Barnes"; break;
		case 11: sigfade = "Cartwright"; break;
		case 12: sigfade = "Johnson"; break;
		case 13: sigfade = "Jordan"; break;
		case 14: sigfade = "Malone"; break;
		case 15: sigfade = "Nowitzki"; break;
		}

		switch (temphook)
		{
		case 0: sighook = "Hook 1"; break;
		case 1: sighook = "Hook 2"; break;
		case 2: sighook = "Hook 3"; break;
		case 3: sighook = "Hook 4"; break;
		case 4: sighook = "Hook 5"; break;
		case 5: sighook = "Hook 6"; break;
		case 6: sighook = "Hook 7"; break;
		case 7: sighook = "Hook 8"; break;
		case 8: sighook = "Hook 9"; break;
		case 9: sighook = "Hook 10"; break;
		case 10: sighook = "Hook 11"; break;
		case 11: sighook = "Hook 12"; break;
		case 12: sighook = "Hook 13"; break;
		case 13: sighook = "Sky Hook"; break;
		case 14: sighook = "Oneal"; break;
		}

		switch (temphop)
		{
		case 0: sighop = "Hop 1"; break;
		case 1: sighop = "Hop 2"; break;
		case 2: sighop = "Hop 3"; break;
		case 3: sighop = "Hop 4"; break;
		case 4: sighop = "Hop 5"; break;
		case 5: sighop = "Hop 6"; break;
		case 6: sighop = "Hop 7"; break;
		case 7: sighop = "Hop 8"; break;
		case 8: sighop = "Hop 9"; break;
		case 9: sighop = "Hop 10"; break;
		}

		switch (tempshimmy)
		{
		case 0: sigshimmy = "Shimmy 1"; break;
		case 1: sigshimmy = "Shimmy 2"; break;
		case 2: sigshimmy = "Shimmy 3"; break;
		}

		switch (tempprotect)
		{
		case 0: sigprotect = "Protect 1"; break;
		case 1: sigprotect = "Protect 2"; break;
		case 2: sigprotect = "Protect 3"; break;
		}
	}
}
void Player::setsigdribbles(Player player)
{
	if (positionmain <= 2)
	{
		int tempposture = rand() % 100;
		int tempcross = rand() % 15;
		int tempbehind = rand() % 12;
		int tempspin = rand() % 17;
		int temphesitate = rand() % 12;
		 sizenum = rand() % 107 + 1;

		if (tempposture > 80)
		{
			posture = "Low";
		}
		else
		{
			posture = "Default";
		}

		switch (tempcross)
		{
		case 0: sigcrossover = "Cross 1"; break;
		case 1: sigcrossover = "Cross 2"; break;
		case 2: sigcrossover = "Cross 3"; break;
		case 3: sigcrossover = "Cross 4"; break;
		case 4: sigcrossover = "Cross 5"; break;
		case 5: sigcrossover = "Cross 6"; break;
		case 6: sigcrossover = "Cross 7"; break;
		case 7: sigcrossover = "Cross 8"; break;
		case 8: sigcrossover = "Cross 9"; break;
		case 9: sigcrossover = "Cross 10"; break;
		case 10: sigcrossover = "Cross 11"; break;
		case 11: sigcrossover = "Cross 15"; break;
		case 12: sigcrossover = "Cross 17"; break;
		case 13: sigcrossover = "Cross 18"; break;
		case 14: sigcrossover = "Cross 19"; break;
		}

		switch (tempbehind)
		{
		case 0: sigbehindback = "BehindBack 1"; break;
		case 1: sigbehindback = "BehindBack 2"; break;
		case 2: sigbehindback = "BehindBack 3"; break;
		case 3: sigbehindback = "BehindBack 4"; break;
		case 4: sigbehindback = "BehindBack 5"; break;
		case 5: sigbehindback = "BehindBack 6"; break;
		case 6: sigbehindback = "BehindBack 7"; break;
		case 7: sigbehindback = "BehindBack 8"; break;
		case 8: sigbehindback = "BehindBack 10"; break;
		case 9: sigbehindback = "BehindBack 12"; break;
		case 10: sigbehindback = "BehindBack 13"; break;
		case 11: sigbehindback = "BehindBack 14"; break;
		}

		switch (tempspin)
		{
		case 0: sigspin = "Spin 1"; break;
		case 1: sigspin = "Spin 2"; break;
		case 2: sigspin = "Spin 3"; break;
		case 3: sigspin = "Spin 4"; break;
		case 4: sigspin = "Spin 5"; break;
		case 5: sigspin = "Spin 6"; break;
		case 6: sigspin = "Spin 7"; break;
		case 7: sigspin = "Spin 8"; break;
		case 8: sigspin = "Spin 9"; break;
		case 9: sigspin = "Spin 10"; break;
		case 10: sigspin = "Spin 11"; break;
		case 11: sigspin = "Spin 12"; break;
		case 12: sigspin = "Spin 13"; break;
		case 13: sigspin = "Spin 14"; break;
		case 14: sigspin = "Spin 15"; break;
		case 15: sigspin = "Spin 16"; break;
		case 16: sigspin = "Spin 17"; break;
		}

		switch (temphesitate)
		{
		case 0: sighesitation = "Hesitation 1"; break;
		case 1: sighesitation = "Hesitation 2"; break;
		case 2: sighesitation = "Hesitation 3"; break;
		case 3: sighesitation = "Hesitation 4"; break;
		case 4: sighesitation = "Hesitation 5"; break;
		case 5: sighesitation = "Hesitation 6"; break;
		case 6: sighesitation = "Hesitation 7"; break;
		case 7: sighesitation = "Hesitation 8"; break;
		case 8: sighesitation = "Hesitation 9"; break;
		case 9: sighesitation = "Hesitation 10"; break;
		case 10: sighesitation = "Hesitation 11"; break;
		case 11: sighesitation = "Hesitation 12"; break;
		}
	}
	else
	{
		
		int tempcross = rand() % 6;
		int tempbehind = rand() % 7;
		int tempspin = rand() % 3;
		int temphesitate = rand() % 12;
		 sizenum = rand() % 107 + 1;

		if (handle > 60)
		{
			posture = "Default";
		}
		else
		{
			posture = "Upright";
		}

		switch (tempcross)
		{
		case 0: sigcrossover = "Cross 8"; break;
		case 1: sigcrossover = "Cross 10"; break;
		case 2: sigcrossover = "Cross 11"; break;
		case 3: sigcrossover = "Cross 12"; break;
		case 4: sigcrossover = "Cross 13"; break;
		case 5: sigcrossover = "Cross 14"; break;
		}

		switch (tempbehind)
		{
		case 0: sigbehindback = "BehindBack 2"; break;
		case 1: sigbehindback = "BehindBack 8"; break;
		case 2: sigbehindback = "BehindBack 9"; break;
		case 3: sigbehindback = "BehindBack 11"; break;
		case 4: sigbehindback = "BehindBack 12"; break;
		case 5: sigbehindback = "BehindBack 15"; break;
		case 6: sigbehindback = "BehindBack 16"; break;
		}

		switch (tempspin)
		{
		case 0: sigspin = "Spin 11"; break;
		case 1: sigspin = "Spin 12"; break;
		case 2: sigspin = "Spin 13"; break;
		}

		switch (temphesitate)
		{
		case 0: sighesitation = "Hesitation 1"; break;
		case 1: sighesitation = "Hesitation 2"; break;
		case 2: sighesitation = "Hesitation 3"; break;
		case 3: sighesitation = "Hesitation 4"; break;
		case 4: sighesitation = "Hesitation 5"; break;
		case 5: sighesitation = "Hesitation 6"; break;
		case 6: sighesitation = "Hesitation 7"; break;
		case 7: sighesitation = "Hesitation 8"; break;
		case 8: sighesitation = "Hesitation 9"; break;
		case 9: sighesitation = "Hesitation 10"; break;
		case 10: sighesitation = "Hesitation 11"; break;
		case 11: sighesitation = "Hesitation 12"; break;
		}
	}
}

	// output function
void output(Player player, const int SPACER, string emptytest)
{
cout << setw(SPACER) << "Personal Info" << endl; 
cout << setw(SPACER) << "-------------" << endl;
cout << setw(SPACER) << "Position: " << setw(SPACER) << player.getposition() << endl;
cout << setw(SPACER) << "Second Position: " << setw(SPACER) << player.getpositiontwo() << endl;
cout << setw(SPACER) << "Birth Month: " << setw(SPACER) << player.getbirthmonth() << endl;
cout << setw(SPACER) << "Birth Day: " << setw(SPACER) << player.getbirthday() << endl;
cout << setw(SPACER) << "Age: " << setw(SPACER) << player.getage() << endl;
cout << setw(SPACER) << "Number: " << setw(SPACER) << player.getnumber() << endl;
cout << setw(SPACER) << "Dominate Hand: " << setw(SPACER) << player.gethand() << endl;
cout << setw(SPACER) << "Dunk Hand: " << setw(SPACER) << player.getdunkhand() << endl;
cout << setw(SPACER) << "Peak Start: " << setw(SPACER) << player.getpeakstart() << endl;
cout << setw(SPACER) << "Peak End: " << setw(SPACER) << player.getpeakend() << endl;
cout << setw(SPACER) << "Play for winner: " << setw(SPACER) << player.getwinner()  << endl << endl;
cout << setw(SPACER) << "Plays" << endl;
cout << setw(SPACER) << "-----" << endl;
cout << setw(SPACER) << "Play Initiator: " << player.getplayinitiator() << endl;
cout << setw(SPACER) << player.getplays() << endl << endl;

cout << setw(SPACER) << "Body Info" << endl;
cout << setw(SPACER) << "---------" << endl;
cout << setw(SPACER) << "Height: " << setw(SPACER-3) << player.getheight()/12 << "'" << player.getheight()%12 << "\"" << endl;
cout << setw(SPACER) << "Weight: " << setw(SPACER) << player.getweight() << endl;
cout << setw(SPACER) << "Wingspan: " << setw(SPACER) << player.getwingspan() << endl;
cout << setw(SPACER) << "Shoulderwidth: " << setw(SPACER) << player.getshoulder() << endl;
cout << setw(SPACER) << "Bodylength: " << setw(SPACER) << player.getbodylength() << endl << endl;

cout << setw(SPACER) << "Offense Ratings" << endl;
cout << setw(SPACER) << "---------------" << endl;
cout << setw(SPACER) << "Standing Layup: " << setw(SPACER) << player.getstanding() << endl;
cout << setw(SPACER) << "Driving Layup: " << setw(SPACER) << player.getlayup() << endl;
cout << setw(SPACER) << "Post Fade: " << setw(SPACER) << player.getfade() << endl;
cout << setw(SPACER) << "Post Hook: " << setw(SPACER) << player.gethook() << endl;
cout << setw(SPACER) << "Post Control: " << setw(SPACER) << player.getposto() << endl;
cout << setw(SPACER) << "Draw Foul: " << setw(SPACER) << player.getdrawfoul() << endl;
cout << setw(SPACER) << "Moving Close: " << setw(SPACER) << player.getmoveclose() << endl;
cout << setw(SPACER) << "Standing Close: " << setw(SPACER) << player.getstandclose() << endl;
cout << setw(SPACER) << "Moving Mid: " << setw(SPACER) << player.getmovemed() << endl;
cout << setw(SPACER) << "Standing Mid: " << setw(SPACER) << player.getstandmed() << endl;
cout << setw(SPACER) << "Moving Three: " << setw(SPACER) << player.getmovethree() << endl;
cout << setw(SPACER) << "Standing Three: " << setw(SPACER) << player.getstandthree() << endl;
cout << setw(SPACER) << "Free Throw: " << setw(SPACER) << player.getfreethrow() << endl;
cout << setw(SPACER) << "Ball Control: " << setw(SPACER) << player.gethandle() << endl;
cout << setw(SPACER) << "Passing Vision: " << setw(SPACER) << player.getvision() << endl;
cout << setw(SPACER) << "Pass IQ: " << setw(SPACER) << player.getpassiq() << endl;
cout << setw(SPACER) << "Pass Accuracy: " << setw(SPACER) << player.getaccuracy() << endl;
cout << setw(SPACER) << "Offense Rebound: " << setw(SPACER) << player.getoreb() << endl;
cout << setw(SPACER) << "Stand Dunk: " << setw(SPACER) << player.getstanddunk() << endl;
cout << setw(SPACER) << "Drive Dunk: " << setw(SPACER) << player.getdrivedunk() << endl;
cout << setw(SPACER) << "Contact Dunk: " << setw(SPACER) << player.getcontdunk() << endl;
cout << setw(SPACER) << "Shot IQ: " << setw(SPACER) << player.getshotiq() << endl;
cout << setw(SPACER) << "Hands: " << setw(SPACER) << player.gethands() << endl << endl;

cout << setw(SPACER) << "Defense Ratings" << endl;
cout << setw(SPACER) << "---------------" << endl;
cout << setw(SPACER) << "Def Rebound: " << setw(SPACER) << player.getdreb() << endl;
cout << setw(SPACER) << "Block: " << setw(SPACER) << player.getblock() << endl;
cout << setw(SPACER) << "Contest: " << setw(SPACER) << player.getcontest() << endl;
cout << setw(SPACER) << "Steal: " << setw(SPACER) << player.getsteal() << endl;
cout << setw(SPACER) << "On-Ball IQ: " << setw(SPACER) << player.getonball() << endl;
cout << setw(SPACER) << "Low Post D IQ: " << setw(SPACER) << player.getpostd() << endl;
cout << setw(SPACER) << "Reaction Time: " << setw(SPACER) << player.getreact() << endl << endl;

cout << setw(SPACER) << "Athleticism" << endl;
cout << setw(SPACER) << "-----------" << endl;
cout << setw(SPACER) << "Boxout: " << setw(SPACER) << player.getboxout() << endl;
cout << setw(SPACER) << "Quickness: " << setw(SPACER) << player.getquickness() << endl;
cout << setw(SPACER) << "Speed: " << setw(SPACER) << player.getspeed() << endl;
cout << setw(SPACER) << "Acceleration: " << setw(SPACER) << player.getacceleration() << endl;
cout << setw(SPACER) << "Vertical: " << setw(SPACER) << player.getvertical() << endl;
cout << setw(SPACER) << "Strength: " << setw(SPACER) << player.getstrength() << endl;
cout << setw(SPACER) << "Stamina: " << setw(SPACER) << player.getstamina() << endl;
cout << setw(SPACER) << "Hustle: " << setw(SPACER) << player.gethustle() << endl;
cout << setw(SPACER) << "Durabilities: " << setw(SPACER) << player.getdurability() << endl << endl;

cout << setw(SPACER) << "Mental" << endl;
cout << setw(SPACER) << "------" << endl;
cout << setw(SPACER) << "Pass Perception: " << setw(SPACER) << player.getpassperception() << endl;
cout << setw(SPACER) << "Defense Consistency: " << setw(SPACER) << player.getdefconsistency() << endl;
cout << setw(SPACER) << "Pick and Roll D IQ: " << setw(SPACER) << player.getpicknrolld() << endl;
cout << setw(SPACER) << "Help D IQ: " << setw(SPACER) << player.gethelpd() << endl;
cout << setw(SPACER) << "Offense Consistency: " << setw(SPACER) << player.getoffconsistency() << endl;
cout << setw(SPACER) << "Emotion: " << setw(SPACER) << player.getemotion() << endl << endl;
cout << setw(SPACER) << "Potential: " << setw(SPACER) << "Overall + " << player.getpotential() << endl << endl;

cout << setw(SPACER) << "Shooting Tendencies" << endl;
cout << setw(SPACER) << "-------------------" << endl;
cout << setw(SPACER) << "Stepthrough: " << setw(SPACER) << player.getstepthrough() << endl;
cout << setw(SPACER) << "Under Basket: " << setw(SPACER) << player.getunderbasket() << endl;
cout << setw(SPACER) << "Shot Close: " << setw(SPACER) << player.getclose() << endl;
cout << setw(SPACER) << "Shot Close Left: " << setw(SPACER) << player.getcloseleft() << endl;
cout << setw(SPACER) << "Shot Close Center: " << setw(SPACER) << player.getclosemid() << endl;
cout << setw(SPACER) << "Shot Close Right: " << setw(SPACER) << player.getcloseright() << endl;
cout << setw(SPACER) << "Shot Mid Range: " << setw(SPACER) << player.getmid() << endl;
cout << setw(SPACER) << "Shot Mid Left: " << setw(SPACER) << player.getmidleft() << endl;
cout << setw(SPACER) << "Shot Mid Left-Center: " << setw(SPACER) << player.getmidleftcent() << endl;
cout << setw(SPACER) << "Shot Mid Center: " << setw(SPACER) << player.getmidcenter() << endl;
cout << setw(SPACER) << "Shot Mid Right-Center: " << setw(SPACER) << player.getmidrightcent() << endl;
cout << setw(SPACER) << "Shot Mid Right: " << setw(SPACER) << player.getmidright() << endl;
cout << setw(SPACER) << "Shot Three: " << setw(SPACER) << player.getthree() << endl;
cout << setw(SPACER) << "Shot Three Left Corner: " << setw(SPACER) << player.getthreeleft() << endl;
cout << setw(SPACER) << "Shot Three Left-Center: " << setw(SPACER) << player.getthreeleftcent() << endl;
cout << setw(SPACER) << "Shot Three Center: " << setw(SPACER) << player.getthreecenter() << endl;
cout << setw(SPACER) << "Shot Three Right-Center: " << setw(SPACER) << player.getthreerightcent() << endl;
cout << setw(SPACER) << "Shot Three Right Corner: " << setw(SPACER) << player.getthreeright() << endl;
cout << setw(SPACER) << "Contested Shot: " << setw(SPACER) << player.getcontested() << endl;
cout << setw(SPACER) << "Stepback Shot: " << setw(SPACER) << player.getstepbackshot() << endl;
cout << setw(SPACER) << "Spin Shot: " << setw(SPACER) << player.getspinshot() << endl;
cout << setw(SPACER) << "Pullup In Transition: " << setw(SPACER) << player.getpullup() << endl;
cout << setw(SPACER) << "Use Glass: " << setw(SPACER) << player.getuseglass() << endl << endl;

cout << setw(SPACER) << "Layup Dunk Tendencies" << endl;
cout << setw(SPACER) << "---------------------" << endl;
cout << setw(SPACER) << "Standing Layup: " << setw(SPACER) << player.getstandclose() << endl;
cout << setw(SPACER) << "Driving Layup: " << setw(SPACER) << player.getdrivelayup() << endl;
cout << setw(SPACER) << "Standing Dunk: " << setw(SPACER) << player.getdunkstanding() << endl;
cout << setw(SPACER) << "Driving Dunk: " << setw(SPACER) << player.getdunkdrive() << endl;
cout << setw(SPACER) << "Flashy Dunk: " << setw(SPACER) << player.getflashdunk() << endl;
cout << setw(SPACER) << "Alley-Oop: " << setw(SPACER) << player.getoop() << endl;
cout << setw(SPACER) << "Putback: " << setw(SPACER) << player.getputback() << endl;
cout << setw(SPACER) << "Crash: " << setw(SPACER) << player.getcrash() << endl;
cout << setw(SPACER) << "Spin Layup: " << setw(SPACER) << player.getspinlayup() << endl;
cout << setw(SPACER) << "Hopstep: " << setw(SPACER) << player.gethopstep() << endl;
cout << setw(SPACER) << "Eurostep: " << setw(SPACER) << player.geteuro() << endl;
cout << setw(SPACER) << "Floater: " << setw(SPACER) << player.getfloater() << endl << endl;

cout << setw(SPACER) << "Triple Threat" << endl;
cout << setw(SPACER) << "-------------" << endl;
cout << setw(SPACER) << "Pumpfake: " << setw(SPACER) << player.getpumpfake() << endl;
cout << setw(SPACER) << "Jabstep: " << setw(SPACER) << player.getjabstep() << endl;
cout << setw(SPACER) << "Triple Threat Shoot: " << setw(SPACER) << player.getttshot() << endl;
cout << setw(SPACER) << "Idle: " << setw(SPACER) << player.getidle() << endl;
cout << setw(SPACER) << "Setup With Sizeup: " << setw(SPACER) << player.getsetsizeup() << endl;
cout << setw(SPACER) << "Setup With Hesitation: " << setw(SPACER) << player.getsethesi() << endl;
cout << setw(SPACER) << "No Setup: " << setw(SPACER) << player.getnodribble() << endl << endl;

cout << setw(SPACER) << "Drives" << endl;
cout << setw(SPACER) << "------" << endl;
cout << setw(SPACER) << "Drive: " << setw(SPACER) << player.getdrive() << endl;
cout << setw(SPACER) << "Drive Right: " << setw(SPACER) << player.getdriveright() << endl;
cout << setw(SPACER) << "Crossover: " << setw(SPACER) << player.getcrossover() << endl;
cout << setw(SPACER) << "Spin: " << setw(SPACER) << player.getspin() << endl;
cout << setw(SPACER) << "Stepback: " << setw(SPACER) << player.getstepback() << endl;
cout << setw(SPACER) << "Half-Spin: " << setw(SPACER) << player.gethalfspin() << endl;
cout << setw(SPACER) << "Double Cross: " << setw(SPACER) << player.getdoublecross() << endl;
cout << setw(SPACER) << "Behind The Back: " << setw(SPACER) << player.getbehindback() << endl;
cout << setw(SPACER) << "Hesitation: " << setw(SPACER) << player.gethesitate() << endl;
cout << setw(SPACER) << "In and Out: " << setw(SPACER) << player.getinnout() << endl;
cout << setw(SPACER) << "No Dribble Move: " << setw(SPACER) << player.getnomove() << endl;
cout << setw(SPACER) << "Attack Strong: " << setw(SPACER) << player.getattack() <<endl <<  endl;

cout << setw(SPACER) << "Passing Tendencies" << endl;
cout << setw(SPACER) << "------------------" << endl;
cout << setw(SPACER) << "Dish To Open Man: " << setw(SPACER) << player.getdish() << endl;
cout << setw(SPACER) << "Flashy Pass: " << setw(SPACER) << player.getflashypass() << endl;
cout << setw(SPACER) << "Alley-Oop Pass: " << setw(SPACER) << player.getooppass() << endl << endl;

cout << setw(SPACER) << "Post Tendencies" << endl;
cout << setw(SPACER) << "---------------" << endl;
cout << setw(SPACER) << "Postup: " << setw(SPACER) << player.getpostup() << endl;
cout << setw(SPACER) << "Shimmy Shot: " << setw(SPACER) << player.getshimmy() << endl;
cout << setw(SPACER) << "Face Up: " << setw(SPACER) << player.getfaceup() << endl;
cout << setw(SPACER) << "Backdown: " << setw(SPACER) << player.getbackdown() << endl;
cout << setw(SPACER) << "Aggresive Backdown: " << setw(SPACER) << player.getaggresivebackdown() << endl;
cout << setw(SPACER) << "Post Shot: " << setw(SPACER) << player.getpostshot() << endl;
cout << setw(SPACER) << "Hook Left: " << setw(SPACER) << player.gethookleft() << endl;
cout << setw(SPACER) << "Hook Right: " << setw(SPACER) << player.gethookright() << endl;
cout << setw(SPACER) << "Fade Left: " << setw(SPACER) << player.getfadeleft() << endl;
cout << setw(SPACER) << "Fade Right: " << setw(SPACER) << player.getfaderight() << endl;
cout << setw(SPACER) << "Up and Under: " << setw(SPACER) << player.getupnunder() << endl;
cout << setw(SPACER) << "Hop Shot: " << setw(SPACER) << player.gethopshot() << endl;
cout << setw(SPACER) << "Post Stepback: " << setw(SPACER) << player.getpoststepback() << endl;
cout << setw(SPACER) << "Post Drive: " << setw(SPACER) << player.getpostdrive() << endl;
cout << setw(SPACER) << "Post Spin: " << setw(SPACER) << player.getpostspin() << endl;
cout << setw(SPACER) << "Dropstep: " << setw(SPACER) << player.getdropstep() << endl;
cout << setw(SPACER) << "Post Hopstep: " << setw(SPACER) << player.getposthopstep() << endl << endl;

cout << setw(SPACER) << "Freelance Tendencies" << endl;
cout << setw(SPACER) << "--------------------" << endl;
cout << setw(SPACER) << "Shoot: " << setw(SPACER) << player.getshot() << endl;
cout << setw(SPACER) << "Touches: " << setw(SPACER) << player.gettouches() << endl;
cout << setw(SPACER) << "Roll vs Pop: " << setw(SPACER) << player.getrollvpop() << endl << endl;

cout << setw(SPACER) << "Defense Tendencies" << endl;
cout << setw(SPACER) << "------------------" << endl;
cout << setw(SPACER) << "Play Pass Lane: " << setw(SPACER) << player.getintercept() << endl;
cout << setw(SPACER) << "Draw Charge: " << setw(SPACER) << player.getcharge() << endl;
cout << setw(SPACER) << "On-Ball Steal: " << setw(SPACER) << player.getonballsteal() << endl;
cout << setw(SPACER) << "Contest Shot: " << setw(SPACER) << player.getcontestshot() << endl;
cout << setw(SPACER) << "Block Shot: " << setw(SPACER) << player.getblockshot() << endl;
cout << setw(SPACER) << "Commit Foul: " << setw(SPACER) << player.getfoul() << endl;
cout << setw(SPACER) << "Hard Foul: " << setw(SPACER) << player.gethardfoul() << endl << endl;

cout << setw(SPACER) << "Signature Layup" << endl;
cout << setw(SPACER) << "---------------" << endl;
cout << setw(SPACER) << "Layup: " << setw(SPACER) << player.getsiglayup() << endl << endl;

cout << setw(SPACER) << "Signature Dunks" << endl;
cout << setw(SPACER) << "---------------" << endl;
for (int i = 0; i < 15; i++)
{
	if (player.getsigdunks(i) == emptytest)
	{
		cout << "None" << endl << endl;
		i = 15;
	}
	else
	{
		cout << player.getsigdunks(i) << endl;
	}
}
cout << endl;

cout << setw(SPACER) << "Signature Post Game" << endl;
cout << setw(SPACER) << "-------------------" << endl;
cout << setw(SPACER) << "Post Fade " << setw(SPACER) << player.getsigfade() << endl;
cout << setw(SPACER) << "Post Hook " << setw(SPACER) << player.getsighook() << endl;
cout << setw(SPACER) << "Post Hop Shot " << setw(SPACER) << player.getsighop() << endl;
cout << setw(SPACER) << "Post Shimmy Shot " << setw(SPACER) << player.getsigshimmy() << endl;
cout << setw(SPACER) << "Post Protect Shot " << setw(SPACER) << player.getsigprotect() << endl << endl;

cout << setw(SPACER) << "Signature Dribbles" << endl;
cout << setw(SPACER) << "------------------" << endl;
cout << setw(SPACER) << "Dribble Posture " << setw(SPACER) << player.getposture() << endl;
cout << setw(SPACER) << "Iso Crossover " << setw(SPACER) << player.getsigcross() << endl;
cout << setw(SPACER) << "Iso Behind Back " << setw(SPACER) << player.getsigbehindback() << endl;
cout << setw(SPACER) << "Iso Spin " << setw(SPACER) << player.getsigspin() << endl;
cout << setw(SPACER) << "Iso Hesitation " << setw(SPACER) << player.getsighesitate() << endl;
cout << setw(SPACER) << "Signature Sizeup " << setw(SPACER) << player.getsizenum() << endl << endl;

cout << setw(SPACER) << "Personality Badges" << endl;
cout << setw(SPACER) << "------------------" << endl;
cout << player.getpersonalitybadge() << endl << endl;

cout << setw(SPACER) << "Inside Scoring Badges" << endl;
cout << setw(SPACER) << "---------------------" << endl;
cout << player.getinsidebages() << endl << endl;

cout << setw(SPACER) << "Outside Scoring Badges" << endl;
cout << setw(SPACER) << "----------------------" << endl;
cout << player.getoutsidebadges() << endl << endl;

cout << setw(SPACER) << "Playmaking Badges" << endl;
cout << setw(SPACER) << "-----------------" << endl;
cout << player.getplaymakingbadges() << endl << endl;

cout << setw(SPACER) << "Defending Badges" << endl;
cout << setw(SPACER) << "----------------" << endl;
cout << player.getdefendingbadges() << endl << endl;

cout << setw(SPACER) << "Athleticism Badges" << endl;
cout << setw(SPACER) << "------------------" << endl;
cout << player.getathleticismbadges() << endl << endl;

cout << setw(SPACER) << "Rebounding Badges" << endl;
cout << setw(SPACER) << "-----------------" << endl;
cout << player.getreboundingbadges() << endl << endl;


}
