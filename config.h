#ifndef CONFIG_H
#define CONFIG_H

#include <stdbool.h>

#define URGENT_ON_BEEP
#define DYNAMIC_TITLE
#define CLICKABLE_URL

#ifdef CLICKABLE_URL
static const char *url_regex = "(ftp|http)s?://[-a-zA-Z0-9.?$%&/=_~#.,:;+]*";
static const char *url_command = "/usr/bin/firefox-nightly";
#endif

// 0.0: opaque, 1.0: transparent
//#define TRANSPARENCY 0.2

static const char *font = "Consolas 10";
static const long scrollback_lines = 1500;

static const char *foreground_color = "#898989";
static const char *background_color = "#1c1c1c";

static const char *colors[16] = {
    "#3f3f3f", // black
    "#705050", // red
    "#60b48a", // green
    "#dfaf8f", // yellow
    "#506070", // blue
    "#dc8cc3", // magenta
    "#8cd0d3", // cyan
    "#dcdccc", // white
    "#709080", // bright black
    "#dca3a3", // bright red
    "#c3bf9f", // bright green
    "#f0dfaf", // bright yellow
    "#94bff3", // bright blue
    "#ec93d3", // bright magenta
    "#93e0e3", // bright cyan
    "#ffffff", // bright white
};

static const bool scroll_on_output = false;
static const bool scroll_on_keystroke = true;

static const bool audible_bell = false;
static const bool visible_bell = false;

static const bool mouse_autohide = false;

static const char *term = "vte-256color";

#endif
