#include "scan_signal.h"
#include <QDebug>

scan_signal::scan_signal() : index(0)
{

}
void scan_signal::sendList(const QString &text)
{
    qDebug() << "scan signal sendList called with" << text;
}
int scan_signal::counter() const {
    return index;
}

void scan_signal::index_reset(int value)
{
    if(index != value) {
        index = value;
        emit counter_changed();
    }
}
