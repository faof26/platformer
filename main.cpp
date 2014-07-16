#include <sstream>
#include "main.hpp"
#include "world.h"

#include <iostream>

// Initialization of the smart pointer
Application* Application::pSingleton = NULL;

void Application::Update()
{	

	// Events managing
    sf::Event Event;
    while (Window->pollEvent(Event))
    {					
        // Shutting down
        if (Event.type == sf::Event::Closed)
		{
            Window->close();
			return;
		}

		 if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            // la touche "flèche gauche" est enfoncée : on bouge le personnage
            _player->MoveRight();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            // la touche "flèche gauche" est enfoncée : on bouge le personnage
            _player->MoveLeft();
        }
    }
	
}

void Application::Display()
{	
	Window->clear();
	Window->getViewport(Window->getView());	
	
	_world->draw();	
	_player->draw();

	Window->display();
}

void Application::Init(){
	_world = new world(Window);
	_player = new player(Window);	
}

int main()
{
	Application *App = Application::GetSingleton();	
	
    
	// Create the main window
    sf::RenderWindow *pWindow = App->createWindow(sf::FloatRect(0, 0, 800, 600), sf::VideoMode(800, 600, 32), "Platefaormer");		
	
	App->Init();
    
	// Main loop
    while (App->GetWindow()->isOpen())
    {		
		App->Update();
        App->Display();
    }

    return EXIT_SUCCESS;
}