# include <iostream>
# include <vector>
# include <algorithm>


// function to reduce syntax for input
inline std::string input(std::string msg){
	std::string inp; // to store the input
	
	// asking user for the input
	std::cout << msg;
	std::cin >> inp;
	
	// returning the input
	return inp;
}

// prints the vector
template <typename T> inline void printVector(std::vector<T> &vec, std::string sep = " "){
	// looping through the vector and printing member by member
	for(auto i = vec.begin(); i != vec.end(); i++){
		std::cout << *i << sep;	
	}	
}

// execution starts from here
int main(int argc, char** argv){
	std::vector<std::string> list; // the list of the strings
	int count = std::stoi(input("Enter the total count of strings: ")); // the total number of strings
	
	// looping from 1 to count
	for(int i = 1; i <= count; i++){
		// asking user for a string and then appending it to the list
		std::string inp = input("Enter string no." + std::to_string(i) + ": ");
		list.push_back(inp);	
	}
	
	// sorting the vector of strings and then printing the vector
	std::cout << "\nThe strings after sorting:\n";
  // lambda compares which string is smaller in case of length
	std::sort(list.begin(), list.end(), [](std::string s1, std::string s2){return s1.size() < s2.size();});
	printVector(list);
	return 0;
}
