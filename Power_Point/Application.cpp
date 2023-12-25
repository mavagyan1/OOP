#include "Application.hpp"
#include "Slide/Slide.hpp"

Application& Application::getApplication() {
    static Application app;
    return app;
}

Application::Application() : _controller{std::cin, std::cout}, 
                             _doc(Document::getDocument()),
                             _dir(Director::getDirector()) {
    //initial_slide 
    _doc.addSlide(std::make_shared<Slide>()); 
}

void Application::run() {
    _controller.run();
}

Director& Application::getDirector() {
    return _dir;
}

Document& Application::getDocument() {
    return _doc;
}

void Application::stop() {
    _controller.off();
}
