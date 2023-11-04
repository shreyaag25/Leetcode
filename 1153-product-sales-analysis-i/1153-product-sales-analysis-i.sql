# Write your MySQL query statement below
SELECT product_name, year, price FROM Sales natural join Product 
where sales.product_id = product.product_id;