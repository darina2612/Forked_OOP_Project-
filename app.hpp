#ifndef __APP__HPP
#define __APP__HPP
#include "image.hpp"
#include "session.hpp"

class App
{
public:
    App();
    ~App();

    void load(const std::vector <char> &filename);
    void currentSession();

private:
    std::vector<Session*> sessions;

};


#endif