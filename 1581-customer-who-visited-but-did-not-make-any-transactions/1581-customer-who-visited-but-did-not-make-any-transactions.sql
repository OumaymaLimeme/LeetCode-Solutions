# Write your MySQL query statement below
select customer_id, count(visit_id) as  count_no_trans
from Visits v 
WHERE visit_id NOT IN (
    SELECT visit_id
    FROM Transactions
)
GROUP BY customer_id;