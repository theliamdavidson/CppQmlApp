#ifndef SCAN_SIGNAL_H
#define SCAN_SIGNAL_H
#include <QList>
#include <QObject>


class scan_signal : public QObject{
    Q_OBJECT
    Q_PROPERTY(int counter READ counter WRITE index_reset NOTIFY counter_changed) // this makes counter available as a QML property
    public:
        scan_signal();
        void sendList(const QString &text);
        int counter() const;
        void index_reset(int value);
        int index;


    signals:
        void counter_changed();
    public slots:

};
#endif // SCAN_SIGNAL_H
