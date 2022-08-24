#ifndef SCAN_SIGNAL_H
#define SCAN_SIGNAL_H
#include <QList>
#include <QObject>


class scan_signal : public QObject{
    Q_OBJECT
    public:
    scan_signal();
    void sendList(const QString &text);
    public slots:

};
#endif // SCAN_SIGNAL_H
