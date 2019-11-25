#include"swtich.h"
#include<iostream>
#include<string>
#include<regex>
using namespace std;
 int start()
 {
	 string sing;
	 int number=0;
	 cout << "let's go" << "\n";
	 for (int i = 0; i <= 50; i++)
	 {
		 getline(cin,sing);
		 regex creeper("Cree*per");
		 if (regex_match(sing, creeper))
		 {
			 number = 1;
		 }
		 regex cr("Creeper");
		 if (regex_match(sing, cr))
		 {
			 number = 2;
		 }
		 regex Aw("Aw Man");
		 if (regex_match(sing, Aw))
		 {
			 number = 3;
		 }
		 regex AW("Aw-a-a-a Man");
		 if (regex_match(sing, AW))
		 {
			 number = 4;
		 }
		 regex si("Side side to side");
		 if (regex_match(sing, si))
		 {
			 number = 5;
		 }
		 regex so("So way back in the mine got are pickaxe swingin' from side to side");
		 if (regex_match(sing, so))
		 {
			 number = 6;
		 }
		 regex ha("Heads up");
		 if (regex_match(sing,ha))
		 {
			 number = 7;
		 }
		 regex you("You hear a sound turn around and look up");
		 if (regex_match(sing, you))
		 {
			 number = 8;
		 }
		 regex to("Total shock fills your body");
		 if (regex_match(sing, to))
		 {
			 number = 9;
		 }
		 regex oh("Oh no it's you again I can never forget those eyes");
		 if (regex_match(sing, oh))
		 {
			 number = 10;
		 }
		 regex eye("Eyes eyes eyes eyes eyes");
		 if (regex_match(sing, eye))
		 {
			 number = 11;
		 }
		 regex ca("Cause baby tonight the creeper's");
		 if (regex_match(sing, ca))
		 {
			 number = 12;
		 }
		 regex tr("Tryin to steal all your stuff again");
		 if (regex_match(sing, tr))
		 {
			 number = 13;
		 }
		 regex important("Cause baby tonight");
		 if (regex_match(sing, important))
		 {
			 number = 14;
		 }
		 regex l1("The creeper's tryin' to steal all your stuff again");
		 if (regex_match(sing, l1))
		 {
			 number = 15;
		 }
		 regex l2("Stuff again gain");
		 if (regex_match(sing, l2))
		 {
			 number = 16;
		 }
		 regex l3("Just when you think you're safe");
		 if (regex_match(sing, l3))
		 {
			 number = 17;
		 }
		 regex l4("Over here some hissing from right behind right right behind");
		 if (regex_match(sing, l4))
		 {
			 number = 18;
		 }
		 regex l5("That's a nice life you have");
		 if (regex_match(sing, l5))
		 {
			 number = 19;
		 }
		 regex l6("Shame it's got to end at this time time time");
		 if (regex_match(sing, l6))
		 {
			 number = 20;
		 }
		 regex l7("Time time time time");
		 if (regex_match(sing, l7))
		 {
			 number = 21;
		 }
		 regex l8("Blows up and then your health bar drops");
		 if (regex_match(sing, l8))
		 {
			 number = 22;
		 }
		 regex l9("Get inside don't be tardy");
		 if (regex_match(sing, l9))
		 {
			 number = 23;
		 }
		 regex l10("So now you're stuck in there");
		 if (regex_match(sing, l10))
		 {
			 number = 24;
		 }
		 regex l11("Halve a heart is left but don't die");
		 if (regex_match(sing, l11))
		 {
			 number = 25;
		 }
		 regex l12("Die die die die die");

		 if (regex_match(sing, l12))
		 {
			 number = 26;
			 i = i + 50;
		 }
		 switch (number)
		 {
		 case 1:
			 cout << "Creeper" << endl;
			 break;
		 case 2:
			 cout << "Aw Man" << endl;
			 break;
		 case 3:
			 cout << "Aw-a-a-a Man" << endl;
			 break;
		 case 4:
			 cout << "Side side to side" << endl;
			 break;
		 case 5:
			 cout << "So way back in the mine got are pickaxe swingin' from side to side" << endl;
			 break;
		 case 6:
			 cout << "Heads up" << endl;
			 break;
		 case 7:
			 cout << "You hear a sound turn around and look up" << endl;
			 break;
		 case 8:
			 cout << "Total shock fills your body" << endl;
			 break;
		 case 9:
			 cout << "Oh no it's you again I can never forget those eyes" << endl;
			 break;
		 case 10:
			 cout << "Eyes eyes eyes eyes eyes" << endl;
			 break;
		 case 11:
			 cout << "Cause baby tonight the creeper's" << endl;
			 break;
		 case 12:
			 cout << "Tryin to steal all your stuff again" << endl;
			 break;
		 case 13:
			 cout << "Cause baby tonight" << endl;
			 break;
		 case 14:
			 cout << "The creeper's tryin' to steal all your stuff again" << endl;
			 break;
		 case 15:
			 cout << "Stuff again gain" << endl;
			 break;
		 case 16:
			 cout << "Just when you think you're safe" << endl;
			 break;
		 case 17:
			 cout << "Over here some hissing from right behind right right behind" << endl;
			 break;
		 case 18:
			 cout << "That's a nice life you have" << endl;
			 break;
		 case 19:
			 cout << "Shame it's got to end at this time time time" << endl;
			 break;
		 case 20:
			 cout << "Time time time time" << endl;
			 break;
		 case 21:
			 cout << "Blows up and then your health bar drops" << endl;
			 break;
		 case 22:
			 cout << "Get inside don't be tardy" << endl;
			 break;
		 case 23:
			 cout << "So now you're stuck in there" << endl;
			 break;
		 case 24:
			 cout << "Halve a heart is left but don't die" << endl;
			 break;
		 case 25:
			 cout << "Die die die die die" << endl;
			 break;
		 case 26:
			 cout << "Aw Man!" << endl;
			 break;
		
		 default:
			 cout << "Hisssssssssssss"<<endl;
			 cout << "boooooooooooom!!!!!!!!!!!!!!!!";
			 i = i + 100;
			 break;
		 }
	 }
         cout <<"Aw-a-a-a Man!!"<<"\n";
		 cout << "End";
	
		 return 0;
}