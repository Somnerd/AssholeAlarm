#include <iostream>
#include <chrono>
#include <unistd.h>

//template <class CharT, class Traits, class Duration>

long fibonacci(unsigned n){
    if (n < 2){
      return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
  int num;

  std::cout << "Fibonacci number :";
  std::cin >> num;
  std::cout << "Processing ..." << '\n';
  auto start = std::chrono::steady_clock::now();
  std::cout << "f(42) = " << fibonacci(42)  << '\n';
  auto end = std::chrono::steady_clock::now();
  std::chrono::duration<double>elapsed_seconds = end-start;
  std::cout << "elapsed time :" << elapsed_seconds.count()<<"s\n";

  time_t rawtime, given_time;
  struct tm* timeinfo;
  std::cout << "Wake up time (HH:MM:SS):" << '\n';
  while(true){
    system("clear");
    time(&rawtime);
    time(&given_time);
    timeinfo=localtime(&rawtime);
    std::cout<<"Time : "<<asctime(timeinfo);
    //std::cout<<"Time : "<<asctime(given_time);
    system("sleep 1");
    if (rawtime = given_time){
    }
  }
}
