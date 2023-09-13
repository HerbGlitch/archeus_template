#include <archeus.hpp>

class Game : public arc::State {
public:
    Game(){}
    ~Game(){}

    void update(){}
    void render(){}
};

namespace arc {
    State *initState(){
        return new Game();
    }
}
