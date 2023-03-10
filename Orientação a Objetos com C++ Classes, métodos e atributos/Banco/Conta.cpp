#include <iostream>
#include "Conta.hpp"

int Conta::numeroContas = 0;

int Conta::mostraNumeroConta() {
	return numeroContas;
}

Conta::Conta(std::string numero, std::string cpf, std::string nome) :
	numero(numero), cpf(cpf), nome(nome), saldo(0)
{
	verificaNome();
	numeroContas++;
}

Conta::~Conta() {
	numeroContas--;
}

std::string Conta::mostraNumero() const {
	return numero;
}

std::string Conta::mostraCpf() const {
	return cpf;
}

std::string Conta::mostraNome() const {
	return nome;
}

float Conta::mostraSaldo() const {
	return saldo;
}

void Conta::sacar(float valoASacar) {
	if (valoASacar < 0) {
		std::cout << "Nao pode sacar valor negativo!" << std::endl;
		return;
	}
	if (valoASacar > saldo) {
		std::cout << "Saldo insuficiente!" << std::endl;
		return;
	}
	saldo -= valoASacar;
}

void Conta::depositar(float valoADepositar) {
	if (valoADepositar < 0) {
		std::cout << "Nao pode sacar valor negativo!" << std::endl;
		return;
	}
	saldo += valoADepositar;
}

void Conta::verificaNome() {
	if (nome.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}