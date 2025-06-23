-- 2. Write a sql statement to create the structure of a table dup_countries similar to countries.

CREATE TABLE dup_countries AS 
(
    SELECT *
    FROM countries
)  
WITH NO DATA; 

