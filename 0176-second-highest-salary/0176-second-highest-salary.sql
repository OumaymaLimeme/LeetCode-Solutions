select 
case
 when count(DISTINCT salary) < 2 then  NULL 
else (select DISTINCT salary  from Employee 
ORDER BY salary DESC
LIMIT 1 OFFSET 1)
END as SecondHighestSalary
from Employee 
