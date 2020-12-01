SET(srcs learn1.cpp)

add_executable(app.out ${srcs})
target_link_libraries(app.out
  boost_system
  boost_thread 
  pthread
)