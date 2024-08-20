#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Demon Renderer");

    // Define a triangle shape
    sf::VertexArray triangle(sf::Triangles, 3);

    // Define the positions of the triangle vertices
    triangle[0].position = sf::Vector2f(400.f, 200.f); // Top
    triangle[1].position = sf::Vector2f(300.f, 400.f); // Bottom-left
    triangle[2].position = sf::Vector2f(500.f, 400.f); // Bottom-right

    // Set the colors for each vertex
    triangle[0].color = sf::Color::Red;    // Red
    triangle[1].color = sf::Color::Green;  // Green
    triangle[2].color = sf::Color::Blue;   // Blue

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear();

        // Draw the triangle
        window.draw(triangle);

        // Display the window contents
        window.display();
    }

    return 0;
}

