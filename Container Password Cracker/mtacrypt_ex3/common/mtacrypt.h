#ifndef MTACRYPT_H
#define MTACRYPT_H

#define MAX_PASSWORD_LENGTH 64
#define PIPE_DIR "/mnt/mta"
#define ENCRYPTER_PIPE "/mnt/mta/server_pipe"
#define CONFIG_FILE "/mnt/mta/mtacrypt.conf"
#define LOG_FILE "/var/log/mtacrypt.log"

void generate_password(char *buf, int len); // ממטלה 2, אל תשנה!
void log_message(const char *fmt, ...);

#endif
