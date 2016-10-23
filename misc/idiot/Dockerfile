# Base image
FROM python:2.7-slim

# Challenge author
MAINTAINER kishorbhat@gmail.com

# Make sure everything's up-to-date
RUN apt-get update \

# Install dependencies
&&  apt-get install -y gcc build-essential git --no-install-recommends \
&&  pip install twisted \
&&  git clone https://github.com/mwasilak/txThings.git /home/txThings \
&&  cd /home/txThings \
&&  python setup.py install \

# Cleanup
&& apt-get purge -y --auto-remove gcc build-essential git \
&& rm -rf /var/lib/apt/lists/* \
&& rm -rf /home/txThings

# Create the challenge directory
RUN mkdir -p /home/challenge

# Move the challenge file into the container
COPY service.py /home/challenge/service.py

# Expose the required port
EXPOSE 5683

# Serve
CMD ["python", "/home/challenge/service.py"]

# docker build . -t idiot
# docker run -p 5683:5683/udp idiot
