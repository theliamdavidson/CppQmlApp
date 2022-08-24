#include "scan_signal.h"
#include <QDebug>

scan_signal::scan_signal(){

}
void scan_signal::sendList(const QString &text){
    qDebug() << "scan signal sendList called with" << text;
}
void scan_signal::index_reset(){
    index = 0;
}
