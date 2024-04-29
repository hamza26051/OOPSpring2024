/*
    Name: hamza Sheikh
    Roll no: 23k-0060
*/

#include <iostream>
#include <string>

using namespace std;

class gamerenderingengine{
	public:
		
		void render(){
			cout<<"rendering"<<endl;
		}
};

class inputhandler{
	public:
		void handle(){
			cout<<"handeling the input"<<endl;
		}
};
class physicsengine{
	public:
		void engine(){
			cout<<"starting the engine"<<endl;
		}
};
class  gameengine{
	private:
	gamerenderingengine gamerender;
	inputhandler handler;
	physicsengine physics;
	public:
		void start(){
			gamerender.render();
			handler.handle();
			physics.engine();
		}
};

int main(){
	gameengine game;
	game.start();
	return 0;
}
