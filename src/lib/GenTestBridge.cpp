#include "deepstate/GenTestBridge.h"
#include <iostream>
#include <string>
#include "TranslationEngine.h"
#include "FileAssembler.h"

int DeepStateCreateStandalone( const char *output_filename,
                               const char *input_source_filename,
                               const char *binary_filename,
                               const char *translation_config_filename
                             )
{
    TranslationEngine parser;

    std::vector<Node> output = parser.getAST( input_source_filename );

    buildFile( output, binary_filename, output_filename, translation_config_filename);
}
