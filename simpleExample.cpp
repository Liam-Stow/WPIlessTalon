//g++ -std=c++11 -Wall -m64 -Iinclude simpleExample.cpp lib/x86-64/libCTRE_PhoenixPlatformLinuxSocketCan.a -o simpleExample

#include "ctre/Phoenix.h"
#include "Platform-linux-socket-can.h"

int main() {
    ctre::phoenix::platform::can::SetCANInterface("vcan0");
    ctre::phoenix::motorcontrol::can::TalonSRX talon = TalonSRX(1);

    while (true) {
        ctre::phoenix::platform::FeedWatchDog(100);
        talon.Set(ControlMode::PercentOutput, 0.5);
    }

    return 0;
}





