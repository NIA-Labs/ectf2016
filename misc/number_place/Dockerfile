# Base image
FROM python:2.7-slim

# Challenge author
MAINTAINER kishorbhat@gmail.com

# Make sure everything's up-to-date
RUN apt-get update \

# Install dependencies
&&  apt-get install -y gcc  build-essential  --no-install-recommends  \
&&  pip install roman \

# Cleanup
&& apt-get purge -y --auto-remove gcc build-essential \
&& rm -rf /var/lib/apt/lists/*

# Create the challenge directory
RUN mkdir -p /home/challenge /home/challenge/puzzles /home/challenge/solutions

# Move the challenge file into the container
COPY puzzles/ /home/challenge/puzzles/
COPY solutions/ /home/challenge/solutions/
COPY service.py /home/challenge/service.py

# Expose the required port
EXPOSE 10101

# Serve
CMD ["python", "/home/challenge/service.py"]

# docker build . -t number_place
# docker run -p 10101:10101 number_place
