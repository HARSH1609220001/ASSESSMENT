create database tops;
use tops;

select * from city;
select * from customer;
select * from country;

-- Task :1 (join multiple tables using left join)

SELECT country.country_name_eng, city.city_name, customer.customer_name
FROM country
LEFT JOIN city ON city.country_id = country.id
LEFT JOIN customer ON customer.city_id = city.id;

-- Task :2 (join multiple tables using both left and inner join)

SELECT country.country_name_eng, city.city_name, customer.customer_name
FROM country
INNER JOIN city ON city.country_id = country.id
LEFT JOIN customer ON customer.city_id = city.id;