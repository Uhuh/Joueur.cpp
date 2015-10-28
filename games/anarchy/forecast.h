// Generated by Creer at 01:44PM on October 28, 2015 UTC, git hash: '1b69e788060071d644dd7b8745dca107577844e1'
// The weather effect that will be applied at the end of a turn, which causes fires to spread.

#ifndef JOUEUR_ANARCHY_FORECAST_H
#define JOUEUR_ANARCHY_FORECAST_H

#include "anarchy.h"
#include "gameObject.h"

// <<-- Creer-Merge: includes -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
// you can add addtional #includes(s) here.
// <<-- /Creer-Merge: includes -->>

/// <summary>
/// The weather effect that will be applied at the end of a turn, which causes fires to spread.
/// </summary>
class Anarchy::Forecast : public Anarchy::GameObject
{
    friend Anarchy::GameManager;

    protected:
        virtual void deltaUpdateField(const std::string& fieldName, boost::property_tree::ptree& delta);
        Forecast() {};
        ~Forecast() {};

    public:
        /// <summary>
        /// The Player that can use WeatherStations to control this Forecast when its the nextForecast.
        /// </summary>
        Anarchy::Player* controllingPlayer;

        /// <summary>
        /// The direction the wind will blow fires in. Can be 'north', 'east', 'south', or 'west'
        /// </summary>
        std::string direction;

        /// <summary>
        /// How much of a Building's fire that can be blown in the direction of this Forecast. Fire is duplicated (copied), not moved (transfered).
        /// </summary>
        int intensity;


        // <<-- Creer-Merge: fields -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional fields(s) here. None of them will be tracked or updated by the server.
        // <<-- /Creer-Merge: fields -->>


        // <<-- Creer-Merge: methods -->> - Code you add between this comment and the end comment will be preserved between Creer re-runs.
        // you can add addtional method(s) here.
        // <<-- /Creer-Merge: methods -->>
};

#endif
