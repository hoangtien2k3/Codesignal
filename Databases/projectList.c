

//

/*Please add ; after each select statement*/
CREATE PROCEDURE solution()
BEGIN
	SELECT project_name, team_lead, income
    FROM Projects
    ORDER BY internal_id asc;
END