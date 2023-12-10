#ifndef __APPLICATION_HPP__
#define __APPLICATION_HPP__

#include "Director/Director.hpp"
#include "Document/Document.hpp"
#include "Controller/CommandController.hpp"

class Application {
public:
    Application(const Application&) = delete;
    Application& operator=(const Application&) = delete;
    static Application& getApplication();
    void run();

    Director& getDirector();
    Document& getDocument();

private:
    Application();

private:
    Document& _doc;
    Director& _dir;
    CommandController _controller;


};

#endif //__APPLICATION_HPP__