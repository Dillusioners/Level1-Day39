# include <iostream>

// simulates a single light color for a certain amount of seconds
// text -> the text which will be shown
// color -> the color of the text to be shown in ansi color code format
// time -> the time in seconds
void lightSimulator(std::string text, std::string color, int time){
	// looping until the time variable hits -1
	for(int i = 0; time >= 0; i++){
		// comparing modulus of i with a large seed as it is the closet to represent a second
		if(!(i % 119977640)){
			// printing the text, resetting the index and reducing the time
			std::cout << color << text << time << " seconds." << std::endl;
			i = 0;
			time--;
		}	
	}
	// resetting the ansi color code to regular
	std::cout << "\033[0m";
}

// execution starts from here
int main(int argc, char** argv){
	// looping for ten times
	for(int i = 0; i < 10; i++){
		// simulating all the three lights in order of red -> yellow -> green
		lightSimulator("RED LIGHT. Wait for ", "\033[31m", 40);
		lightSimulator("YELLOW LIGHT. Wait for ", "\033[33m", 5);
		lightSimulator("GREEN LIGHT. Start moving within ", "\033[32m", 40);	
	}
	
	// ending message
	std::cout << "The program has terminated.....\n";
	return 0;
}
