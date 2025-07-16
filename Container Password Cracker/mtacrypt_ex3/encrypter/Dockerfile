FROM ubuntu:latest
RUN apt update && apt install -y gcc make
WORKDIR /app
COPY . .
RUN gcc -o encrypter encrypter.c ../common/util.c
ENTRYPOINT ["/app/entrypoint.sh"]
