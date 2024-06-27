use tops;

create table country(
-- col_name datatype constraints
id int primary key auto_increment,
country_name text,
country_name_eng text,
country_code text
);

select * from country;

insert into country values
(1,"Deutschland","Germany","DEU"),
(2,"Srbija","Serbia","SRB"),
(3,"Hrvatska","Croatia","HRV"),
(4,"United Status Of America","United Status Of America","USA"),
(5,"Polska","Poland","POL"),
(6,"Espana","Spain","ESP"),
(7,"Rossiya","Rossia","RUS");

select * from country;