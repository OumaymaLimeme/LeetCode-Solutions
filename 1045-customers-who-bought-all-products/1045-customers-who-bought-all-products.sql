# Write your MySQL query statement below

with t as (
    select customer_id, count(DISTINCT product_key) as s 
    from Customer
    group by customer_id
),
y as ( SELECT count(product_key) as summ
    from Product 
)

select customer_id
from t , y
where t.s = y.summ


