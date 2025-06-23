--  Write a SQL statement to create a duplicate copy of countries table, including structure and data by name dup_countries.

CREATE TABLE dup_countries AS 
select * from countries;
