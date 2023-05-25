#include "../include/maia.h"

Maia::Maia()
{
}

Maia::Maia(std::string nome, int emocao)
{
    _nome = nome;
    _emocao.push_back((Emocao)emocao);
}

/*
Maia::~Maia(){
    for (auto it = _emocao.begin(); it < _emocao.end(); it++){

    }
}
*/

std::string Maia::get_nome()
{
    return _nome;
}

Emocao Maia::get_emocao()
{
    return _emocao.back();
}

void Maia::nova_emocao(int nova_emocao)
{
    _emocao.push_back((Emocao)nova_emocao);
}

std::string Maia::converte_emocao_para_string(Emocao emocao_convertida)
{
    switch (emocao_convertida)
    {
    case (feliz):
        return ("feliz");
        break;
    case (triste):
        return ("triste");
        break;
    case (brava):
        return ("triste");
        break;
    case (fome):
        return ("com fome");
        break;
    }
}

void Maia::qual_emocao()
{
    std::string emocao_aqui_e_agora = converte_emocao_para_string(_emocao.back());
    std::cout << "a maia de nome " << _nome << " "
              << "está " << emocao_aqui_e_agora << std::endl;
}