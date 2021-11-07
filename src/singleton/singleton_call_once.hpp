#ifndef SINGLETON_CALL_ONCE_HPP
#define SINGLETON_CALL_ONCE_HPP

#include <memory>
#include <mutex>


class SingletonCallOnce{

public:

    static SingletonCallOnce& get_instance();

    void add(int value);

    int get_value() const;


private:

    SingletonCallOnce();
    SingletonCallOnce(SingletonCallOnce const&) = delete;
    SingletonCallOnce(SingletonCallOnce&&) = delete;

    SingletonCallOnce& operator=(SingletonCallOnce const&) = delete;
    SingletonCallOnce& operator=(SingletonCallOnce&&) = delete;

    static std::unique_ptr<SingletonCallOnce> instance_;
    static std::once_flag instance_flag_;


    int value_;
};

#endif //SINGLETON_CALL_ONCE_HPP
