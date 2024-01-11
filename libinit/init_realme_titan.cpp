
/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>
#include <unistd.h>

#include "vendor_init.h"

static const variant_info_t titan_global_info = {
    .hwc_value = "",
    .sku_value = "titan",

    .brand = "Realme",
    .device = "titan",
    .marketname = "Realme 10 Pro Plus 5G",
    .model = "rmx3686",
    .build_fingerprint = "realme/titan/titan:12/SP1A.210812.016/1695642825420:user/release-keys"
};
static const std::vector<variant_info_t> variants = {
    tian_global_info,
};



void vendor_load_properties() {
        if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}
