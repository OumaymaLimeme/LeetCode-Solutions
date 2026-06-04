WITH t AS (
    SELECT
        person_name,
        turn,
        SUM(weight) OVER (ORDER BY turn) AS runningtotal
    FROM Queue
)

SELECT person_name
FROM t
WHERE runningtotal <= 1000
ORDER BY turn DESC
LIMIT 1;