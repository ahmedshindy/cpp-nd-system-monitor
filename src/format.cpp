#include <string>
#include <iostream>

#include "format.h"

#include <stdio.h>
#include <iomanip>
#include <sstream>
#include <string>
using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// Converts seconds into HH::MM::SS format
std::string Format::ElapsedTime(long seconds) {
  int hour, min, sec;
  std::string uptime_;
  // stringstream object
    std::stringstream stream_obj;

  hour = seconds / 3600;
  min = (seconds % 3600) / 60;
  sec = (seconds % 3600) % 60;
  stream_obj << hour<<":"<<min<<":"<<sec;

    stream_obj >>uptime_;
    stream_obj.close();
  return uptime_;
  // return to_string(hour) + ":" +  to_string(min);
  //return FillSpaces(hour) + FillSpaces(min) + FillSpaces(sec, false);
}

// Helper function to fill empty spaces with 0s
// std::string Format::FillSpaces(int value, bool addSemicolon) {
//   std::ostringstream stream;
//   stream << std::setw(2) << std::setfill('0') << std::to_string(value)
//          << (addSemicolon ? ':' : ' ');
//   return stream.str();
// }