#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv) {
    QApplication app (argc, argv);

    QWidget firstWindow;
    firstWindow.setFixedSize(300, 100);

    QPushButton button1;
    button1.setText("Whaddupppp");
    button1.setToolTip("This is what's up");
    button1.setParent(&firstWindow);

    QFont courierFont ("Courier", 24, 96, true);
    button1.setFont(courierFont);

    QIcon materialIcon ("D:/Qt-Tutorial/HelloWorld/img/icon.png");
    button1.setIcon(materialIcon);

    QPushButton button2 ("THIS is what's up", &firstWindow);

    QFont smallerFont ("Helvetica", 8, -1, false);
    button2.setFont(smallerFont);

    QPushButton *anotherButton = new QPushButton("What is THIS though...", &firstWindow);
    anotherButton->setGeometry(50, 50, 200, 50);

    firstWindow.show();

    return app.exec();
}
