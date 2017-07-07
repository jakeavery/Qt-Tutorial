#include "window.h"

#include <QApplication>

Window::Window(QWidget *parent) : QWidget(parent)
{
    // Set size of window
    setFixedSize(500, 300);

    // Create and position button
    theButton = new QPushButton("Here it is", this);
    theButton->setGeometry(200, 100, 100, 50);
    theButton->setCheckable(true);

    // Set counter to 0
    buttonCounter = 0;
    connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT (quit()));

    // Make the connection
    connect(theButton, SIGNAL (clicked(bool)), this, SLOT (slotButtonClicked(bool)));

    // Create progress bar
    progressBar = new QProgressBar(this);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(0, 0, 180, 30);

    // Create a horizontal slider
    slider = new QSlider(this);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(320, 0, 180, 30);

    // Slider -> progress bar connection
    connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));

    // Create counter button
    counterButton = new QPushButton("0", this);
    counterButton->setGeometry(100, 100, 50, 50);

    // Create radio button group
    buttonGroup = new QButtonGroup(this);
    // Create radio buttons
    button1 = new QRadioButton(this);
    button2 = new QRadioButton(this);
    button3 = new QRadioButton(this);
    button1->setGeometry(400, 100, 20, 20);
    button2->setGeometry(400, 150, 20, 20);
    button3->setGeometry(400, 200, 20, 20);
    // Add buttons to group
    buttonGroup->addButton(button1);
    buttonGroup->addButton(button2);
    buttonGroup->addButton(button3);
}

// Clicked slot
void Window::slotButtonClicked(bool checked)
{
    if (checked) {
        theButton->setText("Checked");
    } else {
        theButton->setText("Not Checked");
    }

    buttonCounter ++;
    counterButton->setText(QString::number(buttonCounter));

    if (buttonCounter == 10) {
        emit counterReached();
    }
}
