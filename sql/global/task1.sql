-- Designing a Table in First Normal Form (1NF)
-- Write a SQL query to normalize a table into First Normal Form (1NF).

CREATE TABLE order_1nf (
	ORDER_ID INT,
	CUSTOMER_NAME VARCHAR(100),
	PRODUCT_NAME VARCHAR(100),
);