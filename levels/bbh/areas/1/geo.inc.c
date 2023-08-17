// 0x0E000670
const GeoLayout geo_bbh_000670[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0006B0
const GeoLayout geo_bbh_0006B0[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700AFF0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B1C8),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700B418),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B9E0),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700BBF8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0006E8
const GeoLayout geo_bbh_0006E8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D080),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700D2E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D490),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700D7E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012220),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012510),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070126E8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000730
const GeoLayout geo_bbh_000730[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700F510),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700F848),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000750
const GeoLayout geo_bbh_000750[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07011120),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000768
const GeoLayout geo_bbh_000768[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D080),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700D2E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D490),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700D7E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012220),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012510),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070126E8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0007B0
const GeoLayout geo_bbh_0007B0[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070139A8),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07013BE8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0007D0
const GeoLayout geo_bbh_0007D0[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07014FD8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07015398),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070156E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07015A20),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000800
const GeoLayout geo_bbh_000800[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07017378),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07017570),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07017788),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000828
const GeoLayout geo_bbh_000828[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07019EF8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701A080),
        GEO_ASM(   0, geo_movtex_pause_control),
        GEO_ASM(0x0400, geo_movtex_draw_water_regions),
        GEO_ASM(0x0401, geo_movtex_draw_water_regions),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000860
const GeoLayout geo_bbh_000860[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701A850),
        GEO_ASM(   0, geo_movtex_pause_control),
        GEO_ASM(0x0400, geo_movtex_draw_water_regions),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000888
const GeoLayout geo_bbh_000888[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701B6D0),
        GEO_ASM(   0, geo_movtex_pause_control),
        GEO_ASM(0x0400, geo_movtex_draw_water_regions),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0008B0
const GeoLayout geo_bbh_0008B0[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701E4E0),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701E8D8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701ED18),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0701EEC8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701F070),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0008E8
const GeoLayout geo_bbh_0008E8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700AFF0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B1C8),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700B418),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B9E0),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700BBF8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000950
const GeoLayout geo_bbh_000950[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D080),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700D2E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D490),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700D7E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012220),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012510),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070126E8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E0009C8
const GeoLayout geo_bbh_0009C8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700F510),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700F848),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000A18
const GeoLayout geo_bbh_000A18[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07011120),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000A60
const GeoLayout geo_bbh_000A60[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D080),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700D2E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D490),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700D7E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012220),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012510),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070126E8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000AD8
const GeoLayout geo_bbh_000AD8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070139A8),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07013BE8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000B28
const GeoLayout geo_bbh_000B28[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07014FD8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07015398),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070156E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07015A20),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000B88
const GeoLayout geo_bbh_000B88[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_070075A8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_07007940),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07007B90),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07007FD0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07008B58),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07008EA8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701E4E0),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701E8D8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701ED18),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0701EEC8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701F070),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000BF0
const GeoLayout geo_bbh_000BF0[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700AFF0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B1C8),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700B418),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B9E0),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700BBF8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700F510),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700F848),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000C38
const GeoLayout geo_bbh_000C38[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700AFF0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B1C8),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700B418),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B9E0),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700BBF8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07017378),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07017570),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07017788),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000C88
const GeoLayout geo_bbh_000C88[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700AFF0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B1C8),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700B418),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700B9E0),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700BBF8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07019EF8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701A080),
        GEO_ASM(   0, geo_movtex_pause_control),
        GEO_ASM(0x0400, geo_movtex_draw_water_regions),
        GEO_ASM(0x0401, geo_movtex_draw_water_regions),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000CE8
const GeoLayout geo_bbh_000CE8[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D080),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700D2E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D490),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700D7E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07011120),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000D20
const GeoLayout geo_bbh_000D20[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D080),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700D2E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700D490),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0700D7E0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012220),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07012510),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_070126E8),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000D68
const GeoLayout geo_bbh_000D68[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0700F510),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0700F848),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07019EF8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701A080),
        GEO_ASM(   0, geo_movtex_pause_control),
        GEO_ASM(0x0400, geo_movtex_draw_water_regions),
        GEO_ASM(0x0401, geo_movtex_draw_water_regions),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000DB0
const GeoLayout geo_bbh_000DB0[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07011120),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701E4E0),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701E8D8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701ED18),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0701EEC8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701F070),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000DF0
const GeoLayout geo_bbh_000DF0[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07017378),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07017570),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_07017788),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701E4E0),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701E8D8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701ED18),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0701EEC8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701F070),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000E40
const GeoLayout geo_bbh_000E40[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_07019EF8),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701A080),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701A850),
        GEO_ASM(   0, geo_movtex_pause_control),
        GEO_ASM(0x0400, geo_movtex_draw_water_regions),
        GEO_ASM(0x0401, geo_movtex_draw_water_regions),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000E80
const GeoLayout geo_bbh_000E80[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701A850),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701B6D0),
        GEO_ASM(   0, geo_movtex_pause_control),
        GEO_ASM(0x0400, geo_movtex_draw_water_regions),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000EB0
const GeoLayout geo_bbh_000EB0[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701B6D0),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701E4E0),
        GEO_DISPLAY_LIST(LAYER_ALPHA, bbh_seg7_dl_0701E8D8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701ED18),
        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_seg7_dl_0701EEC8),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_seg7_dl_0701F070),
        GEO_ASM(   0, geo_movtex_pause_control),
        GEO_ASM(0x0400, geo_movtex_draw_water_regions),
    GEO_CLOSE_NODE(),
    GEO_RETURN(),
};

// 0x0E000F00
const GeoLayout geo_bbh_000F00[] = {
    GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
    GEO_OPEN_NODE(),
        GEO_ZBUFFER(0),
        GEO_OPEN_NODE(),
            GEO_NODE_ORTHO(100),
            GEO_OPEN_NODE(),
                GEO_BACKGROUND(BACKGROUND_HAUNTED, geo_skybox_main),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
        GEO_ZBUFFER(1),
        GEO_OPEN_NODE(),
            GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 50, 10000, geo_camera_fov),
            GEO_OPEN_NODE(),
                GEO_CAMERA(4, 0, 2000, 6000, 0, 0, 0, geo_camera_main),
                GEO_OPEN_NODE(),
                    GEO_SWITCH_CASE(32, geo_switch_area),
                    GEO_OPEN_NODE(),
                        GEO_BRANCH(1, geo_bbh_000670), // 0x0E000670
                        GEO_BRANCH(1, geo_bbh_0006B0), // 0x0E0006B0
                        GEO_BRANCH(1, geo_bbh_0006E8), // 0x0E0006E8
                        GEO_BRANCH(1, geo_bbh_000730), // 0x0E000730
                        GEO_BRANCH(1, geo_bbh_000750), // 0x0E000750
                        GEO_BRANCH(1, geo_bbh_000768), // 0x0E000768
                        GEO_BRANCH(1, geo_bbh_0007B0), // 0x0E0007B0
                        GEO_BRANCH(1, geo_bbh_0007D0), // 0x0E0007D0
                        GEO_BRANCH(1, geo_bbh_000800), // 0x0E000800
                        GEO_BRANCH(1, geo_bbh_000828), // 0x0E000828
                        GEO_BRANCH(1, geo_bbh_000860), // 0x0E000860
                        GEO_BRANCH(1, geo_bbh_000888), // 0x0E000888
                        GEO_BRANCH(1, geo_bbh_0008B0), // 0x0E0008B0
                        GEO_BRANCH(1, geo_bbh_0008E8), // 0x0E0008E8
                        GEO_BRANCH(1, geo_bbh_000950), // 0x0E000950
                        GEO_BRANCH(1, geo_bbh_0009C8), // 0x0E0009C8
                        GEO_BRANCH(1, geo_bbh_000A18), // 0x0E000A18
                        GEO_BRANCH(1, geo_bbh_000A60), // 0x0E000A60
                        GEO_BRANCH(1, geo_bbh_000AD8), // 0x0E000AD8
                        GEO_BRANCH(1, geo_bbh_000B28), // 0x0E000B28
                        GEO_BRANCH(1, geo_bbh_000B88), // 0x0E000B88
                        GEO_BRANCH(1, geo_bbh_000BF0), // 0x0E000BF0
                        GEO_BRANCH(1, geo_bbh_000C38), // 0x0E000C38
                        GEO_BRANCH(1, geo_bbh_000C88), // 0x0E000C88
                        GEO_BRANCH(1, geo_bbh_000CE8), // 0x0E000CE8
                        GEO_BRANCH(1, geo_bbh_000D20), // 0x0E000D20
                        GEO_BRANCH(1, geo_bbh_000D68), // 0x0E000D68
                        GEO_BRANCH(1, geo_bbh_000DB0), // 0x0E000DB0
                        GEO_BRANCH(1, geo_bbh_000DF0), // 0x0E000DF0
                        GEO_BRANCH(1, geo_bbh_000E40), // 0x0E000E40
                        GEO_BRANCH(1, geo_bbh_000E80), // 0x0E000E80
                        GEO_BRANCH(1, geo_bbh_000EB0), // 0x0E000EB0
                    GEO_CLOSE_NODE(),
                    GEO_RENDER_OBJ(),
                    GEO_ASM(0, geo_envfx_main),
                GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
