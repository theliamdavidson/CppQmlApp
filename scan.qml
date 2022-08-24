import QtQuick 2.10
import QtQuick.Controls 2.1
import QtQuick.Window 2.2
import QtQml 2.0

ApplicationWindow {
    title: qsTr("NEUROPATHIC VIEW")
    width: 1024
    height: 768
    visible: true
    id: root
    visibility: "Maximized"
    color: "white"
    property int infIterator: 0
    ListModel {
        id: infTargets
       }
    Component {
        id: infDelegate
        Text {
            text: name;
            font.pixelSize: 24
        }
    }
        Rectangle {
            x: 0
            y: 0
            width: 1024
            height: 163
            //rotation: 270
            visible: true
            border.color: "#ffffff"

            gradient: Gradient {
                GradientStop { position: 0; color: "#3d1d5c"}
                GradientStop { position: 1; color: "#337cb6"}
            }
            Image {
                id: logo
                x: 25
                y: 13
                width: 272
                height: 90
                source: "logo-lluh_0.png"
                fillMode: Image.PreserveAspectFit
            }
        }

        Rectangle {
            id: nameBorder
            x: 60
            y: 207
            width: 380
            height: 66
            radius: 5
            visible: true
            gradient: Gradient {
                GradientStop { position: 0; color: "#901c3b"}
                GradientStop { position: 1; color: "#e13f52"}
            }
            Label{
                id: artery
                text: qsTr("Begin Scan:")
                font.family: "Segou UI"
                font.pointSize: 18
                color: "white"
                anchors.centerIn: parent
            }
        }
        Rectangle {
            id: rectangle1
            x: 120
            y: 337
            width: 57
            height: 138
            rotation: 270
            radius: 5
            gradient: Gradient {
                GradientStop {position: 0; color: "#901c3b"}
                GradientStop {position: 1; color: "#e13f52"}
            }
            Label{
                id: model0
                text: ""
                font.family: "Segou UI"
                font.pointSize: 18
                color: "white"
                anchors.centerIn: parent
                rotation: 90
            }
        }
        Rectangle {
            id: rectangle2
            x: 310
            y: 337
            width: 57
            height: 138
            rotation: 270
            radius: 5
            gradient: Gradient {
                GradientStop {position: 0; color: "#901c3b"}
                GradientStop {position: 1; color: "#e13f52"}
            }
            Label{
                id: model1
                text: ""
                font.family: "Segou UI"
                font.pointSize: 18
                color: "white"
                anchors.centerIn: parent
                rotation: 90
            }
        }
        Rectangle {
            id: rectangle3
            x: 120
            y: 484
            width: 57
            height: 138
            rotation: 270
            radius: 5
            gradient: Gradient {
                GradientStop {position: 0; color: "#901c3b"}
                GradientStop {position: 1; color: "#e13f52"}
            }
            TextEdit{
                id: edit0
                text: " "
                font.family: "Segou UI"
                font.pointSize: 18
                color: "white"
                anchors.centerIn: parent
                rotation: 90
                focus: true
            }
        }
        Rectangle {
            id: rectangle4
            x: 310
            y: 484
            width: 57
            height: 138
            rotation: 270
            radius: 5
            gradient: Gradient {
                GradientStop {position: 0; color: "#901c3b"}
                GradientStop {position: 1; color: "#e13f52"}
            }
            TextEdit{
                id: edit1
                text: " "
                font.family: "Segou UI"
                font.pointSize: 18
                color: "white"
                anchors.centerIn: parent
                rotation: 90
                focus: true
            }
        }
        Rectangle {
            id: rectangleanatomy
            x: 600
            y: 207
            width: 330
            height: 375
            radius: 5
            state: ""
            gradient: Gradient {
                GradientStop {position: 0; color: "#901c3b"}
                GradientStop {position: 1; color: "#e13f52"}
            }
            Image {
                id: anatonmyView
                anchors.centerIn: parent
                width: 330
                height: 330
                source: "chest.png"
                fillMode: Image.PreserveAspectFit
            }

        }
        RoundButton {
            id: continueOn
            x: 60
            y: 679
            width: 447
            height: 80
            visible: true
            radius: 5
            text: qsTr("CONTINUE")
            flat: true
            font.bold: true
            font.pointSize: 12
            leftPadding: 10
            highlighted: true
            layer.enabled: false
            onClicked: {
                var text0 = String(Math.floor(Math.random() * (999 - 100) ) + 100);
                var text1 = String(Math.floor(Math.random() * (999 - 100) ) + 100);
                model0.text =  text0[0] + "." + text0[1] + text0[2]
                model1.text =  text1[0] + "." + text1[1] + text1[2]
                edit0.text = " "
                edit1.text = " "
                artery.text = I
                infIterator = infIterator + 1
                scan_signal.sendlist("QML MESSAGE")
                // swap for scan data in future functionality
            }

        }
        RoundButton {
            id: mainMenu
            x: 513
            y: 679
            width: 447
            height: 80
            radius: 5
            text: qsTr("PATIENT INFORMATION")
            flat: true
            font.bold: true
            font.pointSize: 12
            leftPadding: 10
            highlighted: true
            onClicked: root.close()
        }
}
