#ifndef CUSTOMTABWIDGET_H
#define CUSTOMTABWIDGET_H

#include <QTabWidget>
#include <QTabBar>

class CustomTabWidget : public QTabWidget {
public:
    // Constructor to accept a parent
    explicit CustomTabWidget(QWidget* parent = nullptr)
        : QTabWidget(parent) {}

    // Public method to expose the protected tabBar()
    QTabBar* publicTabBar() {
        return tabBar(); // Expose the protected tabBar() method
    }
};

#endif // CUSTOMTABWIDGET_H
