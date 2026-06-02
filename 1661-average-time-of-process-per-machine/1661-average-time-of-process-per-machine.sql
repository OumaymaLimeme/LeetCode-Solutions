# Write your MySQL query statement below


select s.machine_id, ROUND(AVG(e.timestamp-s.timestamp),3) as processing_time
FROM Activity s
JOIN Activity e
    ON s.machine_id = e.machine_id
    AND s.process_id = e.process_id
WHERE s.activity_type = 'start'
  AND e.activity_type = 'end'
Group By s.machine_id 