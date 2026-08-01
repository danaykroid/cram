#pragma once 

#include<string> 
#include<vector> 
#include<algorithm>

class FlagParse {
	private:
		std::vector<char> flags;
	public:
		FlagParse(size_t flagc,std::string flagv){
			for(int i = 1; i<flagc; ++i){
				this->flags.push_back(flagv[i]);
			}
		}

		bool cmdOptionExists(const char &option){
			return std::find(this->flags.begin(),this->flags.end(),option) != this->flags.end();
		}
};
