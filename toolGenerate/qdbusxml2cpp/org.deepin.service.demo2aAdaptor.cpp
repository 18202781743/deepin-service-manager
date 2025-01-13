/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./deepin-service-manager/src/demo/plugin-qt/demo2/org.deepin.service.demo2a.xml -a ./deepin-service-manager/toolGenerate/qdbusxml2cpp/org.deepin.service.demo2aAdaptor -i ./deepin-service-manager/toolGenerate/qdbusxml2cpp/org.deepin.service.demo2a.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./deepin-service-manager/toolGenerate/qdbusxml2cpp/org.deepin.service.demo2aAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Demo2aAdaptor
 */

Demo2aAdaptor::Demo2aAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Demo2aAdaptor::~Demo2aAdaptor()
{
    // destructor
}

QString Demo2aAdaptor::msg() const
{
    // get the value of property msg
    return qvariant_cast< QString >(parent()->property("msg"));
}

void Demo2aAdaptor::setMsg(const QString &value)
{
    // set the value of property msg
    parent()->setProperty("msg", QVariant::fromValue(value));
}

QString Demo2aAdaptor::Hello()
{
    // handle method call org.deepin.service.demo2a.Hello
    QString out0;
    QMetaObject::invokeMethod(parent(), "Hello", Q_RETURN_ARG(QString, out0));
    return out0;
}

bool Demo2aAdaptor::Register(const QString &id, QString &result2)
{
    // handle method call org.deepin.service.demo2a.Register
    //return static_cast<YourObjectType *>(parent())->Register(id, result2);
}
