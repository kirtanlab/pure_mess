#include <iostream>
using namespace std;
#include <string>
class Player
{
private:
    static int num_players;
    std::string name;
    int health;
public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    Player(std::string name_val = "None", int health_val = 0)
        : name{ name_val }, health{ health_val }{
        ++num_players; }
    // Destructor
    ~Player() { --num_players; };

    static int get_num_players();
    static int inc_get_num_players();

};
int Player::num_players{ 0 };

int Player::get_num_players() {
    return num_players;
}
int Player::inc_get_num_players() {
    return num_players++;
}



void display_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}



int main() {
    display_active_players();
    Player hero{ "Hero" };
    display_active_players();

    {
        Player kirtan{ "kirtan" };
        display_active_players();
    }
    display_active_players();

    Player* enemy = new Player("Enemy", 100);
    display_active_players();
    delete enemy;
    display_active_players();
    cout << "*****" << endl;
    for (int i = 0; i < 5; i++) {
        cout << Player::inc_get_num_players() << endl;
    }

    return 0;
}
