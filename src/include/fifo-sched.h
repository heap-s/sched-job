#include <iostream>
#include <queue>
#include <string>

class sched-fifo{
    private:
        std::string process;
    public:
        std::queue<std::string> procName;

        sched-fifo(std::queue<std::string> processes, std::string proc):

    public:
            void showFrontProc(std::queue<std::string> procName){
                while(!procName.empty()){
                    std::cout << procName.front() << std::endl;
                }
            }
            std::string addProc(std::queue<std::string>procName, std::string process){
                procName.push(process);
                return process;
            }
            void showQueue(std::queue<std::string> procName){
                std::queue<std::string> copyOfProcName;
                copyOfProcName = procName;
                while (!copyOfProcName.empty()){
                    std::cout << copyOfProcName.front() << std::endl;
                    copyOfProcName.pop();
                }

            }
            void removeFrontProc(std::queue<std::string>procName){
                // use this with showFrontProc, maybe making own version of queue would work better for this as you might want to remove process by name/index??
                procName.pop();
            }

};

