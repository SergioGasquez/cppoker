# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.154.0/containers/cpp/.devcontainer/base.Dockerfile

#Ubuntu version: ubuntu-20.04
FROM mcr.microsoft.com/vscode/devcontainers/cpp:focal

# Install additional packages.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends clang clang-tidy cmake doxygen graphviz ccache cppcheck python3-pip


RUN pip3 install conan
