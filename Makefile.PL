use strict;
use warnings;
use ExtUtils::MakeMaker;

WriteMakefile(
    NAME                => 'Net::Libnet',
    AUTHOR              => 'Steve <steve@fisharerojo.org>',
    VERSION_FROM        => 'lib/Net/Libnet.pm',
    ABSTRACT_FROM       => 'lib/Net/Libnet.pm',
    PL_FILES            => {},
    LIBS                => '-lnet',
    PREREQ_PM => {
        'Test::More' => 0,
    },
    dist                => { COMPRESS => 'gzip -9f', SUFFIX => 'gz', },
    clean               => { FILES => 'Net-Libnet-*' },
);
