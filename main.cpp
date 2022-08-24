#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "scan_signal.h"
using namespace std;
scan_signal sc;



int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    scan_signal* scannedSig = new scan_signal();
    scannedSig->sendList("TEXT FROM C++");
    engine.rootContext()->setContextProperty("list", scannedSig);
    engine.load(url);



    return app.exec();
}
