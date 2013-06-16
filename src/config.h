#ifndef UZBL_CONFIG_H
#define UZBL_CONFIG_H

#include <glib.h>

const struct {
    gchar *command;
} default_config[] = {
{ "set status_format = <b>\\@[\\@TITLE]\\@</b> - \\@[\\@uri]\\@ - <span foreground=\"#bbb\">\\@NAME</span>" },
{ "set show_status = 1" },
{ "set title_format_long = \\@keycmd \\@TITLE - Uzbl browser <\\@NAME> > \\@SELECTED_URI" },
{ "set title_format_short = \\@TITLE - Uzbl browser <\\@NAME>" },
{ "set max_conns = 100" }, /* WebKitGTK default: 10 */
{ "set max_conns_host = 6" }, /* WebKitGTK default: 2 */
{ NULL }
};

#endif
