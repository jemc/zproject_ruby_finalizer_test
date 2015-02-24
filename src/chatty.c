/*  =========================================================================
    chatty - 

    =========================================================================
*/

/*
@header
    chatty - 
@discuss
@end
*/

#include "../include/zproject_ruby_test_finalizer.h"

//  Structure of our class

struct _chatty_t {
    size_t x;
};


//  --------------------------------------------------------------------------
//  Create a new chatty.

chatty_t *
    chatty_new ()
{
    chatty_t *self = (chatty_t *) zmalloc (sizeof (chatty_t));
    assert (self);

    zsys_debug ("A chatty instance was created!");

    return self;
}

//  --------------------------------------------------------------------------
//  Destroy the chatty

void
chatty_destroy (chatty_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        chatty_t *self = *self_p;

        //  Free class properties
        zsys_debug ("A chatty instance was destroyed!");

        //  Free object itself
        free (self);
        *self_p = NULL;
    }
}


//  --------------------------------------------------------------------------
//  Print properties of object

void
chatty_print (chatty_t *self)
{
    assert (self);
}


//  --------------------------------------------------------------------------
//  Selftest

void
chatty_test (bool verbose)
{
    printf (" * chatty: ");

    //  @selftest
    //  Simple create/destroy test
    chatty_t *self = chatty_new ();
    assert (self);
    chatty_destroy (&self);
    //  @end

    printf ("OK\n");
}
