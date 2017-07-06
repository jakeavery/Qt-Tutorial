#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)
{
    // Set size of window
    setFixedSize(500, 300);

    // Create and position button
    theButton = new QPushButton("Here it is", this);
    theButton->setGeometry(200, 100, 100, 50);
}
