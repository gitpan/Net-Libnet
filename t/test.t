use warnings;
use strict;

use Net::Libnet;
use Test::More qw(no_plan);
use Sys::Hostname;

my $l = libnet_init(Net::Libnet::LIBNET_LINK);
isnt($l, undef, "Testing init") || diag libnet_error();
isa_ok($l, "Net::Libnet::Libnet", "ISA Net::Libnet::Libnet");
my $device = $l->getdevice();
like($device, qr/eth0|fxp0/, "getdevice test");
my $MACAddr = $l->get_hwaddr() || diag libnet_error();
my $addr;
$addr = sprintf "%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x", @$MACAddr;
like($addr, qr/^[0-9a-f]{2}/, "Check MAC Address") || diag "MAC Address:  $addr";
my $ip = $l->get_ipaddr4();
my $libnet_ip = get_ip_from_ipaddr4($ip);
my $libnet_hostname = get_hostname_from_ipaddr4($ip);
like($libnet_ip, qr/\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}/, "Check IP address");

my $sys_hostname;
SKIP: {
    eval { $sys_hostname = hostname(); };
    skip "Unable to get hostname from Sys::Hostname" if($@);
    is($libnet_hostname, $sys_hostname);
}    
