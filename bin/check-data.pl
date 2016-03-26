#!/usr/bin/env perl
# Check song index data.

use strict;
use warnings;

use autodie;
use DBI;

my $dbh = DBI->connect('lectionary', 'lectionary');

1;

__END__
