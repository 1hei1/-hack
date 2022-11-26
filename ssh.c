kali 查看ssh服务状态：systemctl status ssh/service ssh status
启用ssh服务：systemctl start ssh
（启用远程文件传输时ssh应将/etc/ssh/sshd.config 修改其中的#permitrootlogin 后面的为yes并将#去除
