# include <iostream>
# include <algorithm>
# include <vector>


// prints the vector
// vec -> the vector itself
// sep -> the seperator between two vector members
template <typename T> inline void printVector(std::vector<T> &vec, std::string sep = " "){
	// looping through the vector and printing member by member
	for(auto i = vec.begin(); i != vec.end(); i++){
		std::cout << *i << sep;	
	}	
}

// execution starts from here
int main(int argc, char** argv){
	// the list of strings with default arguments and the filtered list
	std::vector<std::string> list = {"chungus", "pea", "yellow", "pop", "pickup", "quotes", "three", "five"}, filtered; 
	
	// printing the default list
	std::cout << "List before filtering:\n";
	printVector(list);
	
	std::cout << "\nList after filtering:\n";
	// copying over the default list to the filtered list if the element size is greater than 5
	std::copy_if(list.begin(), list.end(), std::back_inserter(filtered), [](std::string s){return (int)s.size() > 5;});
	// printing the filtered vector
	printVector(filtered);
	
	return 0;
}
