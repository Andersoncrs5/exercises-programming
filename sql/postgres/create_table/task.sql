-- 1. Write a SQL statement to create a simple table countries, including columns country_id, country_name and region_id.


CREATE TABLE countries (
	COUNTRY_ID SERIAL,
	COUNTRY_NAME VARCHAR(150),
	REGION_ID INTEGER
);