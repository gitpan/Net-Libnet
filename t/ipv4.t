use warnings;
use strict;

use Net::Libnet;
use Test::More qw(no_plan);
use Sys::Hostname;

my $l = libnet_init(LIBNET_LINK);
if(! defined $l) {
    diag libnet_error();
}
my $ip = $l->get_ipaddr4();
isa_ok($ip, "Net::Libnet::IPv4");
my $libnet_ip = $ip->get_ip_addr();
my $libnet_hostname = $ip->get_hostname();
like($libnet_ip, qr/\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}/, "Check IP address");

#my $sys_hostname;
#SKIP: {
#    eval { $sys_hostname = hostname(); };
#    skip "Unable to get hostname from Sys::Hostname" if($@);
#    is($libnet_hostname, $sys_hostname);
#}    
