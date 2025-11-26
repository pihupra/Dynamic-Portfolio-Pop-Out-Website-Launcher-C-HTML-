#include <iostream>
#include <cstdlib>

#ifdef _WIN32
    #define OPEN "start "
#elif __APPLE__
    #define OPEN "open "
#else
    #define OPEN "xdg-open "
#endif

int main() {
    std::cout << "🚀 Launching your pop-out website..." << std::endl;
    system(OPEN "website/index.html");
    return 0;
}
