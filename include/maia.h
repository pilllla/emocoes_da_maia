#ifndef MAIA_H_FILE
#define MAIA_H_FILE

#include <iostream>
#include <vector>

class emocao_invalida_e
{
};

enum Emocao
{
    feliz,
    triste,
    brava,
    fome
};

class Maia
{
private:
    std::string _nome;
    std::vector<Emocao> _emocao;

public:
    Maia();
    Maia(std::string, int);
    //~Maia();
    std::string get_nome();
    Emocao get_emocao();
    void nova_emocao(int);
    std::string converte_emocao_para_string(Emocao);
    void qual_emocao();
};

#endif