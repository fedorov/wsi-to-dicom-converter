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

#ifndef FRAME_H
#define FRAME_H
#include <openslide.h>
#include <stdlib.h>
#include <vector>
#include "compressor.h"
#include "enums.h"
class Frame {
 private:
  uint8_t *data_;
  size_t size_;
  bool done_;
  openslide_t *osr_;
  int64_t locationX_;
  int64_t locationY_;
  int level_;
  int64_t frameWidhtDownsampled_;
  int64_t frameHeightDownsampled_;
  int64_t frameWidht_;
  int64_t frameHeight_;
  double multiplicator_;
  Compressor *compressor_;

 public:
  Frame(openslide_t *osr, int64_t locationX, int64_t locationY, int32_t level,
        int64_t frameWidhtDownsampled, int64_t frameHeightDownsampled,
        double multiplicator, int64_t frameWidht, int64_t frameHeight_,
        DCM_Compression compression, int quality);
  ~Frame();
  void sliceFrame();
  bool isDone();
  uint8_t *getData();
  size_t getSize();
};

#endif  // FRAME_H
