#include "singleton_call_once.hpp"

using namespace std;

unique_ptr<SingletonCallOnce>
SingletonCallOnce::instance_;

once_flag
SingletonCallOnce::instance_flag_;

SingletonCallOnce&
SingletonCallOnce::get_instance()
{
    call_once(instance_flag_, []{instance_.reset(new SingletonCallOnce());});

    return *instance_;
}


SingletonCallOnce::SingletonCallOnce()
: value_(0)
{}

void
SingletonCallOnce::add(int value)
{
    value_ += value;
}


int
SingletonCallOnce::get_value() const
{
    return value_;
}
