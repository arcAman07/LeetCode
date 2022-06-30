# Write your MySQL query statement below
select t.Id from Weather as t, Weather as y
where Datediff (t.RecordDate, y.RecordDate) =1 
    and t.Temperature > y.Temperature