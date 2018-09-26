// Implementation of Wu Manber's Multi-Pattern Search Algorithm
// Implemented by Ray Burkholder, ray@oneunified.net
// Copyright (2008) One Unified
// For use without restriction but one:  this copyright notice must be preserved.

#include "StdAfx.h"

#include "WuManber.h"

int _tmain(int argc, _TCHAR* argv[]) {

  char target[] = { "This is some text I made up.  This will be testing\n" 
    "multi-pattern matching from Wu/Manber's paper called\n"
    "'A Fast Algorithm for Multi-Pattern Searching'. Manber is\n"
    "currently at Google." };

  vector<const char*> patterns;
  patterns.push_back( "this is" );
  patterns.push_back( "pattern" );
  patterns.push_back( "google!" );
  patterns.push_back( "anber" );

  WuManber search;
  search.Initialize( patterns );
  search.Search( strlen( target ), target, patterns );


}

