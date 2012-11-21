#include <iostream>
#include "graph.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        Graph* g = new Graph(argv[1]);
        g->display();
    }
    else
    {
        std::cout << "Erreur manque des fichiers" << std::endl;
        return 1;
    }
    return 0;
    
}