 create database aula_5;
 USE aula_5;

-- Criação da tabela Veículo
create table veiculo (
chassi char(17) primary key,
marca varchar(20) not null,
ano int not null
);

-- Criação da tabela cliente
create table cliente (
codigo int primary key,
cpf char(11) not null unique,
nome varchar(60),
sexo char(1),
cidade varchar(20) default 'João Pessoa',
check (sexo in ('M', 'F'))
);

-- Criação da tabela locação 
create table locacao (
id int,
data_loc date,
valor decimal(8,2),
chassi_vei char(17), 
codigo int,
primary key (id), 
foreign key(chassi_vei) references veiculo(chassi),
foreign key(codigo) references cliente(codigo)
);