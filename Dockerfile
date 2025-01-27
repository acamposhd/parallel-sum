FROM ubuntu:latest
RUN apt-get update && apt-get install -y build-essential libomp-dev
COPY sum_array.c /app/
WORKDIR /app
RUN gcc -fopenmp sum_array.c -o sum_array
CMD ["./sum_array"]

