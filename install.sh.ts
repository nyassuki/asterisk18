apt-get update -y
apt-get upgrade -y
apt-get install build-essential git autoconf wget subversion pkg-config libjansson-dev libxml2-dev uuid-dev libsqlite3-dev libtool -y
contrib/scripts/get_mp3_source.sh
contrib/scripts/install_prereq install
./configure
make menuselect
make
make -j2
make install
make samples
make basic-pbx
make config
ldconfig
 