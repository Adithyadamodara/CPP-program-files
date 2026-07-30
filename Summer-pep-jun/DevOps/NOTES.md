# Linux Commands

chmod - change perms

chown - change owner

ps aux - show snapshot of running processes (not live)

top - show live running process feed

grep - pattern search

chmod +x file.exe = to add execute perms to a file on pwd

bash scripting:
 -gt -> greater than
 -eq -> equal to
 -lt -> lower than
 -ge -> greater than or equal to
 -le -> lesser than or equal to

 -d foldername -> tells if a folder exists or not
 -f filename -> tells if a file exists or not

 cronjob 

 * * * * *  - every minute
 0 * * * * - every hour
 0 0 * * * - every day at 12AM
 0 0 * * FRI - every Friday at 12AM

 crontab -e -> to open cron file and add config 


AWS: 
to set "chmod 400 file.pem" on windows cmd:

1. icacls file.pem /reset

GEt username using - whoami 
2. icacls file.pem /grant:r "%username%:(R)" 

eg: icacls file.pem /grant:r "desktop-g1nnh6f\hp:(R)"

3. icacls file.pem /inheritance:r

to ssh:
ssh -i "file.pem" ubuntu@public-ip.compute-1.amazonaws.com

username - ubunutu
