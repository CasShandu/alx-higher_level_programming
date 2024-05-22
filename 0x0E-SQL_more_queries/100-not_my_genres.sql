-- script that uses the hbtn_0d_tvshows database to list all genres not linked to the show Dexter
-- The tv_shows table contains only one record where title = Dexter (but the id can be different)
-- Each record should display: tv_genres.name
-- Results must be sorted in ascending order by the genre name
-- You can use a maximum of two SELECT statement
-- The database name will be passed as an argument of the mysql command

SELECT tg.name 
FROM tv_genres tg
WHERE tg.name NOT IN (
    SELECT name 
    FROM tv_genres tg
    LEFT JOIN tv_show_genres tsg
		ON tg.id = tsg.genre_id
    LEFT JOIN tv_shows ts
		ON tsg.show_id = ts.id
    WHERE ts.title = 'Dexter'
)
GROUP BY tg.name
ORDER BY tg.name;
