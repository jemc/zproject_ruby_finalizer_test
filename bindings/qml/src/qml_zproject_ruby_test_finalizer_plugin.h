/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#ifndef QML_ZPROJECT_RUBY_TEST_FINALIZER_PLUGIN_H
#define QML_ZPROJECT_RUBY_TEST_FINALIZER_PLUGIN_H

#include <QQmlExtensionPlugin>
#include <qqml.h>

class QmlChatty;
class QmlChattyAttached;

#include "QmlChatty.h"

class QmlZprojectRubyTestFinalizerPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA (IID "org.qt-project.Qt.QQmlExtensionInterface")
    
public:
    void registerTypes (const char *uri)
    {
        qmlRegisterType<QmlChatty> (uri, 1, 0, "QmlChatty");
        qmlRegisterType<QmlChattyAttached>();
    };
};

#endif

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
