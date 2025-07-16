# MtaCrypt Exercise 3

## Build and Run
1. sudo docker rm -f $(sudo docker ps -aq)
2. sudo docker rmi -f $(sudo docker images -q)
3. sudo rm -rf /tmp/mtacrypt/*
4. sudo rm -rf /tmp/mtacrypt_logs/*
5. cd /home/omer/mtacrypt_ex3 (your path)
6. sudo mkdir -p /tmp/mtacrypt
7. sudo mkdir -p /tmp/mtacrypt_logs
8. sudo cp mtacrypt.conf /tmp/mtacrypt/
9. sudo docker build -t mtacrypt_all .
10. sudo docker run --rm -it -v /tmp/mtacrypt:/mnt/mta -v /tmp/mtacrypt_logs:/var/log mtacrypt_all /app/encrypter_bin (in Other Terminal in your path gabi)
11. sudo docker run --rm -it -v /tmp/mtacrypt:/mnt/mta -v /tmp/mtacrypt_logs:/var/log mtacrypt_all /app/decrypter_bin (open in Other Terminal in your path gabi)
12. sudo tail -f /tmp/mtacrypt_logs/mtacrypt.log (if you want to see the logs -  open in Other Terminal in your path gabi)
13. enjoy gabi :)

