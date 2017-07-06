#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>

class QPushButton;
class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);
private:
    QPushButton *theButton;
signals:

public slots:
};

#endif // WINDOW_H
