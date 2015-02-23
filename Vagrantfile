# -*- mode: ruby -*-
# vi: set ft=ruby :

VAGRANTFILE_API_VERSION = "2"

Vagrant.configure(VAGRANTFILE_API_VERSION) do |config|
  config.vm.box = "ubuntu/trusty64"
  config.vm.provider :virtualbox do |vb|
    vb.customize [
      "modifyvm", :id,
      "--name", "TEIA_ENW_dev",
      "--memory", "1024"
    ]
  end
  config.vm.network :forwarded_port, guest: 8080, host: 8080
  config.vm.network :forwarded_port, guest: 8022, host: 8022
  config.vm.network :private_network, ip: "192.168.10.2"    # for NFS
  config.vm.synced_folder ".", "/vagrant", :nfs => true
  config.vm.provision :docker do |d|
    d.pull_images "pomin5/drupal7-nginx"
    d.run "drupal7_db",
      image: "mysql",
      args: "-v /var/lib/mysql\\
        -p 8306:3306 \\
        -e MYSQL_ROOT_PASSWORD=foobar \\
        -e MYSQL_USER=app \\
        -e MYSQL_PASSWORD=foobar \\
        -e MYSQL_DATABASE=app \\
        "
    d.run "drupal7_app",
      image: "pomin5/drupal7-nginx",
      args: "-p 8080:80 -p 8022:22 -p 8020:20 -p 8021:21 \\
        --link drupal7_db:db \\
        -e ENABLE_FTP=1 \\
        -e ENABLE_MY_KEY=1 \\
        -v /vagrant:/var/www \\
        -v /vagrant/.run/log:/var/log"
  end
end
