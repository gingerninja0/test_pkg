
#include <iostream>

#include <rclcpp/rclcpp.hpp>

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    std::cout << "Hello, world!" << std::endl;

    rclcpp::shutdown();

    return 0;
}

