// Copyright 2021 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include "Common/CommonTypes.h"
#include "Common/Config/Config.h"

namespace Config
{
extern const Info<bool> SESSION_USE_FMA;
extern const Info<bool> SESSION_LOAD_IPL_DUMP;
extern const Info<bool> SESSION_GCI_FOLDER_CURRENT_GAME_ONLY;
extern const Info<bool> SESSION_CODE_SYNC_OVERRIDE;
extern const Info<bool> SESSION_WII_SD_CARD_WRITABLE;
}  // namespace Config
