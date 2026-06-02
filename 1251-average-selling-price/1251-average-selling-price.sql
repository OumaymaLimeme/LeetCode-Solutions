# Write your MySQL query statement below


with t as (select p.product_id, start_date, end_date purchase_date, price,units
from Prices p
LEFT join UnitsSold u 
on p.product_id = u.product_id
and  purchase_date between  start_date and end_date
 )

select product_id ,
case 
WHEN SUM(units) > 0
then ROUND(sum(units*price)/sum(units),2) 
else 0 
END as average_price
from t 
GROUP by product_id