#include <iostream>
#include <string>
#include <sstream>

class Putils{
    private:
        std::string process;

    public: 
        Putils(std::string proc);
        
    public:
        void getPid(std::string proc){
            std::stringstream cmd;

            cmd << "ps -ef | grep " << proc << " | grep -v grep -c";

            FILE* app = popen(cmd.str().c_str(), "r");
            char instances = '0';

            if (app) {
                fread(&instances, sizeof(instances), 1, app);
                pclose(app);
            }
            std::cout << proc << " is " << (instances == '0' ? "NOT" : "") << " running" << std::endl;
        }
};
