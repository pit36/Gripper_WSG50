# Gripper_WSG50
Library for Schunk WSG50

g++ SendCommand.cpp WSG50Controller.cpp WSG50Communicator.cpp -o SendCommand -L /usr/local/lib/ -lboost_system -lboost_thread -lpthread -std=c++11

g++ SendCommand.cpp WSG50Controller.cpp WSG50Communicator.cpp -o SendCommand -std=c++11
