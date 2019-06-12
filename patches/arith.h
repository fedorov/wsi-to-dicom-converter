// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CONFIG_ARITH_H
#define CONFIG_ARITH_H

#define DCMTK_SIGNED_CHAR_DIGITS10 2
#define DCMTK_UNSIGNED_CHAR_DIGITS10 2
#define DCMTK_SIGNED_SHORT_DIGITS10 4
#define DCMTK_UNSIGNED_SHORT_DIGITS10 4
#define DCMTK_SIGNED_INT_DIGITS10 9
#define DCMTK_UNSIGNED_INT_DIGITS10 9
#define DCMTK_SIGNED_LONG_DIGITS10 18
#define DCMTK_UNSIGNED_LONG_DIGITS10 19
#define DCMTK_FLOAT_MAX_DIGITS10 9
#define DCMTK_DOUBLE_MAX_DIGITS10 17
#define DCMTK_CHAR_TRAPS OFTrue
#define DCMTK_CHAR_MODULO OFTrue
#define DCMTK_SIGNED_CHAR_TRAPS OFTrue
#define DCMTK_SIGNED_CHAR_MODULO OFTrue
#define DCMTK_UNSIGNED_CHAR_TRAPS OFTrue
#define DCMTK_UNSIGNED_CHAR_MODULO OFTrue
#define DCMTK_SIGNED_SHORT_TRAPS OFTrue
#define DCMTK_SIGNED_SHORT_MODULO OFTrue
#define DCMTK_UNSIGNED_SHORT_TRAPS OFTrue
#define DCMTK_UNSIGNED_SHORT_MODULO OFTrue
#define DCMTK_SIGNED_INT_TRAPS OFTrue
#define DCMTK_SIGNED_INT_MODULO OFFalse
#define DCMTK_UNSIGNED_INT_TRAPS OFTrue
#define DCMTK_UNSIGNED_INT_MODULO OFTrue
#define DCMTK_SIGNED_LONG_TRAPS OFTrue
#define DCMTK_SIGNED_LONG_MODULO OFFalse
#define DCMTK_UNSIGNED_LONG_TRAPS OFTrue
#define DCMTK_UNSIGNED_LONG_MODULO OFTrue
#define DCMTK_FLOAT_TRAPS OFFalse
#define DCMTK_DOUBLE_TRAPS OFFalse
#define DCMTK_FLOAT_HAS_INFINITY OFTrue
#define DCMTK_FLOAT_INFINITY \
  *OFreinterpret_cast(const float*, "\000\000\200\177")
#define DCMTK_DOUBLE_HAS_INFINITY OFTrue
#define DCMTK_DOUBLE_INFINITY \
  *OFreinterpret_cast(const double*, "\000\000\000\000\000\000\360\177")
#define DCMTK_FLOAT_HAS_QUIET_NAN OFTrue
#define DCMTK_FLOAT_QUIET_NAN \
  *OFreinterpret_cast(const float*, "\000\000\300\177")
#define DCMTK_DOUBLE_HAS_QUIET_NAN OFTrue
#define DCMTK_DOUBLE_QUIET_NAN \
  *OFreinterpret_cast(const double*, "\000\000\000\000\000\000\370\177")
#define DCMTK_FLOAT_HAS_SIGNALING_NAN OFTrue
#define DCMTK_FLOAT_SIGNALING_NAN \
  *OFreinterpret_cast(const float*, "\001\000\200\177")
#define DCMTK_DOUBLE_HAS_SIGNALING_NAN OFTrue
#define DCMTK_DOUBLE_SIGNALING_NAN \
  *OFreinterpret_cast(const double*, "\001\000\000\000\000\000\360\177")
#define DCMTK_FLOAT_IS_IEC559 OFTrue
#define DCMTK_DOUBLE_IS_IEC559 OFTrue
#define DCMTK_FLOAT_HAS_DENORM OFdenorm_present
#define DCMTK_FLOAT_DENORM_MIN \
  *OFreinterpret_cast(const float*, "\001\000\000\000")
#define DCMTK_DOUBLE_HAS_DENORM OFdenorm_present
#define DCMTK_DOUBLE_DENORM_MIN \
  *OFreinterpret_cast(const double*, "\001\000\000\000\000\000\000\000")
#define DCMTK_FLOAT_TINYNESS_BEFORE OFTrue
#define DCMTK_DOUBLE_TINYNESS_BEFORE OFTrue
#define DCMTK_FLOAT_HAS_DENORM_LOSS OFTrue
#define DCMTK_DOUBLE_HAS_DENORM_LOSS OFTrue
#define DCMTK_ROUND_STYLE 1

#endif  // CONFIG_ARITH_H
