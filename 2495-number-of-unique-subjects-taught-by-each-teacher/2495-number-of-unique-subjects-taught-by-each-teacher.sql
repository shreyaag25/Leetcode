# Write your MySQL query statement below
SELECT teacher_id , count(distinct (subject_id)) as cnt from teacher
group by teacher_id;