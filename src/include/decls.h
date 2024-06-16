#include <iostream>
#include <string>

enum severity{
    LOW = 0,
    MEDIUM = 1, 
    HIGH = 2,
    CRITICAL = 3
};

struct newProcess{
    std::string processName;
    enum severity procSeverity;
};
