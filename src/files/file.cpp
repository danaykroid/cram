#include<files/file.hpp>
#include<filesystem>
#include<iostream>


namespace fs = std::filesystem;

std::vector<std::string> listFiles(const std::string &path){

	std::vector<std::string> filesList;

	for(const auto &file: fs::directory_iterator(path)){
		std::cout<<"path: "<<file.path()<<std::endl;
		filesList.emplace_back(file.path());
	}
	return filesList;
}
