CREATE database qtccps;

\c qtccps

CREATE TABLE users(
    id_user serial PRIMARY KEY,
    login text,
    password text,	
    socket text,
    days_left integer default 28,
    last_holiday_end text
);

INSERT INTO users(login, password) VALUES('admin', 'admin');

CREATE TABLE chats(
    id_chats serial PRIMARY KEY,
    chat_name text,
    file_name text
);

CREATE TABLE users_chats(
    id_user integer references users(id_user),
    id_chat integer references chats(id_chats)
);