CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
 DECLARE M INT;
  SET M = N - 1;
  RETURN (
      select 
        case 
          when count(distinct salary)  < N
          then NULL
          else 
           ( select distinct salary from Employee 
            order by salary DESC 
            LIMIT 1 OFFSET M
         )
          END  
        
        from Employee    
  );
END