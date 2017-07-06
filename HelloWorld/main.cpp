#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv) {
    QApplication app (argc, argv);

    QPushButton button;
    button.setText("Whaddupppp");
    button.setToolTip("This is what's up");

    QFont courierFont ("Courier", 24, 96, true);
    button.setFont(courierFont);

    QIcon materialIcon ("D:/icon.png");
    button.setIcon(materialIcon);

    button.show();

    return app.exec();
}
