FROM ubuntu:latest
RUN apt update && apt install -y gcc make
WORKDIR /app
COPY . .
RUN gcc -o encrypter encrypter/encrypter.c common/util.c
RUN gcc -o decrypter decrypter/decrypter.c common/util.c

