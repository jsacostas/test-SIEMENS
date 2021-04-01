/* First Step: Create the data base */
CREATE DATABASE SIEMENS;

/* Second Step: Create the tables*/
USE SIEMENS;

CREATE TABLE Students (
  ID INT,
  Name VARCHAR(30),
  Value INT,
);

CREATE TABLE Notes (
  Grade INT,
  Min_Value INT,
  Max_value INT
);

/* Third Step: Add the data to the tables*/

INSERT INTO Students 
    (ID, Name, Value) 
VALUES 
    (1,'Julia',81),
	(2,'Carol',68),
	(3,'Maria',99),
	(4,'Andreia',78),
	(5,'Jaqueline',63),
	(6,'Marcela',88);

INSERT INTO Notes 
    (Grade, Min_Value, Max_value) 
VALUES 
    (1,0,9),
	(2,10,19),
	(3,20,29),
	(4,30,39),
	(5,40,49),
	(6,50,59),
	(7,60,69),
	(8,70,79),
	(9,80,89),
	(10,90,100);

/* Fourth Step: Solve the problem*/

SELECT CASE WHEN (Students.Value < 70) THEN 'NULL' ELSE Students.Name END as "Name",
        Notes.Grade, STUDENTS.Value
FROM Students, Notes
WHERE Students.Value BETWEEN Notes.Min_value AND Notes.Max_value
ORDER BY Notes.Grade DESC, Students.Value ASC;