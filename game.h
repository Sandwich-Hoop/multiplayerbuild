#pragma once



#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <cstdio>

using namespace std;



/*
	class that acts as the game engine.
	wrapper class.

*/

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game
{
private:


	

	//variables
	//window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;

	//Mouse positions
	sf::Vector2i mousePosWindow;
	sf::Vector2f mousePosView;

	//player poritions
	sf::Vector2i playerPosWindow;
	sf::Vector2f playerPosView;

	sf::Mouse mouse;


	//typing

	void typingInput();



	//game logic

	int flashSize = 0;


	int barrelx = 450;
	int barrely = 300;




	//level id determines the level to be constructed, level 0 is the menu



	int levelID = 0;

	//physics stuffffff

	int speed = 0;
	
	int reedballs;

	string tanksArray[6];

	int points;
	
	int countin = 0;
	sf::Clock clock;
	sf::Time jumpAttempt = sf::seconds(0);
	sf::Time jumpTime = sf::seconds(1);

	//loading clock

	sf::Clock loadingClock;
	sf::Time targetTime = sf::seconds(5);
	sf::Time loadingTime = sf::seconds(0);

	sf::Clock reloadClock;
	int size1 = 800;
	int size2 = 600;
	int size3 = 24;
	int size4 = 50;
	int size5 = 100;

	int totalTanks = 10;

	int  stringLength = 0;



	//file handling logic

	string workingFileDirectory;

	string nonWorkingFileDirectory ;

	//holds directory for last used most updated file, this can be reread at start of program :)



	bool canLoad = true;



	bool readingFromFile = true;

	// ACTUAL GAME STUFF	



	sf::Texture gamePlayers;
	sf::Sprite gamePlayer;

	sf::Texture gamePlayers2;
	sf::Sprite gamePlayer2;


	sf::Texture gameEnemys;
	sf::Sprite gameEnemy;



	sf::Text gameText;

	int gameStartYes = 0;

	int player2pos;

	int playerPosition = 400;

	int enemyPosition = 0;

	int gamePoints = 1;

	int enemyRandom = 0;

	int pointsFactor;


	//gun logic


	int travelx;
	int travely;

	bool gunOut = false;



	int reloading = 0;
	int flashx = 350;
	int flashy = barrely - 100;

	int groundx = -100;
	
	string readfromcsv = "";

	string tileinfo = "";

	int currenttile = 0;

	int groundy = 0;

	float mousey;

	float mousex;

	float buttony;

	float buttonx;

	float buttonyb;

	float buttonxb;

	int tankx = 625;

	int tanky = 325;


	int orderGiven = 0;

	int orderx = 625;

	int ordery = 325;



	bool deleted = false;







	//typing

	bool canType = false;




	int barrelStartR = 180;
	



	bool loading;



	//IMPORTANT
	//GAME TIME


	//IMPORTANT GAME FACTORS
	
	int suspicionNum = 50;
	int popularityNum = 20;
	int partySupportNum = 60;
	int stabilityNum = 30;

	// 
	// 
	// 
	// 
	//game objects

	string currentLine;

	int calendarx = -800;
	int calendary = 150;

	int check = 0;

	bool player1;


	int connectionCheck;

	int playerpos1;
	int playerpos2;

	//gun stuff

	int bullet2x;
	int bullet2y;

	int totalx;

	int totaly;


	int bulletPosX;
	int bulletPosY;

	float bulletx;
	float bullety;


	int canHit = 0;



	int gamePlayerLives = 3;
	int gamePlayer2Lives = 3;

	bool gamePlayerAlive = true;
	bool gamePlayer2Alive = true;


	string winMessage = "The winner is: ";


	bool canShoot = false;

	bool player2;

	int numConnected;

	int playerType;

	int officialsx = -800;
	int officialsy = 25;

	sf::String playerTyping;

	int registerx = -800;
	int registery = 25;

	bool calendarOpen = false;
	//textures


	sf::String receiveDescription;

		int receiveSteps;



		//changes width of text bock margin to show typing is selected on click

		int typingClick;

		
		//back arrow logic


		bool hoveringOverBack = false;


	//logic for the gndn


		//

	//end

	//sprite texture



	//background sprite

	//STRUCTS FOR CHARACTERS
		//network


		string networkString;

		char connectionType = 'A';

	

	//shapes

	std::vector<sf::RectangleShape> buttons;
	sf::RectangleShape button;
	sf::RectangleShape button2;
	sf::RectangleShape button3;

	std::vector<sf::RectangleShape> panels;
	sf::RectangleShape calendarP;
	sf::RectangleShape officialsP;
	sf::RectangleShape registerP;


	std::vector<sf::RectangleShape> tiles;
	sf::RectangleShape tile0;
	sf::RectangleShape tile1;
	sf::RectangleShape tile2;
	sf::RectangleShape selectTile;

	
	std::vector<sf::RectangleShape> textBoxes;
	sf::RectangleShape textBox0;



	std::vector<sf::RectangleShape> chambers;
	sf::RectangleShape chamber;


	sf::Texture backgroundTexture1;
	sf::Sprite backgroundSprite1;



	sf::Texture loadingTexture;
	sf::Sprite loadingSprite;


	//gun texture

	sf::Texture akTexture;
	sf::Sprite akSprite;

	//back arrow textures

	sf::Texture backArrowTexture;
		sf::Sprite backArrowSpriteDark;
		sf::Sprite backArrowSpriteLight;


	sf::Texture calendarBackgrounds;
	sf::Sprite calendarBackground;

	std::vector<sf::RectangleShape> enemytanks;
	sf::RectangleShape enemytank;

	std::vector<sf::RectangleShape> menus;
	sf::RectangleShape menu;


	//bullets

	std::vector<sf::RectangleShape> bullets;
	sf::RectangleShape bullet;

	sf::RectangleShape bullet2;
	
	//text shit


	sf::Font font;
	sf::Text text;



	sf::Text text2;

	sf::Text text3;

	sf::Text stability;

	sf::Text partySupport;

	sf::Text popularity;

	sf::Text suspicion;


	std::vector<sf::Text> messages;
	
	// set the sprites posisiton

	//network mega important

	string connectIp;






	

	//private functions
	void initVariables();
	void initWindow();


	void initText();

	void initButtons();
	void renderText();

	void initPlayers();

	//STRUCTURES - IMPORTANT

	//struct {             // Structure declaration
	//	int myNum;         // Member (int variable)
		string myString;   // Member (string variable)
	//} myStructure;

public:


	//constructors / destructors
	Game();
	virtual ~Game();

	//accessors
	const bool running() const;

	//function

	//physics
	/*
	 float velocity = 3;
	 float time = .4;
	 float initialVelocity = 0;
	 float acceleration;
	 */

	//map

	void dateSelect();

	//file handling save data function

	void saveFile();

	void loadFile();

	//game STUFF


	
	//NETWORK STUFF

	void networkTest();


	void spawnGamePlayer();


	void spawnGamePlayer2();

	void spawnGameEnemy();

	void updateGame();

	void updateGamePlayer();

	void updateGameEnemy();

	void spawnGameText();

	void updateGameText();

	void killEnemy();

	void spawnBullet();

	void takeOutGun();

	void shootBullets();


	void checkHit();

	/// <summary>
	/// 
	/// </summary>

	void openCalendar();

	
	void spawnTiles();
	
	
	void workWithCurrentTile();


	void spawnLoadingScreen();

	void loadingGame();

	void spawnBackground1();
	void spawnButton();
	void spawnButton2();
	void spawnButton3();
	

	void spawnMenu();
	void spawnPlayer();
	
	void spawnTextBox();
	//not finished

	//back arrow stuff



	void spawnBackArrow();

	void updateBackArrow();


	void pollEvents();
	void updateMousePositions();
	void updatePlayersPositions();

	
	void updateButtons();
	



	void updateMessage();

	void updateMenus();
	void updatePlayers();

	

	void update();


	void renderButtons();

	void renderText2();
	void renderText3();
	//render all text
	void renderAllText();


	void renderMenus();
	


	void render();
};

