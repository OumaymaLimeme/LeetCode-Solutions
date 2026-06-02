# Write your MySQL query statement below

SELECT w.id
FROM Weather w
JOIN Weather ww
    ON DATEDIFF(w.recordDate, ww.recordDate) = 1
WHERE w.temperature > ww.temperature;