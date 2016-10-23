# Base image
FROM python:2.7-slim

# Challenge author
MAINTAINER kishorbhat@gmail.com

# Make sure everything's up-to-date
RUN apt-get update \

# Install dependencies
&&  apt-get install -y gcc  build-essential  --no-install-recommends  \
&&  pip install pycrypto \

# Cleanup
&& apt-get purge -y --auto-remove gcc build-essential \
&& rm -rf /var/lib/apt/lists/*

# Create the challenge directory
RUN mkdir /home/challenge

# Move the challenge file into the container
COPY service.py /home/challenge/service.py

# Expose the required port
EXPOSE 5968

# Serve
CMD ["python", "/home/challenge/service.py"]

# docker build . -t counterattack
# docker run -p 5968:5968 counterattack
