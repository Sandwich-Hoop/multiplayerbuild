#include "Game.h"



void Game::typingInput()
{



}

//private functions
void Game::initVariables()
{
	this->window = nullptr;

	//game logic

	this->points = 0;


}





void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 800;

	this->window = new sf::RenderWindow(this->videoMode, "SANDWICH HOOP ENGINE - LIFESYLE APPLICATION", sf::Style::Close);

	this->window->setFramerateLimit(60);
}

void Game::initPlayers()
{




}


void Game::initText()
{



	if (!font.loadFromFile("arial.ttf"))
	{
		// error...
	}

	text.setFont(font); // font is a sf::Font

	// set the string to display

	//the egg cuck is working

	std::string s = std::to_string(points);

	text.setString(s);

	// set the character size
	text.setCharacterSize(24); // in pixels, not points!

	// set the color
	text.setFillColor(sf::Color::Red);

	// set the text style
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);

	this->messages.push_back(this->text);


}



void Game::initButtons()
{

	this->button.setSize(sf::Vector2f(50.f, 50));




}



//constructors / destructors
Game::Game()
{
	this->initText();
	this->initVariables();
	this->initWindow();

	this->initPlayers();


}

Game::~Game()
{
	delete this->window;
}
// ssors
const bool Game::running() const
{
	return this->window->isOpen();
}




void Game::dateSelect()
{



}


void Game::openCalendar()
{

}

void Game::spawnTiles()
{



	if (!calendarBackgrounds.loadFromFile("calendar background.png")) {
		std::cout << "error";
	}
	calendarBackground.setTexture(calendarBackgrounds);
	this->calendarBackground.setPosition(calendarx, calendary);

	/*
		this->tile0.setPosition(calendarx, calendary);
		this->tile0.setFillColor(sf::Color::Green);
		this->tile0.setSize(sf::Vector2f(400, 300));
		*/
	this->tile1.setPosition(officialsx, officialsy);
	this->tile1.setFillColor(sf::Color::Blue);
	this->tile1.setSize(sf::Vector2f(600, 400));

	this->tile2.setPosition(registerx, registery);
	this->tile2.setFillColor(sf::Color::Red);
	this->tile2.setSize(sf::Vector2f(600, 400));
}

void Game::workWithCurrentTile()
{

	//open csv, use currentTile to find the row in the csv, then take all of the text in that row as a string, divide that string using commas as the delimiter, and add each to own string, eg receiveSteps, receiveDescription. Print those to screen in politics section.

	// File pointer 


		// Compare the roll number 



}

void Game::spawnLoadingScreen()
{


	if (!loadingTexture.loadFromFile("sandwich loading.png")) {
		std::cout << "error";
	}
	loadingSprite.setTexture(loadingTexture);



	this->loadingSprite.setPosition(0, 0);



}



void Game::spawnBackground1()
{



	if (!backgroundTexture1.loadFromFile("backgroundLevel1.jpg")) {
		std::cout << "error";
	}
	backgroundSprite1.setTexture(backgroundTexture1);

	backgroundSprite1.setScale(.4f, .355f);



	this->backgroundSprite1.setPosition(0, 0);



}

void Game::spawnButton()
{


	this->button.setPosition(20, 80);

	this->button.setSize(sf::Vector2f(size5, size4));

	this->button.setFillColor(sf::Color::Red);

	//spawn the enemy

	//this->buttons.push_back(this->button);

}



void Game::spawnButton2()
{


	this->button2.setPosition(20, 140);

	this->button2.setSize(sf::Vector2f(size5, size4));

	this->button2.setFillColor(sf::Color::Red);

	//spawn the enemy

	//this->buttons.push_back(this->button2);

}


void Game::spawnButton3()
{


	this->button3.setPosition(20, 200);

	this->button3.setSize(sf::Vector2f(size5, size4));

	this->button3.setFillColor(sf::Color::Red);

	//spawn the enemy

	//this->buttons.push_back(this->button3);

}






void Game::spawnMenu()
{


	this->menu.setPosition(0, 0);

	this->menu.setSize(sf::Vector2f(size1, size2));

	this->menu.setFillColor(sf::Color::Blue);




	spawnTextBox();

	//spawn the enemy

	//this->menus.push_back(this->menu);
}



void Game::spawnPlayer()
{



	this->calendarP.setPosition(0, 0);
	this->calendarP.setFillColor(sf::Color::Green);
	this->calendarP.setSize(sf::Vector2f(75, 50));
	this->calendarP.setOutlineThickness(5);
	this->calendarP.setOutlineColor(sf::Color(21, 71, 52));

	this->dateSelect();


	this->officialsP.setPosition(0, 55);
	this->officialsP.setFillColor(sf::Color::Green);
	this->officialsP.setSize(sf::Vector2f(75, 50));
	this->officialsP.setOutlineThickness(5);
	this->officialsP.setOutlineColor(sf::Color(21, 71, 52));



	this->registerP.setPosition(0, 110);
	this->registerP.setFillColor(sf::Color::Green);
	this->registerP.setSize(sf::Vector2f(75, 50));
	this->registerP.setOutlineThickness(5);
	this->registerP.setOutlineColor(sf::Color(21, 71, 52));


	this->selectTile.setPosition(groundx, groundy);

	this->selectTile.setSize(sf::Vector2f(50, 50));
	this->selectTile.setFillColor(sf::Color::Transparent);

	this->selectTile.setOutlineThickness(5);
	this->selectTile.setOutlineColor(sf::Color(21, 71, 52));
	//this->players.push_back(this->player);


}





void Game::renderText()
{





	if (!font.loadFromFile("arial.ttf"))
	{
		// error...
	}

	text.setFont(font); // font is a sf::Font

	// set the string to display

	//the egg cuck is working




	// set the character size
	text.setCharacterSize(24); // in pixels, not points!

	// set the color
	text.setFillColor(sf::Color::Red);

	// set the text style
	text.setStyle(sf::Text::Bold);

	text.setPosition(650, 10);

	//this->messages.push_back(this->text);







	//UI TEXT


	std::string s = std::to_string(this->stabilityNum);

	


	stability.setFont(font); // font is a sf::Font

	stability.setString("Input: " + playerTyping);

	stability.setCharacterSize(10); // in pixels, not points!

	// set the color
	stability.setFillColor(sf::Color::Black);

	// set the text style
	stability.setStyle(sf::Text::Bold);

	stability.setPosition(205, 505);



}


void Game::spawnTextBox()
{

	this->textBox0.setPosition(200, 500);
	this->textBox0.setFillColor(sf::Color::White);
	this->textBox0.setSize(sf::Vector2f(300, 100));

	this->textBox0.setOutlineColor(sf::Color::Black);

	this->textBox0.setOutlineThickness(0);

}
void Game::pollEvents()
{







	//Event polling
	while (this->window->pollEvent(this->ev))
	{








		if (sf::Event::Closed)
		{
			this->window->close();
			break;

		}

		if (this->ev.key.code == sf::Keyboard::Escape)
		{

			this->window->close();

		}









		if (canType == true) {




			if (this->ev.key.code == sf::Keyboard::Enter)
			{

				canType = false;

				connectIp = playerTyping;

			}

			if (ev.type == sf::Event::TextEntered)



			{
				if (ev.text.unicode < 128)
				{
					std::cout << "ASCII character typed: " << static_cast<char>(ev.text.unicode) << std::endl;

					playerTyping += static_cast<char>(ev.text.unicode);

					stringLength += 1;
				}


			}

			if (this->ev.key.code == sf::Keyboard::Backspace)
			{
				if (stringLength >= 0) {
					playerTyping.erase(stringLength);
					stringLength -= 1;
				}
			}


		}
		if (this->ev.key.code == sf::Mouse::Left)
		{


			buttony = button.getPosition().y;
			buttonyb = buttony + 100;
			buttonx = button.getPosition().x;
			buttonxb = buttonx + 50;



			this->mousey = this->mouse.getPosition().y;
			this->mousex = this->mouse.getPosition().x;


			if (this->textBox0.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
			{

				this->clock.restart();
				this->textBox0.setOutlineThickness(10);

				canType = true;

			}

			/*
						if (this->button.getGlobalBounds().contains(mousey, mousex))
						{

							std::cout << "working";

							this->size1 = 0;
							this->size2 = 0;
							this->size3 = 0;
							this->size4 = 0;
							this->size5 = 0;

						}
						*/


			if (this->button.getGlobalBounds().contains(this->mousePosView))
			{
				/*
							this->size1 = 0;
							this->size2 = 0;
							this->size3 = 0;
							this->size4 = 0;
							this->size5 = 0;
						*/


				connectionType = 's';


			}


			else if (this->button2.getGlobalBounds().contains(this->mousePosView))
			{
				/*
				this->size1 = 0;
				this->size2 = 0;
				this->size3 = 0;
				this->size4 = 0;
				this->size5 = 0;
				*/
				this->levelID = 2;
			}


			else if (this->button3.getGlobalBounds().contains(this->mousePosView))
			{
				/*
				this->size1 = 0;
				this->size2 = 0;
				this->size3 = 0;
				this->size4 = 0;
				this->size5 = 0;
				*/


				connectionType = 'c';

			}



			else if (this->textBox0.getGlobalBounds().contains(this->mousePosView))
			{

				this->typingClick = 10;

				canType = true;

				this->textBox0.setOutlineThickness(10);


			}


		}















	}


	//if the enemy is past the bottom of the screen
	/*

	if (this->ev.key.code == sf::Keyboard::A && playerPosition > 9)
	{

		this->playerPosition -= 10;

	}


	if (this->ev.key.code == sf::Keyboard::D && playerPosition < 739)
	{

		this->playerPosition += 10;

	}



	*/
	//if (this->speed > 0)
	//{
	//	this->speed -= 1;
//	}







}

void Game::updateMousePositions()
{

	//Mouse position relative to window



	this->mousePosWindow = sf::Mouse::getPosition(*this->window);
	this->mousePosView = this->window->mapPixelToCoords(this->mousePosWindow);
}











void Game::updateMenus()
{


	this->updateButtons();
	this->renderText2();
	this->renderText();
	this->spawnMenu();
	this->renderText3();


}


void Game::updatePlayersPositions()
{
}




void Game::updateButtons()
{





	this->spawnButton2();



	this->spawnButton3();



	this->spawnButton();




}



void Game::updateMessage()
{


}


void Game::updatePlayers()
{

	this->spawnPlayer();





	if (this->ev.key.code == sf::Mouse::Left) {


		if (this->calendarP.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{

			this->calendarx = 200;
			this->calendary = 150;
			this->calendarOpen = true;
			this->clock.restart();

			












		}

		if (this->officialsP.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{

			this->officialsx = 100;
			this->officialsy = 25;

			this->clock.restart();
		}

		if (this->registerP.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{

			this->registerx = 100;
			this->registery = 25;

			this->clock.restart();
		}









		this->mousey = sf::Mouse::getPosition(*this->window).y;
		this->mousex = sf::Mouse::getPosition(*this->window).x;


	}


	if (this->ev.key.code == sf::Mouse::Right) {
		if (this->calendarBackground.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{
			this->groundx = -800;
			this->calendarx = -800;
			this->calendary = 25;
			this->calendarOpen = false;
			this->clock.restart();
		}
		if (this->tile1.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{
			this->groundx = -800;
			this->officialsx = -800;
			this->officialsy = 25;

			this->clock.restart();
		}
		if (this->tile2.getGlobalBounds().contains(this->mousePosView) && this->clock.getElapsedTime() > sf::seconds(.5))
		{
			this->groundx = -800;
			this->registerx = -800;
			this->registery = 25;

			this->clock.restart();
		}



	}

}


void Game::loadingGame()
{










	sf::Time loadingTime = loadingClock.getElapsedTime();



	if (loadingTime > targetTime)
	{

		this->loading = 1;
		loadingClock.restart();


	}

	//else  {
//not working

	//}



}



void Game::update()
{




	//std::cout << this->levelID;

	


	this->pollEvents();

	if (this->levelID == 0) {


		this->spawnLoadingScreen();

		this->loadingGame();

		this->updateMenus();

		this->updateMousePositions();

		this->updateButtons();



	}


	else if (this->levelID == 1)
	{

		std::cout << "This level is unavailable in the network test build";
		/*

		loadFile();


		this->spawnLoadingScreen();

		this->loadingGame();



			this->spawnBackground1();

			this->updateMousePositions();

			this->updatePlayers();



			this->renderText();

			this->spawnTiles();

			this->openCalendar();

			this->updateBackArrow();

		*/

	}

	else if (this->levelID == 2)
	{

		networkTest();

		//build game time, all else works fine



		this->spawnLoadingScreen();
		this->loadingGame();


		this->updateGame();




	}

	else if (this->levelID == 3)
	{




		this->updatePlayers();
	}




}




void Game::renderButtons()
{

	for (auto& e : this->buttons)
	{
		this->window->draw(e);
	}

}

void Game::saveFile()
{


}

void Game::renderText2()
{



	sf::IpAddress serverIpToDisplay = sf::IpAddress::getPublicAddress();

	std::cout << "Your server IP is: " << serverIpToDisplay;

	

	text2.setFont(font); // font is a sf::Font

	// set the string to display

	text2.setString("Lifestyle Application FA\n SELECT A MODE:           Your server address is displayed in the console");


	// set the character size
	text2.setCharacterSize(size3); // in pixels, not points!

	// set the color
	text2.setFillColor(sf::Color::Red);

	// set the text style
	text2.setStyle(sf::Text::Bold);




}

void Game::loadFile()
{




}


void Game::renderText3()
{



	text3.setFont(font); // font is a sf::Font

	// set the string to display

	text3.setString("1. server \n\n2. Game 1\n\n3. Client");

	// set the character size
	text3.setCharacterSize(size3); // in pixels, not points!

	// set the color
	text3.setFillColor(sf::Color::Blue);

	// set the text style
	text3.setStyle(sf::Text::Bold);

	text3.setPosition(20, 87.5);





}



void Game::renderAllText()
{

	this->renderText();
	this->renderText2();
	this->renderText3();

}

void Game::renderMenus()
{

	//rendering all the enemies

	for (auto& e : this->menus)
	{
		this->window->draw(e);
	}

}







void Game::render()
{

	/*
		renders the game objects
	*/

	this->window->clear();

	//draw game objects







	if (this->levelID == 0) {

		if (this->loading == 1)
		{
			this->window->draw(this->menu);
			this->window->draw(this->text2);

			this->window->draw(this->textBox0);
			this->window->draw(this->stability);
			this->window->draw(this->button);
			this->window->draw(this->button2);

			this->window->draw(this->button3);
			this->window->draw(this->text3);
		}

		else if (this->loading == 0)
		{

			this->window->draw(this->loadingSprite);

		}

	}


	else if (this->levelID == 1)
	{



		//	this->window->draw(this->popularity);
		//	this->window->draw(this->partySupport);
			//this->window->draw(this->suspicion);

		if (this->loading == 0)
		{

			this->window->draw(this->loadingSprite);

		}



	}

	else if (this->levelID == 2)
	{

		if (this->loading == 1)
		{


			this->window->draw(this->backgroundSprite1);

			//draw
			this->window->draw(this->gameEnemy);

			this->window->draw(this->gamePlayer);

			this->window->draw(this->gamePlayer2);

			this->window->draw(this->akSprite);
			this->window->draw(this->bullet);
			this->window->draw(this->bullet2);

			this->window->draw(this->gameText);

			this->window->draw(this->backArrowSpriteDark);

		}

		else if (this->loading == 0)
		{

			this->window->draw(this->loadingSprite);

		}


	}






	//	this->window->draw(this->logoSprite);

		//this->window->draw(this->player);





	this->window->display();
}

void Game::networkTest()
{



	
	
	sf::TcpSocket socket;

	char buffer[2000];
	std::size_t received;

	std::string text = "Connected to: ";


	if (connectionType != 's' && connectionType != 'c')
	{
		

	}
	if (connectionType == 's')
	{
		sf::IpAddress ip = sf::IpAddress::getLocalAddress();


		sf::TcpListener listener;

		listener.listen(2000);

		listener.accept(socket);




	}

	else if (connectionType == 'c')
	{
		sf::IpAddress ip = sf::IpAddress::getLocalAddress();
		if (connectIp.empty() == true)
		{
			ip = "";
			
			 ip = connectIp;
		}

		

		socket.connect(ip, 2000);




	}

	string positionText = to_string(playerPosition);


	//bullet positions are all 0


	string bulletPosTextX = to_string(totalx);

	string bulletPosTextY = to_string(totaly);


	std::cout << "\n\n bullet to transfer x: " << totalx << " y: " << totaly;


	string packet = positionText + "/" + bulletPosTextX + "/" + bulletPosTextY + "/";
	socket.send(packet.c_str(), packet.length() + 1);

	std::cout << "The transferred string is: " << packet;
	socket.receive(buffer, sizeof(buffer), received);

	std::cout << "The received string is: " << buffer;

	//std::cout << "The value of buffer is: " << buffer;

	


	

	string mystring = buffer;

	std::cout << "The working string mystring is " << mystring;

	string posstring;


	int beebeebaba = mystring.length();

	std::cout << "The working string length is: " << beebeebaba;
	//everything up to this point works correctly
	int burger = 0;
	for (int i = 0; i != beebeebaba; i++)
	{
		std::cout << "The loop has been executed: " << i;

		posstring += mystring[i];
		if (mystring[i] == '/')
		{
			std::cout; "A / has been detected";
			posstring.pop_back();

			if (burger == 0)
			{
				player2pos = stoi(posstring);
				std::cout << "The final player2position recorded is: " << player2pos;

			}
			else if (burger == 1)

			{

				bullet2x = stoi(posstring);
				std::cout << "The final bullet2x recorded is: " << bullet2x;
			}
			else { bullet2y = stoi(posstring);
			
			std::cout << "The final bullet2y recorded is: " << bullet2y;
			}
			posstring = "";
			burger += 1;
		}
	}
	

}

void Game::spawnGamePlayer()
{


	if (!gamePlayers.loadFromFile("character.png")) {
		std::cout << "error";
	}

	gamePlayer.setTexture(gamePlayers);
	//this->gamePlayer.setSize(sf::Vector2f(50.f, 50.f));


	if (check == 0)
	{

		int playerRandom = rand() % 600;
		playerPosition = playerRandom;
		check++;

	}




	this->gamePlayer.setPosition(playerPosition, 400);

	spawnGamePlayer2();

}

void Game::spawnGamePlayer2()
{

	if (!gamePlayers2.loadFromFile("character1.png")) {
		std::cout << "error";
	}

	gamePlayer2.setTexture(gamePlayers2);
	//this->gamePlayer.setSize(sf::Vector2f(50.f, 50.f));


	this->gamePlayer2.setPosition(player2pos, 400);




}

void Game::spawnGameEnemy()
{


	//this->gameEnemy.setSize(sf::Vector2f(40.f, 40.f));

	if (gameStartYes == 0)
	{

		gameEnemys.loadFromFile("banana.png");

		pointsFactor = 2;

		gameStartYes++;

	}


	gameEnemy.setTexture(gameEnemys);

	this->gameEnemy.setPosition(enemyRandom, enemyPosition);

}

void Game::spawnBackArrow()
{



	if (hoveringOverBack == true)
	{

		backArrowTexture.loadFromFile("backArrowLight.png");

	}
	else
	{

		backArrowTexture.loadFromFile("backArrowDark.png");

	}

	backArrowSpriteDark.setTexture(backArrowTexture);





	this->backArrowSpriteDark.setPosition(0, 530);

	this->backArrowSpriteDark.setScale(.3f, .3f);


}

void Game::updateBackArrow()
{
	this->spawnBackArrow();

	if (this->backArrowSpriteDark.getGlobalBounds().contains(mousePosView))
	{


		hoveringOverBack = true;

		if (this->ev.key.code == sf::Mouse::Left)
		{
			levelID -= 2;
		}



	}
	else { hoveringOverBack = false; }


}

void Game::updateGame()

{

	this->updateGamePlayer();
	this->updateGameEnemy();
	this->updateGameText();
	this->updateBackArrow();
	this->updateMousePositions();
	
}

void Game::updateGameText()
{

	this->spawnGameText();


}

void Game::spawnGameText()
{


	gameText.setFont(font); // font is a sf::Font

	// set the string to display

	gameText.setString("Player 1 Lives: " + to_string(gamePlayerLives) + "\n\n Player 2 Lives: " + to_string(gamePlayer2Lives) + "\n\n" + winMessage);

	// set the character size
	gameText.setCharacterSize(20); // in pixels, not points!

	// set the color
	gameText.setFillColor(sf::Color::Blue);

	// set the text style
	gameText.setStyle(sf::Text::Bold);

	gameText.setPosition(100, 50);


}



void Game::killEnemy()
{


	this->enemyPosition = 0;

	this->enemyRandom = rand() % 600;


	int randTexture = rand() % 4;
	if (randTexture == 0)
	{
		gameEnemys.loadFromFile("banana.png");

		pointsFactor = 2;
	}
	else if (randTexture == 1)
	{
		gameEnemys.loadFromFile("sweet.png");
		pointsFactor = -2;
	}
	else if (randTexture == 2)
	{
		gameEnemys.loadFromFile("burger.png");
		pointsFactor = -5;
	}
	else
	{
		gameEnemys.loadFromFile("fruit.png");
		pointsFactor = 2;
	}




}

void Game::spawnBullet()
{

	

	bullet.setPosition(totalx, totaly);
	bullet2.setPosition(bullet2x, bullet2y);


	bullet2.setSize(sf::Vector2f(5.f, 5.f));
	bullet2.setFillColor(sf::Color::Red);

	bullet.setSize(sf::Vector2f(5.f, 5.f));
	bullet.setFillColor(sf::Color::Yellow);

}

void Game::takeOutGun()
{

	if (gunOut == true)
	{


		if (!akTexture.loadFromFile("akmodel.png")) {
			std::cout << "error";
		}

		akSprite.setTexture(akTexture);
		//this->






		
		this->akSprite.setOrigin(42, 5);


		canShoot = true;
	}
	this->akSprite.setPosition(playerPosition + 20, 410);


}

void Game::shootBullets()
{

	canHit = 1;


	//where it starts
	int aky = akSprite.getPosition().y;
	int akx = akSprite.getPosition().x;
	
	//checks for mouse position
	int mousey1 = this->mouse.getPosition(*this->window).y;
	int mousex1 = this->mouse.getPosition(*this->window).x;

	//how many large or small the movement is
	const int distance = 30;

	std::cout << "\n The mouse position used is x: " << mousex1 << " y: " << mousey1 << "\n The launch position is x: " << akx << " y: " << aky;




	
	
	
	//finds the height and width of that position and lowers it to movable values
	 travely = (mousey1 - aky) / distance;
	 travelx = (mousex1 - akx) / distance;
	 
	 //global variable for bullet's position
	totalx = akx;
	totaly = aky;

	this->bulletPosX = totalx;
	this->bulletPosX = totaly;
	

	//the bullets position updates constantly elsewhere while this is only run when the fire key is pressed
	
	std::cout << "\n The current MOVEMENTS ARE x: " << travelx << " y: " << travely;

}

void Game::checkHit()
{
	if (canHit == 1)
	{
		if (gamePlayer.getGlobalBounds().contains(bullet2.getPosition()))
		{

			gamePlayerAlive = false;
			gamePlayerLives -= 1;

			if (gamePlayerLives == 0)
			{
				winMessage += "Player 2";


			}

		}
		else if (gamePlayer2.getGlobalBounds().contains(bullet.getPosition()))
		{

			gamePlayer2Alive = false;
			gamePlayer2Lives -= 1;

			if (gamePlayer2Lives == 0)
			{
				winMessage += "Player 1";


			}

		}


		canHit = 0;

	}
}

void Game::updateGameEnemy()
{

	this->spawnGameEnemy();

	if (this->gameEnemy.getGlobalBounds().contains(this->gamePlayer.getPosition())) {

		this->gamePoints += pointsFactor;

		killEnemy();

	}

	else if (this->gameEnemy.getPosition().y > 600)
	{

		killEnemy();

	}

	else
	{

		this->enemyPosition += 2;

	}

}



void Game::updateGamePlayer()
{

	this->spawnGamePlayer();


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && playerPosition > 9 && window->hasFocus()) {

		this->playerPosition -= 10;


	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && playerPosition < 739 && window->hasFocus()) {

		this->playerPosition += 10;


	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1) && window->hasFocus()) {

		

		gunOut = true;
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && window->hasFocus()) {

		shootBullets();




	}

	takeOutGun();
	float bulletx = bullet.getPosition().x;
	float bullety = bullet.getPosition().y;

	
	
	this->totalx += travelx;
	this->totaly += travely;

	spawnBullet();
	

	
	checkHit();
	 
		
}

void spawnButton()
{



}
