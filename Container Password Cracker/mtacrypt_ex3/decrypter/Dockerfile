FROM ubuntu:latest
RUN apt update && apt install -y gcc make
WORKDIR /app
COPY . .
RUN gcc -o decrypter decrypter.c ../common/util.c
ENTRYPOINT ["/app/entrypoint.sh"]
