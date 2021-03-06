# Generated automatically from Makefile.PL.in by configure.
use ExtUtils::MakeMaker;
use Config;

# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    'NAME'	=> 'Image::Magick',
    'VERSION_FROM' => 'Magick.pm', # finds $VERSION
    'LIBS'	=> ['-L/usr/local/lib -L/usr/local/lib -lMagick -ltiff -ljpeg -lpng -lXext -lXt -lX11 -lz -lm'],
    'DEFINE'	=> '-DHAVE_CONFIG_H',     # e.g., '-DHAVE_SOMETHING' 
    'INC'	=> '-I.. -I/usr/local/include',
    ($Config{'archname'} =~ /-object$/i ? ('CAPI' => 'TRUE') : ()),
);

#
# Modify the MakeMaker test fragment
#
sub MY::test
{
   #
   # List any ImageMagick features derived from add-on libraries
   # or programs you would like to test.
   #
   # Valid choices are:
   #
   #  Feature   Formats Tested		Prerequisites
   #  =======   ======================	======================================
   #   bzlib    BZip compression        BZip library
   #   cgm	CGM format		'ralcgm' program
   #   hdf	HDF format		HDF library
   #   jbig	JBIG format		JBIG library
   #   jpeg 	JPEG format		JPEG library
   #   mpeg	MPEG format		'mpeg2decode' & 'mpeg2encode' programs
   #   png	PNG format		PNG and Zlib libraries
   #   ps	Postscript format	'gs' program and/or DPS library
   #   rad	Radiance format		'ra_ppm' program
   #   tiff	TIFF format		TIFF library
   #   ttf	TrueType font format	FreeType library
   #   x	X11 support		X-windows libraries and server
   #   xfig	Xfig format		'transfig' program
   #   zlib	Zip compression		Zlib library
   #
   # e.g. my @DELEGATES = qw/jpeg tiff/;
   #
   my @DELEGATES = qw/ jpeg png tiff x zlib/;

   package MY; # so that "SUPER" works right
   my $inherited = shift->SUPER::test(@_);
   my $delegate_tests='';
   my $delegate;
   foreach $delegate (@DELEGATES) {
     if( -d "t/$delegate" ) {
       $delegate_tests .= " t/$delegate/*.t";
    }
   }
   $inherited =~ s:^TEST_FILES =.*:TEST_FILES = t/*.t ${delegate_tests}:m;
   $inherited;
}

