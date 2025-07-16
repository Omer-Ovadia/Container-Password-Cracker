FROM ubuntu:latest

RUN apt update && apt install -y gcc make

WORKDIR /app
COPY . .

RUN gcc -o encrypter_bin encrypter/encrypter.c common/util.c
RUN gcc -o decrypter_bin decrypter/decrypter.c common/util.c

CMD ["/bin/bash"]

