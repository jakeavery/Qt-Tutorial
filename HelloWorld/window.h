#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>
#include <QButtonGroup>
#include <QRadioButton>

class QPushButton;
class QProgressBar;
class QSlider;

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);
private slots:
    void slotButtonClicked(bool checked);
private:
    int buttonCounter;
    QPushButton *theButton;
    QPushButton *counterButton;
    QProgressBar *progressBar;
    QSlider *slider;
    QRadioButton *button1;
    QRadioButton *button2;
    QRadioButton *button3;
    QButtonGroup *buttonGroup;
signals:
    void counterReached();
public slots:
};

#endif // WINDOW_H
