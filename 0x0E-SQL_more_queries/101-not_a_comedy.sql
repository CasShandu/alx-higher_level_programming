--script that lists all shows without the genre Comedy in the database hbtn_0d_tvshows. 
-- The tv_genres table contains only one record where name = Comedy (but the id can be different)
-- Each record should display: tv_shows.title
-- Results must be sorted in ascending order by the show title
-- You can use a maximum of two SELECT statement
-- The database name will be passed as an argument of the mysql command

SELECT title
FROM tv_shows
-- grab the shows that are not based on comedy
WHERE title NOT IN (
    SELECT ts.title
    FROM tv_shows ts
    LEFT JOIN tv_show_genres tsg
		ON ts.id = tsg.show_id
    LEFT JOIN tv_genres tg
		ON tsg.genre_id = tg.id
    WHERE tg.name = "Comedy"
)
GROUP BY title
ORDER BY title;
