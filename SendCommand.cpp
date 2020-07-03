// my second program in C++
#include <iostream>
#include "WSG50Controller.h"
#include <chrono>
#include <thread>
WSG50Controller *_wSG50Controller;
int main ()
{
  std::cout << "Hello World! " << std::endl;
  std::cout << "I'm a C++ program" << std::endl;
  
  std::string ip = "";
  std::string port = "";
  float speed = 30.0;
  float width = 50.0;
  _wSG50Controller = new WSG50Controller("172.31.1.150", "1000");
  _wSG50Controller->grasp(width, speed);
  std::this_thread::sleep_for (std::chrono::seconds(1));
}