use warnings;
use strict;

use Net::Libnet;
use Test::More qw(no_plan);
use Data::Dumper;
use Devel::Peek;

my $l = libnet_init(Net::Libnet::LIBNET_LINK);
isnt($l, undef, "Testing init") || diag libnet_error();
isa_ok($l, "Net::Libnet::Libnet", "ISA Net::Libnet::Libnet");
my $device = $l->getdevice();
like($device, qr/eth0|fxp0/, "getdevice test");
my $MACAddr = $l->get_hwaddr() || diag libnet_error();
my $addr;
$addr = sprintf "%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x", @$MACAddr;
like($addr, qr/^[0-9a-f]{2}/, "Check MAC Address") || diag "MAC Address:  $addr";
