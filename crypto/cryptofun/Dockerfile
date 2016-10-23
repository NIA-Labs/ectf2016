FROM python:2.7-slim
RUN pip install pyyaml

COPY chall/ /home/chall/
EXPOSE 9999
WORKDIR /home/chall/

ENTRYPOINT ["python", "client.py"]
# docker build -t "cryptofun" .
# docker run -p 9999:9999 cryptofun
