#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>

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
    QPushButton *theButton;
    QProgressBar *progressBar;
    QSlider *slider;
signals:

public slots:
};

#endif // WINDOW_H
