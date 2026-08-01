#include<cstdlib>
#include<string>
#include<utils/cli.cpp>
#include<enums/flags.hpp>
#include<files/file.hpp>
#include<utils/logger.cpp>

using namespace std;


int main(int argc,char **argv){

	if (argc > 3 || argc < 3) {
		LOG_ERROR(logger,"invalid command!!");
		exit(EXIT_FAILURE);
	}

	std::string flags = argv[1];
	std::string dirPath = argv[2];

	FlagParse inputFlags(flags.length(),flags);

	if (inputFlags.cmdOptionExists(CREATE)){
		std::vector<std::string> filesList = listFiles(dirPath);
		LOG_INFO(logger,"the string exists in the arguments");
	}else{
		LOG_INFO(logger,"the string doesn't not exists in the arguments");
	}
}
