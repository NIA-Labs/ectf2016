# Base image
FROM python:2.7-slim

# Challenge author
MAINTAINER chinmay1dd@gmail.com

# Make sure everything's up-to-date
RUN apt-get update \

# Install dependencies
&&  apt-get install -y gcc  build-essential  --no-install-recommends  \

# Cleanup
&& apt-get purge -y --auto-remove gcc build-essential \
&& rm -rf /var/lib/apt/lists/*

# Create the challenge directory
RUN mkdir -p /home/challenge

# Move the challenge file into the container
COPY service.py /home/challenge/service.py

# Expose the required port
EXPOSE 7777

# Serve
CMD ["python", "/home/challenge/service.py"]

# docker build . -t defushal
# docker run -p 7777:7777 defushal
