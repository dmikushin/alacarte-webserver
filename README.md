Memory cards rendering system for Thai language learning: the webserver.

## Prerequisites

```
sudo apt install git g++ cmake libmicrohttpd-dev certbot
```

## Buidling

Create SSL certificates:

```
cd kartuli-webserver
mkdir ssl
cd ssl
sudo certbot certonly -d $(hostname) --standalone --agree-tos -m dmitry@kernelgen.org
sudo cp /etc/letsencrypt/live/kartuli/privkey.pem id_rsa.kartuli
sudo cp /etc/letsencrypt/live/kartuli/fullchain.pem id_rsa.kartuli.crt
cd ..
```

Build the server:

```
mkdir build
cd build
cmake ..
make -j12
```

## Deployment

Deploy the server eiter on an arbitrary non-default port for development, or on port 443 to have SSL support and redirection from HTTP to HTTPS:

```
sudo ./kartuli-webserver 443
```

