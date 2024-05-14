#include "app.hpp"
#include "session.hpp"

    App::App()
    {

    }

    App::~App()
    {
        for (Session * session: sessions)
        {
            delete session;
        }
        
    }

    void App::load(const std::vector <char> &filename)
    {
        Session * session = new Session(filename);
        sessionID++;
        std::cout << "Session with ID:" << sessionID << "started!";
        sessions.push_back(session);

    }

    void App::currentSession()
    {
        if (!sessions.empty())
        {
            sessions.back()-> функцията;
        }
        else
        {
            std::cout << "No session";
        }
        
    }
    
