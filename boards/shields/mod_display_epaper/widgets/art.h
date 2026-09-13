/*
 * Copyright (c) 2026 Splitkb.com
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <lvgl.h>
#include <zephyr/sys/util.h>

#if IS_ENABLED(CONFIG_HALCYON_EPAPER_ART_FRIEREN)
LV_IMG_DECLARE(FrierenCloseup);
#define HALCYON_EPAPER_ART (&FrierenCloseup)
#elif IS_ENABLED(CONFIG_HALCYON_EPAPER_ART_HIMMEL)
LV_IMG_DECLARE(HimmelCloseup);
#define HALCYON_EPAPER_ART (&HimmelCloseup)
#elif IS_ENABLED(CONFIG_SHIELD_MOD_DISPLAY_EPAPER_FOREST)
LV_IMG_DECLARE(Forest);
#define HALCYON_EPAPER_ART (&Forest)
#elif IS_ENABLED(CONFIG_SHIELD_MOD_DISPLAY_EPAPER_MOUNTAIN)
LV_IMG_DECLARE(Mountain);
#define HALCYON_EPAPER_ART (&Mountain)
#elif IS_ENABLED(CONFIG_SHIELD_MOD_DISPLAY_EPAPER_CITYSCAPE)
LV_IMG_DECLARE(Cityscape);
#define HALCYON_EPAPER_ART (&Cityscape)
#endif
