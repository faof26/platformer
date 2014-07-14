#include <sstream>
#include "main.hpp"

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
    }
	
}

void Application::Display()
{	
	Window->clear();
	Window->getViewport(Window->getView());	
	
	//...

	Window->display();
}

int main()
{
	Application *App = Application::GetSingleton();	
    
	// Create the main window
    sf::RenderWindow *pWindow = App->createWindow(sf::FloatRect(0, 0, 800, 600), sf::VideoMode(800, 600, 32), "Platefaormer");		

    // Main loop
    while (App->GetWindow()->isOpen())
    {		
		App->Update();
        App->Display();
    }

    return EXIT_SUCCESS;
}