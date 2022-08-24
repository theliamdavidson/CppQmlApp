#ifndef SCAN_SIGNAL_H
#define SCAN_SIGNAL_H
#include <QList>
#include <QObject>


class scan_signal : public QObject{
    Q_OBJECT
    public:
    int index;
    scan_signal();
    void sendList(const QString &text);
    void index_reset();
    public slots:

};
#endif // SCAN_SIGNAL_H
