#pragma once
#include <string>

class Conta {
private:
	static int numeroContas;

public:
	static int mostraNumeroConta();

private:
	std::string numero;
	std::string cpf;
	std::string nome;
	float saldo = 0;

public:
	Conta(std::string numero, std::string cpf, std::string nome);
	~Conta();
	std::string mostraNumero() const;
	std::string mostraCpf() const;
	std::string mostraNome() const;
	float mostraSaldo() const;
	void sacar(float valoASacar);
	void depositar(float valoADepositar);

private:
	void verificaNome();
};
