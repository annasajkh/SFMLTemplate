#include <main.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(860, 540), "SFML Template");
    sf::Vector2u windowSize = window.getSize();
    sf::Clock deltaClock;

    
    while(window.isOpen())
    {   
        sf::Event event;
        sf::Time deltaTime = deltaClock.restart();

        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }

        }

        window.clear();
        
        window.display();
    }

}
