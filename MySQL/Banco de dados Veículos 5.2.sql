create database aula5_2;
use aula5_2;

create table cliente (
cpf char(11) not null,
nome varchar(45),
nascimento date,
primary key(cpf)
);

create table veic (
cod int auto_increment,
placa char(7),
valor decimal(8,2),
cpf char(11),
primary key(cod),
foreign key(cpf) references cliente(cpf) on delete restrict
);

insert into cliente(cpf, nome, nascimento) values ('123', 'ana', '1994-08-23');
select * from cliente;

insert into cliente values ('341', 'pedro', '1989-09-15');

insert into cliente values ('333', 'maria', '2002-02-21'),
('218', 'sofia', '1991-12-15');

insert into cliente(nascimento,cpf) values ('1972-11-21', 431);

insert into veic values (1,'tvc12',121221.01,'123');

insert into veic(cpf) values ('333');

insert into veic(placa,valor) values('ttt01', 99821.02);

insert into veic values (40,'opa11','21831.04','123');

-- Atualização e deleção de dados nas tabelas

update cliente set nome='abdias' where cpf='431';
select * from cliente;

update veic set placa='vlr33' where cod=2;
select * from veic;

delete from veic where cod=3;
select * from veic;
delete from veic where cod=2;

delete from cliente where cpf='333';
select * from cliente;
delete from cliente where cpf='123'; -- Não pode ser apagado, chave estrangeira / Linha 17

-- Utilizar ALTER ou DROP

alter table cliente add column endereco varchar(40) not null;
alter table cliente modify nome varchar(100);
select * from cliente;
alter table cliente change nascimento nasc date;
rename table veic to veiculo;

/* drop table cliente;
drop table veiculo;  
drop database aula5_2; 
Drop apaga todas as colunas selecionadas, sem possibilidade de restauração 
*/