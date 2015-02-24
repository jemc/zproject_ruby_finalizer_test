/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#include "QmlChatty.h"


///
//  Print properties of object
void QmlChatty::print () {
    chatty_print (self);
};


QObject* QmlChatty::qmlAttachedProperties(QObject* object) {
    return new QmlChattyAttached(object);
}


///
//  Self test of this class
void QmlChattyAttached::test (bool verbose) {
    chatty_test (verbose);
};

///
//  Create a new chatty.
QmlChatty *QmlChattyAttached::construct () {
    QmlChatty *qmlSelf = new QmlChatty ();
    qmlSelf->self = chatty_new ();
    return qmlSelf;
};

///
//  Destroy the chatty.
void QmlChattyAttached::destruct (QmlChatty *qmlSelf) {
    chatty_destroy (&qmlSelf->self);
};

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
