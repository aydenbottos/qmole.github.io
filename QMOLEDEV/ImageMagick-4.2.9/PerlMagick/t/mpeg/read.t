#!/usr/local/bin/perl
#
# Test reading MPEG files
#
# Whenever a new test is added/removed, be sure to update the
# 1..n ouput.
#
BEGIN { $| = 1; $test=1; print "1..2\n"; }
END {print "not ok $test\n" unless $loaded;}
use Image::Magick;
$loaded=1;

require 't/subroutines.pl';

chdir 't/mpeg' || die 'Cd failed';

#
# Motion Picture Experts Group file interchange format (version 2)
#
testRead( 'input.m2v', '64138d0d08b9d01a612d17c1a9a3c7cf' );

#
# Motion Picture Experts Group file interchange format
#
++$test;
testRead( 'input.mpg', 'c7892b739f74c97da4a885fb1b1472b5' );

1;
