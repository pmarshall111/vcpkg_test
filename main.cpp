#include <CLI/CLI.hpp>
#include <iostream>

int main(int argc, char** argv) {
    CLI::App app{"MyApp - Example Argument Parser"};

    int value = 0;
    app.add_option("-v,--value", value, "An integer value");

    CLI11_PARSE(app, argc, argv);

    std::cout << "Value: " << value << std::endl;
    return 0;
}
