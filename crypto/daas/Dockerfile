# Base image
FROM python:2.7-slim

# Challenge author
MAINTAINER eeshwarg13@gmail.com

# Make sure everything's up-to-date
RUN apt-get update \

# Install dependencies
&&  apt-get install -y gcc build-essential  --no-install-recommends  \
&&  pip install pycrypto \

# Cleanup
&& apt-get purge -y --auto-remove gcc build-essential \
&& rm -rf /var/lib/apt/lists/*

# Create the challenge directory
RUN mkdir /home/challenge

# Move the challenge files into the container
COPY flag.encrypted /home/challenge/flag.encrypted
COPY keys.txt /home/challenge/keys.txt
COPY challenge.py /home/challenge/challenge.py

# Expose the required port
EXPOSE 18734

# Serve
CMD ["python", "/home/challenge/challenge.py"]

# docker build . -t daas
# docker run -p 18734:18734 daas
