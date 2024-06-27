use tops;

create table customer(
-- col_name datatype constraints
id int primary key auto_increment,
customer_name text ,
city_id int,
customer_address text ,
next_call_date date,
ts_inserted varchar(50)
);

select * from customer;

insert into customer values
(1,"Jewelry Store",4,"Long Street 120","2020-01-21","2020-01-09 14:01:20.000"),
(2,"Bakery",1,"Kurfurstendamm 25","2020-02-21","2020-01-09 17:52:15.000"),
(3,"Cafe",1,"Tauentzienstrabe 44","2020-01-21","2020-01-10 08:02:49.000"),
(4,"Resturant",3,"Ulica lipa 15","2020-01-21","2020-01-10 09:20:21.000");

select * from customer;