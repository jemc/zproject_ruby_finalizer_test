/*  =========================================================================
    chatty - 

    =========================================================================
*/

#ifndef __CHATTY_H_INCLUDED__
#define __CHATTY_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif


//  @warning THE FOLLOWING @INTERFACE BLOCK IS AUTO-GENERATED BY ZPROJECT!
//  @warning Please edit the model at "api/chatty.xml" to make changes.
//  @interface
//  Create a new chatty.
ZRTF_EXPORT chatty_t *
    chatty_new ();

//  Destroy the chatty.
ZRTF_EXPORT void
    chatty_destroy (chatty_t **self_p);

//  Print properties of object
ZRTF_EXPORT void
    chatty_print (chatty_t *self);

//  Self test of this class
ZRTF_EXPORT void
    chatty_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif
