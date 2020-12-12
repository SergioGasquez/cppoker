# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.154.0/containers/cpp/.devcontainer/base.Dockerfile

#Ubuntu version: ubuntu-20.04
FROM mcr.microsoft.com/vscode/devcontainers/cpp:focal

# Install additional packages.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends clang clang-tidy cmake doxygen graphviz ccache cppcheck python3-pip


RUN pip3 install --user conan

# Create a symbolic link since conan wasnt installed system wise
RUN sudo ln -s ~/.local/bin/conan /usr/bin/conan


# Enviroment variables ///@TODO: Make them permanent
RUN CC=clang CXX=clang++


RUN CC=clang CXX=clang++

# # Copy the current folder which contains C++ source code to the Docker image under /usr/src
# COPY . /app

# # Specify the working directory
# WORKDIR /app

# # Use Clang to compile the Test.cpp source file
# RUN clang++ -o Test main.cpp

# # Run the output program from the previous step
# CMD ["./Test"]