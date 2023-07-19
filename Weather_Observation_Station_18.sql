/*
Enter your query here.
*/
SELECT ROUND(abs(min(lat_N)-max(lat_N))+abs(min(long_W)-max(long_W)),4) FROM station;
