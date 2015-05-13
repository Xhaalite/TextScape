#ifdef PLAYER_H
#define PLAYER_H

class Player {
	private:
		int cbLvl;
		
		//Skills
		int attackLvl;
		int defenseLvl;
		int strengthLvl;
		int health;
		int rangedLvl;
		int magicLvl;
		int prayerLvl;
		//More skills to be added soon...
		
		//Inventory:
		vector<string> inventory;
		
	public:
	
		//Constructor
		Player(string name);
		
		void Create(string username);
		
		int GetAttackLvl() {return attackLvl;}
		int GetDefenseLvl() {return defenseLvl;}
		int GetStrengthLvl() {return strengthLvl;}
		int GetHealth() {return health;}
		
		
	
	
};

#endif