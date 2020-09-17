
#include <string.h>
#include <iostream>

#include "WuManber.h"

using namespace std;

int main(int argc, char *argv[]) {

	char target[] = { "This is some text I made up.  This will be testing\n" 
		"multi-pattern matching from Wu/Manber's paper called\n"
			"'A Fast Algorithm for Multi-Pattern Searching'. Manber is\n"
			"currently at Google." };

	vector<const char*> patterns;
	patterns.push_back( "this is" );
	patterns.push_back( "pattern" );
	patterns.push_back( "google!" );
	patterns.push_back( "anber" );

	vector<const char*> result;
	WuManber search;

	search.Initialize( patterns );
	search.Search( strlen( target ), target, patterns , result);

	for(auto & r:result) {
		cout << "r:" << r << endl;
	}

	return 0;
}

