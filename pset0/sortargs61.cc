#include <iostream>
#include <cstring>


// Sorting using strcmp implementation.
void insertionSort(char* arr[], int n) {
	for(int i = 1; i < n; ++i) {
		char* key = arr[i];
		int j = i - 1;
		while(j>=0 && strcmp(arr[j],key) > 0) {
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
}

int main(int argc, char* argv[]) {
	if(argc > 1){
		insertionSort(argv+1,argc-1);
		for(int i = 1; i < argc; ++i) {
			std::cout << argv[i] << std::endl;
		}
	}
	return 0;
}


