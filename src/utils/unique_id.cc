// Copyright 2021 The Lynx Authors. All rights reserved.
// Licensed under the Apache License Version 2.0 that can be found in the
// LICENSE file in the root directory of this source tree.

#include "src/utils/unique_id.hpp"

#include <atomic>

namespace skity {

static std::atomic_size_t sLastID;
UniqueID::UniqueID() : id(++sLastID) {}

}  // namespace skity
