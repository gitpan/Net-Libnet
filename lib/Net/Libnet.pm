package Net::Libnet;

use warnings;
use strict;

require Exporter;
require DynaLoader;

=head1 NAME

Net::Libnet - Perl interface to libnet

=head1 VERSION

Version 0.01_01

=cut

our $VERSION = '0.01_01';
our @ISA = qw(Exporter DynaLoader);

our @EXPORT = qw (
    libnet_init
    libnet_error
    LIBNET_LINK
    LIBNET_RAW4
    LIBNET_RAW6
    LIBNET_LINK_ADV
    LIBNET_RAW4_ADV
    LIBNET_RAW6_ADV
    LIBNET_ADV_MASK
    );

bootstrap Net::Libnet $VERSION ;

use constant LIBNET_LINK          => 0x00;
use constant LIBNET_RAW4          => 0x01;
use constant LIBNET_RAW6          => 0x02;
use constant LIBNET_LINK_ADV      => 0x08;
use constant LIBNET_RAW4_ADV      => 0x09;
use constant LIBNET_RAW6_ADV      => 0x0a;
use constant LIBNET_ADV_MASK      => 0x08;

=head1 SYNOPSIS

This module provides a Perl interface to Libnet, a library that allows the 
high level creation of network packets.  The library contains several utility 
routines to help with this.

    use Net::Libnet;

    my $l = libnet_init(LIBNET_LINK) || die libnet_error();

    $l->getdevice();  # prints ethernet devive (i.e. eth0)

    my $MACAddr = $l->get_hwaddr() || diag libnet_error();

    # print the MAC Address
    printf "%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x\n", @$MACAddr;

    ...

=head1 EXPORT

libnet_init() and libnet_error() are exported by default.  Several constants
used for the injection type for libnet_init() are exported as well.

=head1 EXPORTED FUNCTIONS

=head2 $libnet = libnet_init($injection_type [, $device])

This function returns an initialize Net::Libnet::Libnet object.  The device
is optional.  If one is not provided, libnet_init() will choose a device.  If
errors occur, undef is returned and the error message can be retrieved by 
calling libnet_error().

=head2 $error = libnet_error()

This function returns a string containing the last error message generated.

=head1 Net::Libnet::Libnet FUNCTIONS

=head2 $device = $l->getdevice()

This function rturns the device used by libnet_init().

=head2 my $MACAddr = $l->get_hwaddr() || diag libnet_error()

This function returns an array reference containing the integer values for the
hardware address (i.e. the MAC address) in separate entries in the array.  If 
errors occur during this function, the error can be retrieved using 
libnet_error().

=head1 NOTES

The current release is the first release of this module, and it is a very
incomplete implementation.  I'm working under the "Release Early and Often"
philosophy.  If part of Libnet that you need is missing and you'd like to 
see earlier, let me know and I'll bump that up the list.

Also, most Libnet functions can only be run by root users.  This includes 
the test scripts used to test this module.

=head1 AUTHOR

Steve Peters, C<< <steve@fisharerojo.org> >>

=head1 BUGS

Please report any bugs or feature requests to
C<bug-net-libnet@rt.cpan.org>, or through the web interface at
L<http://rt.cpan.org>.  I will be notified, and then you'll automatically
be notified of progress on your bug as I make changes.

=head1 ACKNOWLEDGEMENTS

C<Libnet|http://www.packetfactory.net/libnet/>

=head1 COPYRIGHT & LICENSE

Copyright 2004 Steve Peters, All Rights Reserved.

This program is free software; you can redistribute it and/or modify it
under the same terms as Perl itself.

=cut

1; # End of Net::Libnet
