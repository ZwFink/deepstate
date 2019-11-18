#define CATCH_CONFIG_MAIN // DO NOT define this anywhere else
#include "catch.hpp"
#include "BinaryParser.h"
#include "TranslationEngine.h"


// BinaryParser Tests
TEST_CASE( "Test Parser and Iterator", "[binary_parser]" )

{
    BinaryParser bp;

    REQUIRE_THROWS( bp.getIterator() );
    REQUIRE_THROWS( bp.parse( "invalid_file_name" ) );

    bp.parse( "../test/test_data/binary_test_20b.test" );

    auto iter = bp.getIterator();

    SECTION( "Binary Iterator UChar" )
        {


            for( int index = 0; index < 20; ++index )
                {
                    // i know the layout of the file
                    unsigned char a = iter.nextUChar();
                    REQUIRE( a == (unsigned char) index  );

                }

            // end of the road, error should be thrown
            REQUIRE_THROWS( iter.nextUChar() );
        }

    SECTION( "Rewinding more positions than the size of the buffer "
             "resets index to zero."
             )
        {

            iter.rewind( 2000000 );
            REQUIRE( iter.nextUChar() == 0x00 );

            iter.rewind();
            iter.nextInt();
            REQUIRE( iter.nextUChar() == 0x01 );
        }

    iter.rewind();

    SECTION( "Binary Iterator Int" )
        {
            int a = iter.nextInt();

            // reverse order of bytes because x86 is little-endian
            REQUIRE( a == 0x03020100 );

            a = iter.nextInt();
            REQUIRE( a == 0x04030201 );

            a = iter.nextInt();
            REQUIRE( a == 0x05040302 );

            a = iter.nextInt();
            REQUIRE( a == 0x06050403 );
        }

    iter.rewind( 200 );

}








// FileAssembler Tests







// TranslationEngine Tests
TEST_CASE( "Test TranslationEngine", "[translation_engine]")
{
    SECTION( "Translation Engine FileParser Tests" )
    {

    }
}






// Util Tests
