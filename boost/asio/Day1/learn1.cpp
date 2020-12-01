/*
날짜: 2020년 10월 2일
제작자: 신현규
*/

#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

void print(const boost::system::error_code&)
{
    std::cout << "Hello" << std::endl;
}

int main()
{
    boost::asio::io_service io;
    boost::asio::deadline_timer t(io, boost::posix_time::seconds(5)); //5초 설정
    t.async_wait(&print); //5초 동안 기다린후 코드 계속 작동

    io.run();
    return 0;
}