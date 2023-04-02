/*
Enter your query here.
Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
*/
SELECT CASE WHEN A=B AND A=C AND B=C THEN 'Equilateral' WHEN (A>= B+C) OR (B>=A+C) OR (C>=A+B) THEN 'Not A Triangle' WHEN A!=B AND A!=C AND C!=B THEN 'Scalene' ELSE 'Isosceles' END AS triangle_type FROM Triangles;
