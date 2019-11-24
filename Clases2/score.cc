#include "score.hh"

Score::Score(){
	score = 0;
	
	font.loadFromFile("../Fonts/Sansation-Regular.ttf");
	
	s_score << "Score: " << score;
	
	this->setCharacterSize(20);
	this->setFont(font);
	this->setString(s_score.str());
	this->setPosition(230.0f,0.0f);
}

void Score::draw(sf::RenderWindow &window){
	window.draw(*this);
}