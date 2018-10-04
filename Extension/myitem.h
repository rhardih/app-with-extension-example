#ifndef MYITEM_H
#define MYITEM_H

#include <QQuickItem>

class MyItem : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(MyItem)

public:
    MyItem(QQuickItem *parent = nullptr);
    ~MyItem();

    Q_INVOKABLE QString foo() { return "bar"; }
};

#endif // MYITEM_H
