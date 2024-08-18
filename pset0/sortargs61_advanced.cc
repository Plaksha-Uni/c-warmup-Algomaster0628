#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(int argc,char* argv[]){
	if(argc > 1){
		std::vector<std::string> args;
		for(int i = 1; i < argc; ++i){
			args.push_back(argv[i]);
		}
		std::sort(args.begin(),args.end());

		for(const auto& arg : args){
			std::cout << arg << std::endl;
		}
	}
	return 0;
}
