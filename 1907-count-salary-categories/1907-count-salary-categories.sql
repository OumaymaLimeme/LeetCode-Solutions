# Write your MySQL query statement below

WITH t as (
    select account_id, income,
    case 
    when income < 20000 then "Low Salary"
    when income>= income and   income<=50000  then "Average Salary"
    else "High Salary"
   END as category
   FROM Accounts
),
categories AS (
    SELECT 'Low Salary' AS category
    UNION ALL
    SELECT 'Average Salary'
    UNION ALL
    SELECT 'High Salary'
)

select c.category, count(account_id) as accounts_count
from categories c
LEFT JOIN  t
on c.category=t.category
group by category