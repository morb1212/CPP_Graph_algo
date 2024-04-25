#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP
#include "Graph.hpp"
#include <vector>
#include <iostream>
#include <string>


using namespace std;
namespace ariel{
    class Algorithms
    {
        public:
        static int isConnected(const Graph& gr);
        static string shortestPath(const Graph& gr,size_t start, size_t end);
        static int isContainsCycle(const Graph& gr);
        static string isBipartite(const Graph& gr);
        static int negativeCycle(const Graph& gr);
    };
    
}
#endif