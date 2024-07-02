# c++ conn db
1. pada terminal silahkan ketikan : apt-get install libmysqlclient-dev
2. kita harus mengcompile code kita : g++ -o crud_simple crud.cc -lmysqlclient
3. running hasil compile nya : ./crud_simple

# tools db
navicat

https://shared.djncloud.my.id/tools_tempur

# perintah sederhana docker
1. masuk ke dalam suatu file yang terdapat docker-compose.yml
2. selanjutnya jika ingin membuild atau up si container tersebut silahkan ketikan 
```
docker compose up -d --build 
```

3. setelah itu silahkan cek container nya apakah sudah running apa belum, dengan lakukan perintah
```
docker ps 
```

4. setelah itu jika container nya sudah nyala dan ingin dibuat down silahkan ketikan 
```
docker compose down
```
