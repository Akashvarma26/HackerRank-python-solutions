/*
Enter your query here.
*/
SELECT MAX(salary*months), COUNT(*) FROM Employee WHERE salary*months=(select max(salary*months) FROM Employee)
