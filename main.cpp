#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <string>
using namespace std;

string scans[67] = {"Right subclavian", "Right Brachial", "Right Proximal Radial"
                    "Right Proximal Ulnar", "Right Distal Radial","Right Distal Ulnar",
                    "Right 1st", "Right 2nd", "Right 3rd", "Right 4th", "Left subclavian",
                    "Left Brachial", "Left Proximal Radial", "Left Proximal Ulnar",
                    "Left Distal radial", "Left Distal Ulnar", "Left 1st",
                    ",Left 2nd", "Left 3rd", "Left 4th", "Right u Sciatic",
                    "Right M Sciatic", "Right L sciatic", "Right Proximal Pero",
                    "Right Inter Pero", "Right Low Pero", "Right Proximal tib",
                    "Right inter tib", "Right low tib", "Right Calc", "Right Med arch",
                    "Right Lat arch", "Right MT cutanesou", "Right 1ST", "Right 2ND",
                    "Right 3RD", "Right 4th", "Left u Sciatic", "Left M Sciatic",
                    "Left L sciatic", "Left Proximal Pero", "Left Inter Pero",
                    "Left Low Pero", "Left Proximal tib", "Left inter tib",
                    "Left low tib", "Left Calc", "Left Med arch", "Left Lat arch",
                    "Left MT cutanesou", "Left 1ST", "Left 2ND", "Left 3RD",
                    "Left 4th", "Right Interm ulnar","Right Interm Radial",
                    "Left Interm Ulnar", "Left Interm Radial", "Left EI",
                    "Lower Aorta", "Upper Aorta", "Right EI", "Intermim Aorta",
                    "Intermed LEI", "Intermed REI", "Lower LEI", "Lower REI"};


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
    engine.load(url);

    return app.exec();
}
