#include "baseAI.h"

std::string Joueur::BaseAI::getName()
{
    return "C++ Player";
}

void Joueur::BaseAI::start()
{
    // empty, used as an interface function for competitiors
}

void Joueur::BaseAI::gameUpdated()
{
    // empty, used as an interface function for competitiors
}

void Joueur::BaseAI::ended(const bool& won, const std::string& reason)
{
    // empty, used as an interface function for competitiors
}

