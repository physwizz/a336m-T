a336m-T
=======

1. git clone git@github.com:physwizz/a336m-T.git


sudo -s

virtualenv -p /usr/bin/python2.7 Vpy27

source Vpy27/bin/activate



2. build
========

cd a336m-T

make clean && make mrproper
export PLATFORM_VERSION=13
export ANDROID_MAJOR_VERSION=T
export PATH=toolchain/clang/host/linux-x86/clang-r416183b/bin/:$PATH
export PATH=toolchain/build/build-tools/path/linux-x86:$PATH
export PATH=toolchain/prebuilts/gas/linux-x86:$PATH
export TARGET_SOC=s5e8825
export LLVM=1 LLVM_IAS=1
export ARCH=arm64
make physwizz_defconfig
make

