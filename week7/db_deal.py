import sqlite3 # postgre 

conn = sqlite3.connect("movies/movies.db") # или :memory: чтобы сохранить в RAM
cursor = conn.cursor()


cursor.execute("""select * from movies join directors on movies.id = directors.movie_id
                 join people on directors.person_id = people.id where movies.id = 15724;
               """)

print(cursor)
for item in cursor.fetchall():
    i = [str(j) for j in item] # list comp
    print("| ".join(i))

conn.close()