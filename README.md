###### *请注意这是个Teeworlds 0.6 Mod (DDNet-compatible)，如果您要0.7版本，请前往 不完善的[InfNext2](https://github.com/Bamcane/teeworlds-InfNext)*

# Teeworlds InfRework
InfClassCR的重置版本
修改自 [yavl 的 InfClassR](https://github.com/yavl/teeworlds-infclassR).

## 克隆库并构建
安装 [bam](https://github.com/matricks/bam) 0.5 构建工具。
```
git clone https://github.com/TeeMidnight/teeworlds-infRework
cd teeworlds-infRework
```
然后把bam构建工具复制到teeworlds-infRework。记得把所有命令中的库url换成本库或者其它库。

### Ubuntu / Mint / Debian
```bash
sudo apt install libicu-dev
./bam server_debug
```
查看 [yavl版原wiki](https://github.com/yavl/teeworlds-infclassR/wiki) 来了解更多。

### macOS 
via [Homebrew](https://brew.sh):
```bash
brew install icu4c libmaxminddb
./bam server_debug_x86_64
```

### Windows 
应当安装GCC编译器，例如[Mingw-w64](https://mingw-w64.org)。
```
bam config stackprotector=true
bam server_debug
```

## 服务器指令
查看[yavl版原wiki](https://github.com/yavl/teeworlds-infclassR/wiki)
