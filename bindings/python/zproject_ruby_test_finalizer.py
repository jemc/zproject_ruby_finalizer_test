################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################

from __future__ import print_function
from ctypes import *
from ctypes.util import find_library

# zproject_ruby_test_finalizer
libpath = find_library("zproject_ruby_test_finalizer")
if not libpath:
    raise ImportError("Unable to find zproject_ruby_test_finalizer C library")
lib = cdll.LoadLibrary(libpath)

class chatty_t(Structure):
    pass # Empty - only for type checking
chatty_p = POINTER(chatty_t)


# chatty
lib.chatty_new.restype = chatty_p
lib.chatty_new.argtypes = []
lib.chatty_destroy.restype = None
lib.chatty_destroy.argtypes = [POINTER(chatty_p)]
lib.chatty_print.restype = None
lib.chatty_print.argtypes = [chatty_p]
lib.chatty_test.restype = None
lib.chatty_test.argtypes = [c_bool]

class Chatty(object):
    """"""

    def __init__(self, *args):
        """Create a new chatty."""
        if len(args) == 2 and isinstance(args[0], chatty_p) and isinstance(args[1], bool):
            self._as_parameter_ = args[0] # Conversion from raw type to binding
            self.allow_destruct = args[1] # This is a 'fresh' value, owned by us
        else:
            self._as_parameter_ = lib.chatty_new(*args) # Creation of new raw type
            self.allow_destruct = True

    def __del__(self):
        """Destroy the chatty."""
        if self.allow_destruct:
            lib.chatty_destroy(byref(self._as_parameter_))

    def print(self):
        """Print properties of object"""
        return lib.chatty_print(self._as_parameter_)

    @staticmethod
    def test(verbose):
        """Self test of this class"""
        return lib.chatty_test(verbose)

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
