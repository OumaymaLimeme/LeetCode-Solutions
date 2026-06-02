# Write your MySQL query statement below
select e.name 
from Employee e
where
 (
    SELECT COUNT(*)
    FROM Employee m
    WHERE m.managerId = e.id
) >= 5;