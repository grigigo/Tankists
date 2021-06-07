cd Server
docker run -it -p 5432:5432 -p 33333:33333 -e POSTGRES_PASSWORD=676767 -e POSTGRES_USER=postgres -e POSTGRES_HOST_AUTH_METOD=trust server_gri:1