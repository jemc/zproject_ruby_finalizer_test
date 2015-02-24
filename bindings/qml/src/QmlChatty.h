/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#ifndef QML_CHATTY_H
#define QML_CHATTY_H

#include <QtQml>

#include <zrtf.h>
#include "qml_zrtf_plugin.h"


class QmlChatty : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isNULL READ isNULL)
    
public:
    chatty_t *self;
    
    QmlChatty() { self = NULL; }
    bool isNULL() { return self == NULL; }
    
    static QObject* qmlAttachedProperties(QObject* object); // defined in QmlChatty.cpp
    
public slots:
    //  Print properties of object
    void print ();
};

class QmlChattyAttached : public QObject
{
    Q_OBJECT
    QObject* m_attached;
    
public:
    QmlChattyAttached (QObject* attached) {
        Q_UNUSED (attached);
    };
    
public slots:
    //  Self test of this class
    void test (bool verbose);

    //  Create a new chatty.
    QmlChatty *construct ();

    //  Destroy the chatty.
    void destruct (QmlChatty *qmlSelf);
};


QML_DECLARE_TYPEINFO(QmlChatty, QML_HAS_ATTACHED_PROPERTIES)

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
