#ifndef __ETCD_JSON_CONSTANTS_HPP__
#define __ETCD_JSON_CONSTANTS_HPP__

#include <cpprest/basic_types.h>
using namespace utility;

namespace etcd
{
  extern char_t const * JSON_KEY;
  extern char_t const * JSON_DIR;
  extern char_t const * JSON_VALUE;
  extern char_t const * JSON_CREATED;
  extern char_t const * JSON_MODIFIED;
  extern char_t const * JSON_ERROR_CODE;
  extern char_t const * JSON_MESSAGE;
  extern char_t const * JSON_ACTION;
  extern char_t const * JSON_NODE;
  extern char_t const * JSON_NODES;
  extern char_t const * JSON_PREV_NODE;
  extern char_t const * JSON_ETCD_INDEX;
};

#endif
