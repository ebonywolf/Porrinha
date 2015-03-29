#include "Factory.h"
#include "AI.h"
#include "Player.h"
#include "human_player.h"

Factory::Factory(){

}
Factory::~Factory(){ }
 std::vector<Player*> Factory::criarJogadores(){
    std::vector<Player*> jogadores= std::vector<Player*>();
    jogadores.push_back(new randyRandom());
    jogadores.push_back(new randyRandom());
    jogadores.push_back(new zero2());
    jogadores.push_back(new randyRandom());
    jogadores.push_back(new randyRandom());
   // jogadores.push_back(new human_player::HumanPlayer("Eu", 3));
    return jogadores;

}
