#include <SFML/Graphics.hpp>
#include "updater.h"
#include <filesystem>

namespace
{
	std::string GetAssetPath(const std::string& relativePath)
	{
		// Current Working Directory is: root\build\src\CalcMod\Driver
		auto currentPath = std::filesystem::current_path();
		return "../../../../Assets/" + relativePath;
	}
}

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	  
	sf::Font font;
	if (!font.loadFromFile(GetAssetPath("RecursiveSansLnrSt-Med.ttf")))
		return EXIT_FAILURE;
	sf::Text text("Hello SFML " + Updater::GetText(), font, 50);

	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Close window: exit
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// Clear screen
		window.clear();

		// Draw the string
		window.draw(text);

		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
}
