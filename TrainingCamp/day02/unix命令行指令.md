//
//  Created by Codey on 2015/8/25.
//
man(manual，使用手册)
ls
ls -l
ls -a(以.开头的文件为隐藏文件；.代表当前目录；..代表父目录)
cd（change direction）
tab
pwd
/(文件路径最前面为根，文件路径中间为分隔符)
touch filename(创建文件)
open filename(打开文件)
cat filename(查看文件)
copy
vi filename(编辑文件),(:q-退出编辑),其他？？？

rm:删除文件
rmdir:删除文件夹(仅限空文件夹)
mkdir


与网络相关:
ifconfig   查看当前的网络配置
ping xx    物理连接是否正常(control+c结束)
telnet xx  远程登录(login, password; logout或者exit退出)
ftp xx        文件传输(put xx)

其他:
ps aux  | grep "telnet"  查看当前用户的所有程序(关于telnet)
kill            给指定的程序发信号, 922信号

GNU编译器套件：GNU Compiler Collection,gcc
gcc xm.c -o xn 或者gcc xm.c -o xn.out
gcc xm.c 默认生成a.out文件，
但是用参数-o 可以生成xxx.xxx 或者xxx的文件，均可用./filename来运行
gcc xm.c -o xm && ./xm  ：编译后运行