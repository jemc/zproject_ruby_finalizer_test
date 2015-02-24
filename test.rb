
require_relative 'bindings/ruby/lib/zproject_ruby_test_finalizer/ffi'

def foo
  ZprojectRubyTestFinalizer::FFI::Chatty.new
end

while true
  sleep 0.005; foo
end
