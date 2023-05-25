#include <iostream>
#include <vector>
#include "../include/maia.h"

int main()
{
    std::vector<Maia> turma_das_maias;
    int e = 1;
    std::string n;

    while (n != ("SAIR"))
    {
        std::cout << "digite um nome pra maia e uma emocao (1-4), digite SAIR para encerrar" << std::endl;
        std::cin >> n >> e;
        turma_das_maias.push_back(Maia(n, e));
    }

    turma_das_maias.at(1).qual_emocao();
    return 0;
}