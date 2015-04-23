// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/kernel/kernel.h"
#include "core/hle/service/service.h"

namespace Service {
namespace PDN {

/// Initialize PDN service(s)
void Init();

/// Shutdown PDN service(s)
void Shutdown();

} // namespace PDN
} // namespace Service