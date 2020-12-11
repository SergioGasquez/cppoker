# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.154.0/containers/cpp/.devcontainer/base.Dockerfile

# [Choice] Debian / Ubuntu version: debian-10, debian-9, ubuntu-20.04, ubuntu-18.04
FROM mcr.microsoft.com/vscode/devcontainers/cpp:focal

# [Optional] Uncomment this section to install additional packages.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends clang cmake doxygen graphviz ccache cppcheck python3-pip

# # Copy the current folder which contains C++ source code to the Docker image under /usr/src
# COPY . /app

# # Specify the working directory
# WORKDIR /app

# # Use Clang to compile the Test.cpp source file
# RUN clang++ -o Test main.cpp

# # Run the output program from the previous step
# CMD ["./Test"]