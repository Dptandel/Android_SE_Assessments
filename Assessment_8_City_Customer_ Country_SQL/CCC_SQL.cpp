// City, Customer. Country Tables SQL TASK

// Create the `country` table
CREATE TABLE country (
    id INT PRIMARY KEY,
    country_name VARCHAR(255),
    country_name_eng VARCHAR(255),
    country_code VARCHAR(10)
);

// Insert data into the `country` table
INSERT INTO country (id, country_name, country_name_eng, country_code)
VALUES
    (1, 'Deutschland', 'Germany', 'DEU'),
    (2, 'Srbija', 'Serbia', 'SRB'),
    (3, 'Hrvatska', 'Croatia', 'HRV'),
    (4, 'United States of America', 'United States of America', 'USA'),
    (5, 'Polska', 'Poland', 'POL'),
    (6, 'España', 'Spain', 'ESP'),
    (7, 'Rossiya', 'Russia', 'RUS');

// Create the `city` table
CREATE TABLE city (
    id INT PRIMARY KEY,
    city_name VARCHAR(255),
    lat FLOAT,
    long FLOAT,
    country_id INT,
    FOREIGN KEY (country_id) REFERENCES country(id)
);

// Insert data into the `city` table
INSERT INTO city (id, city_name, lat, long, country_id)
VALUES
    (1, 'Berlin', 52.520008, 13.404954, 1),
    (2, 'Belgrade', 44.787197, 20.457273, 2),
    (3, 'Zagreb', 45.815399, 15.966568, 3),
    (4, 'New York', 40.730610, -73.935242, 4),
    (5, 'Los Angeles', 34.052235, -118.243683, 4),
    (6, 'Warsaw', 52.237049, 21.017532, 5);

// Create the `customer` table
CREATE TABLE customer (
    id INT PRIMARY KEY,
    customer_name VARCHAR(255),
    city_id INT,
    customer_address VARCHAR(255),
    next_call_date DATE,
    ts_inserted DATETIME,
    FOREIGN KEY (city_id) REFERENCES city(id)
);

// Insert data into the `customer` table
INSERT INTO customer (id, customer_name, city_id, customer_address, next_call_date, ts_inserted)
VALUES
    (1, 'Jewelry Store', 1, 'Long Street 120', '2020-01-21', '2020-01-09 14:01:20'),
    (2, 'Bakery', 1, 'Kurfurstendamm 25', '2020-02-21', '2020-01-09 17:52:15'),
    (3, 'Café', 1, 'Tauentzienstraße 44', '2020-01-21', '2020-01-10 08:02:49'),
    (4, 'Restaurant', 3, 'Ulica lipa 15', '2020-01-21', '2020-01-10 09:20:21');

// Task 1: List all countries and customers related to these countries

SELECT 
    country.country_name_eng AS country_name,
    city.city_name AS customer_city,
    customer.customer_name AS customer_name
FROM 
    country
LEFT JOIN 
    city ON country.id = city.country_id
LEFT JOIN 
    customer ON city.id = customer.city_id;

// Task 2: List countries with cities and customers (only for referenced cities)

SELECT 
    country.country_name_eng AS country_name,
    city.city_name AS city_name,
    customer.customer_name AS customer_name
FROM 
    country
INNER JOIN 
    city ON country.id = city.country_id
LEFT JOIN 
    customer ON city.id = customer.city_id;