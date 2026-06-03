# Write your MySQL query statement below
select project_id, ROUND(AVG(e.experience_years), 2) as average_years
from Project p,Employee e
where p.employee_id=e.employee_id
GROUP BY p.project_id