#include "app.hpp"
#include "session.hpp"

// Според мен това, което е в main-a, може да се премести тук - в този клас да се четат командите,
// когато има команда load - да се създава сесия и да се добавя в sessions.
// Когато има друга команда, да се извиква processCommand() за съответната сесия със съответната команда.

// Тук съм правила клас, подобен на това, което имам предвид (само че моят е за по-прост input), може да вземеш някои идеи евентуално,
// ако решиш да го правиш по подобен начин - https://github.com/darina2612/LL-Figures-Count/blob/main/src/ConsoleInterfaceRunner.cpp

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
    
