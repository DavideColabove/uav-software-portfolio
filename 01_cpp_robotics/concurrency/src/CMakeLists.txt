 cmake_minimum_required(VERSION 3.10) 
 project(telemetry_node) 

 add_executable(telemetry_node concurrency_condition_queue.cpp) 

 find_package(Threads REQUIRED) 
 target_link_libraries(telemetry_node Threads::Threads) 