-- 1st program table that is generated .

CREATE TABLE Students(

      ID INT NOT NULL,             -- identification integer datatype

      Name VARCHAR (30) NOT NULL,   -- Name with variable character / string datatype
      
      Age INT not NULL,    -- age with integer datatype.

      Email VARCHAR NOT NULL,  --  Email with string datatype.

      Grades CHAR NOT NULL  -- Grades with simple character datatype

      PRIMARY KEY(ID)    -- Non - repeating / Unique typo in a row set to first data type.
);