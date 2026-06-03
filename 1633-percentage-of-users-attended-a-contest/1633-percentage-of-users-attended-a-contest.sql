# Write your MySQL query statement below


select contest_id, ROUND((count(contest_id)*100)/(SELECT COUNT(*) FROM Users),2)  as percentage
from Users u, Register r
where u.user_id=r.user_id
group by r.contest_id
order by percentage DESC, r.contest_id