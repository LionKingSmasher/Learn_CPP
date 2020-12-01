#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

void print(const boost::system::error_code&, boost::asio::deadline_timer* t, int* count){
    if(*count < 5){ //만약 5초보다 적다면
        std::cout << *count << std::endl;
        ++(*count);

        t->expires_at(t->expires_at() + boost::posix_time::seconds(1));
        t->async_wait(boost::bind(print, boost::asio::placeholders::error, t, count)); //재귀 호출
    }
}

int main(void){
    boost::asio::io_service io;
    int count = 0;
    boost::asio::deadline_timer t(io, boost::posix_time::seconds(1));
    t.async_wait(boost::bind(print, boost::asio::placeholders::error, &t, &count)); //print라는 함수에, boost::asio::placeholders::error, t, count를 넘긴후 재귀 호출
    io.run();
}