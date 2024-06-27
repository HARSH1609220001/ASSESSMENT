use tops;

create table city(
-- col_name datatype constraints
id int primary key auto_increment,
city_name text not null,
lat float,
city_long float,
country_id int
);

select * from city;

insert into city values
(1,"Berlin","52.520008","13.404954",1),
(2,"Belgrade","44.787197","20.457273",2),
(3,"Zagreb","45.815399","15.966568",3),
(4,"New York","40.730610","-73.935242",4),
(5,"Los Angeles","34.052235","-118.243683",4),
(6,"Warsaw","52.237039","21.017532",5);

select * from city;
