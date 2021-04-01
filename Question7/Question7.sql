/* First Step: Create the data base */
CREATE DATABASE SIEMENS;

/* Second Step: Create the tables*/
USE SIEMENS;

CREATE TABLE dogs (
  id INT NOT NULL PRIMARY KEY,
  name VARCHAR(50) NOT NULL,
);

CREATE TABLE cats (
  id INT NOT NULL PRIMARY KEY,
  name VARCHAR(50) NOT NULL,
);

/* Third Step: Add the data to the tables*/

INSERT INTO dogs 
    (id,name) 
VALUES 
	(1,'snowBall'),
	(2,'rocky'),
	(3,'hashico'),
	(4,'Firulais'),
	(5,'snowBall'),
	(6,'perro'),
	(7,'aquiles'),
	(8,'boni'),
	(9,'milu');

INSERT INTO cats 
    (id,name) 
VALUES 
	(1,'domenico'),
	(2,'bexiga'),
	(3,'boni'),
	(4,'kuroneko'),
	(5,'milu'),
	(6,'kity');

/* Fourth Step: Solve the problem*/

select cats.name from cats
UNION
select dogs.name from dogs